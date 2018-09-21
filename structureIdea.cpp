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
#include <ctime>
using namespace std;

struct Schedule{
    int process_num; // number in the process
    int need_time; // the time it needs to arrive to the queue
    int duration; // how long it takes to complete
    bool complete; // is the program complete
};

void initialize(struct Schedule* sched){ // initializes the array
    for (int i = 0; i < 11; i++)
        {
        sched[i].process_num = 0;
        sched[i].need_time = 0;
        sched[i].duration = 0;
        sched[i].complete = false;
        }
}

void parse(struct Schedule* sched, std::string str, int n)
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

int get_data(struct Schedule* sched) //read in data from test.txt
{
    int n = 0;
    std::string buffer;
    std::fstream jobs;
    jobs.open("test.txt", fstream::in);
    if (jobs.is_open())
    { while (jobs)
        {
            jobs >> buffer;
            parse(sched, buffer, n);
            n++;
        }
        return 0;
    }
    else
    {
        cout << "error:  file not found" << endl;
        return 1;
    }
    jobs.close();
}

int find_total(struct Schedule* sched) //calculates total duration of all jobs
{
    int total = 0;

    for (int i = 0; i < 11; i++)
        total += sched[i].duration;
    return total;
}
/*
void robin_scheduling(struct Schedule* sched) //sorts the array into a better working scheduler
{


}
*/
void round_robin(struct Schedule* sched) //simulates round robin CPU scheduling
{
    int ms = 10;
    int time = 0;
    int total = find_total(sched);
    for (time = 0; time < total; time++)
    {
        for (int i = 0; i < 11; i++)
        {
            if (sched[i].need_time <= time && !sched[i].complete) //if job arrived and job not complete
            {
                std::cout << "Job " << sched[i].process_num << ", scheduled for 10 ms";
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
}

int main()
{
    Schedule *sched = new Schedule[11]; //allocate data on heap

    initialize(sched); //initialize variables
    std::clock_t c_start = std::clock();
    auto t_start = std::chrono::high_resolution_clock::now();
    if (get_data(sched)) //open file and read in job data
        return -1; //returns error if file not opened
    round_robin(sched); //begin round robin CPU scheduling
    delete[] sched; //delete allocated data
}