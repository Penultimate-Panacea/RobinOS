/*
 * Alyssa Hove
 * 9/19/18
 * CS 320 Operating Systems
 * Basic Round Robin
 */

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <iomanip>
#include <ctime>
#include "Scheduler.h"

using namespace std;

Scheduler::Scheduler(int process_num, int need_time, int duration, bool complete){
    set_process_num(process_num);
    set_need_time(need_time);
    set_duration(duration);
    set_complete(complete);
};
//setters
void Scheduler::set_process_num(int process_num){
    process_num = process_num;
}
void Scheduler::set_need_time(int need_time){
    need_time = need_time;
}
void Scheduler::set_duration(int duration){
    duration = duration;
}

void Scheduler::set_complete(bool complete){
    complete = complete;
}

//getters
int Scheduler::get_process_num(){
    return process_num;
}
int Scheduler::get_need_time(){
    return need_time;
}
int Scheduler::get_duration(){
    return duration;
}

/*void Scheduler::initialize(Scheduler &object, int n){ // initializes the array
    for (int i = 0; i < n; i++)
    {
        &object[i].process_num = 0;
        &object[i].need_time = 0;
        &object[i].duration = 0;
        &object[i].complete = false;
    }
}
*/
void Scheduler::parse(Scheduler* sched, string str, int n)
{
    std::string::size_type sz;
    std::string temp[3];
    char charstr[str.length()];
    int par_cnt = 0;

    str.copy(charstr, str.length()); //copy string into c-style string
    for (int i = 0; i < str.length(); i++) //parse into three string variables, removing commas and spaces
    {
        if (static_cast<int>(charstr[i]) == 44)
        {
            ++par_cnt;
            continue;
        }
        else if (static_cast<int>(charstr[i]) == 32)
            continue;
        else
            temp[par_cnt] += charstr[i];
    }
    //convert strings to ints and copy to structure variables
    sched[n].process_num = stoi(temp[0], &sz);
    sched[n].need_time = stoi(temp[1], &sz);
    sched[n].duration = stoi(temp[2], &sz);
}


bool Scheduler::get_data(Scheduler* scheduler) //read in data from test.txt
{
    int n = 0;
    string buffer;
    fstream test;
    test.open("test.txt", fstream::in);
    if (test.is_open())
    { while (test)
        {
            test >> buffer;
            parse(scheduler, buffer, n);
            n++;
        }
        test.close();
        return 0;
    }
    else {
        cout << "error:  file not found" << endl;
        test.close();
        return 1;
    }
}

int Scheduler::find_total(Scheduler* sched) //calculates total duration of all jobs
{
int total = 0;

for (int i = 0; i < 11; i++)
total += sched[i].duration;
return total;
}

void Scheduler::round_robin(Scheduler *sched)//simulates round robin CPU scheduling
{
    clock_t c_start = clock();
    auto t_start = chrono::high_resolution_clock::now();
    int ms = 10;
    int time = 0;
    int total = find_total(sched);
    for (time = 0; time < total; time++)
    {
        for (int i = 0; i < 11; i++)
        {
            if (sched[i].need_time <= time && !sched[i].complete) //if job arrived and job not complete
            {
                cout << "Job " << sched[i].process_num << ", scheduled for 10 ms";
                if (sched[i].duration <= ms) //if job will complete, set flag to true to indicate job complete
                {
                    cout << ", completed" << endl;
                    sched[i].complete = true;
                }
                else //if job not complete, subtract quantum from duration
                {
                    sched[i].duration -= ms;
                    std::cout << std::endl;
                }
                time = ms + time;
            }
        }
    }
    clock_t c_end = clock();
    auto t_end = chrono::high_resolution_clock::now();
    cout << fixed << "CPU time used: "
    << 1000.0 * (c_end-c_start) / CLOCKS_PER_SEC << " ms\n" << "Real time used: "
    << chrono::duration<double, milli>(t_end-t_start).count() << " ms\n" << endl;
}

