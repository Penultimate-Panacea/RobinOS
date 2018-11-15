/*
 * Alyssa Hove, Rian Fantozzi
 * 9/19/18
 * CS 320 Operating Systems
 * Basic Round Robin
 */

/*! This simulator showcases a basic round robin scheduling system
 * it uses the csv file test.csv to gather the information about the processes
 * only deals with processor time and not I/O time
 * currently only accepts input in the scope of 11 different processes */

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

struct Scheduler{ //makes the structure of scheduler
    int process_num;
    int need_time;
    int duration;
    int completed_in;
    int turnaround;
    bool complete;
};

void loggingStart(){
    freopen("debug.log", "w", stderr);
    freopen("output.txt", "w", stdout);
}

void initializer(struct Scheduler* sched) { // initializes the Scheduler
    for (int i = 0; i < 11; i++)
    {
        sched[i].process_num = i;
        sched[i].need_time = 0;
        sched[i].duration = 0;
        sched[i].turnaround =0 ;
        sched[i].completed_in = 0;
        sched[i].complete = false;
    }
    sched[0].duration = 22;
    sched[1].duration = 13;
    sched[2].duration = 47;
    sched[3].duration = 8;
    sched[4].duration = 10;
    sched[5].duration = 16;
    sched[6].duration = 29;
    sched[7].duration = 23;
    sched[8].duration = 45;
    sched[9].duration = 84;
    sched[10].duration = 1;
}

int find_total(struct Scheduler* scheduler) //calculates total duration of all jobs
{
    int total = 0;
    for (int i = 0; i < 11; i++)
        total  += scheduler[i].duration;
    return total;
}
float calcAvgResponseTime(int compCount) {
    float average;
    average = float(compCount) / float(10.0);
    return average;
}

void round_robin(struct Scheduler* sched, int ms)//simulates round robin CPU scheduling
{
    int time = 0;
    int diff = 0;
    int compCount = 0;

    do {
        for (int i = 0; i < 11; i++) {

            if (sched[i].need_time <= time && !sched[i].complete) //if job arrived and job not complete
            {
                cerr << "Process " << sched[i].process_num << ", scheduled for " << ms << " ms." <<" Starting at " << time << " ms. " <<
                     "Time left on process at start " << sched[i].duration << ".";


                if (sched[i].duration <= ms) //if job will complete, set flag to true to indicate job complete
                {
                    if (sched[i].duration < ms) {
                        diff = sched[i].duration;
                        time = time + diff;
                        cerr << " Completed at " << time << " ms." << endl;
                        time = time - diff;
                        time = time + ms;
                        sched[i].complete = true;
                        sched[i].completed_in = compCount; //Measure Response Time?
                        compCount++;
                    }
                    else{
                        time = time + ms;
                        cerr << " Completed at " << time << " ms." << endl;
                        sched[i].complete = true;
                        compCount++;
                    }

                } else //if job not complete, subtract quantum from duration
                {
                    sched[i].duration = sched[i].duration - ms;
                    cerr << endl;
                    time = time + ms;
                }
            }
        }
    }while (compCount != 11);
    float reponseTime = calcAvgResponseTime(time);
    cout << "Using a quantum of:" << ms << endl << "Full time took: " << time << endl << "Average Response Time: "
    << reponseTime << endl << endl; // outputs the total time spent

}

int main() //driver
{
    loggingStart();
    Scheduler* object= new Scheduler[11]; //allocate data on heap
    cout << "The total ms that the processes will need is " << 298 << "." << endl; // outputs the time needed for all processes
    for (int i = 1; i < 85; ++i) {
        initializer(object); //initialize variables
        round_robin(object, i); //begin round robin CPU scheduling
    }
    delete[] object; //delete allocated data
    return 0;
}
