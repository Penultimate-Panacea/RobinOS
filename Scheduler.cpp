/*
 * Alyssa Hove, Rian Fantozzi
 * 9/19/18
 * CS 320 Operating Systems
 * Basic Round Robin
 */

 /*! This simulator showcases a basic round robin scheduling system
  * it uses the text file test.txt to gather the information about the processes
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
    bool complete;
};

void initializer(struct Scheduler* sched) { // initializes the Scheduler
    for (int i = 0; i < 11; i++)
    {
        sched[i].process_num = 0;
        sched[i].need_time = 0;
        sched[i].duration = 0;
        sched[i].complete = false;
    }
}

void parse(Scheduler* sched, string str, int n) // parses the string and populates the string
{
    string::size_type sz;
    string temp[3];
    char charstr[str.length()];
    int par_cnt = 0;

    str.copy(charstr, str.length()); //copy string into c-style string
    for (int i = 0; i < str.length(); i++) //parse into three string variables, removing commas and spaces
    {
        if (static_cast<int>(charstr[i]) == 44)
        {
            par_cnt++;
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
    sched[n].completed_in = stoi(temp[3], &sz);
}


int get_data(struct Scheduler* sched) //read in data from Test.txt, save and parse each line read in
{
    int n = 0;
    std::string buffer;

    std::fstream jobs;
    jobs.open("test.txt", std::fstream::in);
    if (jobs.is_open())
    {
        while (jobs)
        {
            jobs >> buffer;
            parse(sched, buffer, n);
            n++;
        }
        jobs.close();
        return 0;
    }
    else
    {
        std::cout << "error:  file not found" << std::endl;
        jobs.close();
        return 1;
    }

}


int find_total(struct Scheduler* scheduler) //calculates total duration of all jobs
{
    int total = 0;
    for (int i = 0; i < 11; i++)
        total  = total + scheduler[i].duration;
    return total;
}

void round_robin(struct Scheduler* sched, int ms)//simulates round robin CPU scheduling
{
    int time = 0;
    int diff = 0;
    int compCount = 0;
    int total = find_total(sched);
    cout << "The total ms that the processes will need is " << total << "." << endl; // outputs the time needed for all processes
    do {
        for (int i = 0; i < 11; i++) {

            if (sched[i].need_time <= time && !sched[i].complete) //if job arrived and job not complete
            {
                cout << "Process " << sched[i].process_num << ", scheduled for " << ms << " ms." <<" Starting at " << time << " ms. " <<
                     "Time left on process at start " << sched[i].duration << ".";


                if (sched[i].duration <= ms) //if job will complete, set flag to true to indicate job complete
                {
                    if (sched[i].duration < ms) {
                        diff = sched[i].duration;
                        time = time + diff;
                        cout << " Completed at " << time << " ms." << endl;
                        time = time - diff;
                        time = time + ms;
                        sched[i].complete = true;
                        compCount++;
                    }
                    else{
                        time = time + ms;
                        cout << " Completed at " << time << " ms." << endl;
                        sched[i].complete = true;
                        compCount++;
                    }

                } else //if job not complete, subtract quantum from duration
                {
                    sched[i].duration = sched[i].duration - ms;
                    cout << endl;
                    time = time + ms;
                }
            }
        }
    }while (compCount != 11);

    cout << "Full time took: " << time << endl; // outputs the total time spent
}

int main() //driver
{
    Scheduler* object= new Scheduler[11]; //allocate data on heap
    initializer(object); //initialize variables
    get_data(object);

    if (get_data(object)) //open file and read in job data
        return -1; //returns error if file not opened
    for (int i = 1; i < 84; ++i) {
        round_robin(object, i); //begin round robin CPU scheduling
    }
    delete[] object; //delete allocated data
}

/* Test 1
 * How many milliseconds do you want for each job?
5
The total ms that the processes will need is 213.
Process 1, scheduled for 5 ms. Starting at 0 ms. Time left on process at start 20.
Process 2, scheduled for 5 ms. Starting at 5 ms. Time left on process at start 10.
Process 3, scheduled for 5 ms. Starting at 10 ms. Time left on process at start 40.
Process 4, scheduled for 5 ms. Starting at 15 ms. Time left on process at start 8.
Process 5, scheduled for 5 ms. Starting at 20 ms. Time left on process at start 10.
Process 6, scheduled for 5 ms. Starting at 25 ms. Time left on process at start 10.
Process 7, scheduled for 5 ms. Starting at 30 ms. Time left on process at start 20.
Process 8, scheduled for 5 ms. Starting at 35 ms. Time left on process at start 5. Completed at 40 ms.
Process 9, scheduled for 5 ms. Starting at 40 ms. Time left on process at start 15.
Process 10, scheduled for 5 ms. Starting at 45 ms. Time left on process at start 40.
Process 11, scheduled for 5 ms. Starting at 50 ms. Time left on process at start 35.
Process 1, scheduled for 5 ms. Starting at 55 ms. Time left on process at start 15.
Process 2, scheduled for 5 ms. Starting at 60 ms. Time left on process at start 5. Completed at 65 ms.
Process 3, scheduled for 5 ms. Starting at 65 ms. Time left on process at start 35.
Process 4, scheduled for 5 ms. Starting at 70 ms. Time left on process at start 3. Completed at 73 ms.
Process 5, scheduled for 5 ms. Starting at 75 ms. Time left on process at start 5. Completed at 80 ms.
Process 6, scheduled for 5 ms. Starting at 80 ms. Time left on process at start 5. Completed at 85 ms.
Process 7, scheduled for 5 ms. Starting at 85 ms. Time left on process at start 15.
Process 9, scheduled for 5 ms. Starting at 90 ms. Time left on process at start 10.
Process 10, scheduled for 5 ms. Starting at 95 ms. Time left on process at start 35.
Process 11, scheduled for 5 ms. Starting at 100 ms. Time left on process at start 30.
Process 1, scheduled for 5 ms. Starting at 105 ms. Time left on process at start 10.
Process 3, scheduled for 5 ms. Starting at 110 ms. Time left on process at start 30.
Process 7, scheduled for 5 ms. Starting at 115 ms. Time left on process at start 10.
Process 9, scheduled for 5 ms. Starting at 120 ms. Time left on process at start 5. Completed at 125 ms.
Process 10, scheduled for 5 ms. Starting at 125 ms. Time left on process at start 30.
Process 11, scheduled for 5 ms. Starting at 130 ms. Time left on process at start 25.
Process 1, scheduled for 5 ms. Starting at 135 ms. Time left on process at start 5. Completed at 140 ms.
Process 3, scheduled for 5 ms. Starting at 140 ms. Time left on process at start 25.
Process 7, scheduled for 5 ms. Starting at 145 ms. Time left on process at start 5. Completed at 150 ms.
Process 10, scheduled for 5 ms. Starting at 150 ms. Time left on process at start 25.
Process 11, scheduled for 5 ms. Starting at 155 ms. Time left on process at start 20.
Process 3, scheduled for 5 ms. Starting at 160 ms. Time left on process at start 20.
Process 10, scheduled for 5 ms. Starting at 165 ms. Time left on process at start 20.
Process 11, scheduled for 5 ms. Starting at 170 ms. Time left on process at start 15.
Process 3, scheduled for 5 ms. Starting at 175 ms. Time left on process at start 15.
Process 10, scheduled for 5 ms. Starting at 180 ms. Time left on process at start 15.
Process 11, scheduled for 5 ms. Starting at 185 ms. Time left on process at start 10.
Process 3, scheduled for 5 ms. Starting at 190 ms. Time left on process at start 10.
Process 10, scheduled for 5 ms. Starting at 195 ms. Time left on process at start 10.
Process 11, scheduled for 5 ms. Starting at 200 ms. Time left on process at start 5. Completed at 205 ms.
Process 3, scheduled for 5 ms. Starting at 205 ms. Time left on process at start 5. Completed at 210 ms.
Process 10, scheduled for 5 ms. Starting at 210 ms. Time left on process at start 5. Completed at 215 ms.
Full time took: 215

Process finished with exit code 0

 */