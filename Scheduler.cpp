   /*
     * Alyssa Hove, Rian Fantozzi, Linh Dang, Dylan Lear
     * 9/19/18
     * Edited to Professor's liking on the 17th of Oct.
     * Nov 26 Editied to turnaround times
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

    using namespace std;

    struct Scheduler{ //makes the structure of scheduler
       unsigned int need_time;
       unsigned int duration;
       unsigned int begin_time;
       unsigned int completed_in;
       unsigned int turnaround;
        bool complete;
        bool start;
    };

    void loggingStart(){
        freopen("debug.log", "w", stderr);
        freopen("output.txt", "w", stdout);
    }

    void initializer(struct Scheduler* sched) { // initializes the Scheduler
        for (int i = 0; i < 11; i++)
        {
            sched[i].need_time = 0;
            sched[i].duration = 0;
            sched[i].begin_time = 0;
            sched[i].turnaround = 0;
            sched[i].completed_in =0;
            sched[i].complete = false;
            sched[i].start = false;

        }
    }

void parse(Scheduler* sched, string str, int n){
    std::string::size_type sz;
    std::string temp[2];
    char cstr[str.length()];
    int par_cnt = 0;
    str.copy(cstr, str.length()); //copy string into c-style string
    for (int i = 0; i < str.length(); i++) //parse into three string variables, removing commas and spaces
    {
        if (static_cast<int>(cstr[i]) == 44)
        {
            ++par_cnt;
        continue;
        }
    else if (static_cast<int>(cstr[i]) == 32)
        continue;
    else
    temp[par_cnt] += cstr[i];
    }
    //convert strings to ints and copy to structure variables
    sched[n].need_time = stoi(temp[0], &sz);
    sched[n].duration = stoi(temp[1], &sz);
    }

int get_data(struct Scheduler* sched) //read in data from Job.txt, save and parse each line read in
{
    int n = 0;
    std::string buffer;

    std::fstream jobs;
    jobs.open("testJobs.txt", std::fstream::in);
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
        return 1;
    }
}


    float calcAvgNormTurnTime(float sum){
    float avg;
    avg = sum / 11;
    return avg;
}

unsigned int calcTurnaroundTime(unsigned int start, unsigned int end) {
    unsigned int result = 0;
    result = end - start;
    return result;
}
 float calcNormalTTime(unsigned int duration, unsigned int tTime){
        float result;
    result = tTime / duration;
    return result;
}

void round_robin(struct Scheduler* sched, int ms)//simulates round robin CPU scheduling
{
    unsigned int time = 0;
    unsigned int diff = 0;
    unsigned int compCount = 0;
    float normalizedTurnTime = 0.0;
    unsigned int sum = 0;

    do {
        for (int i = 0; i < 11; i++) {

            if ( !sched[i].complete) //if job arrived and job not complete
            {
                if (!sched[i].start){ //job will start, set flag to true to indicate start
                    sched[i].begin_time = time;
                    sched[i].start = true;
                }

                if (sched[i].duration <= ms) //if job will complete, set flag to true to indicate job complete
                {
                    if (sched[i].duration < ms) {
                        time = time + ms;
                        diff = sched[i].duration;
                        time = time - diff;
                        sched[i].completed_in = time;
                        time = time + diff;
                        sched[i].turnaround = calcTurnaroundTime(sched[i].completed_in, sched[i].begin_time);
                        normalizedTurnTime = calcNormalTTime(sched[i].need_time,sched[i].turnaround);
                        cerr << "Job "<< i << " Completed at " << time << " ms. Turnaround time is " << sched[i].turnaround <<
                             ". Normalized turnaround time is " << normalizedTurnTime << endl;
                        sum = normalizedTurnTime + sum;
                        sched[i].complete = true;
                        compCount++;
                    }
                    else{
                        time = time + ms;
                        sched[i].completed_in = time;
                        sched[i].turnaround = calcTurnaroundTime(sched[i].begin_time, sched[i].completed_in);
                        normalizedTurnTime = calcNormalTTime(sched[i].need_time,sched[i].turnaround);
                        cerr << "Job "<< i << " Completed at " << time << " ms. Turnaround time is " << sched[i].turnaround <<
                             ". Normalized turnaround time is " << normalizedTurnTime << endl;
                        sum = normalizedTurnTime + sum;
                        sched[i].complete = true;
                        compCount++;
                    }

                } else //if job not complete, subtract quantum from duration
                {
                    sched[i].duration = sched[i].duration - ms;
                    time = time + ms;
                }
            }
        }
    }while (compCount != 11);

    float avgTTime = calcAvgNormTurnTime(sum);

    cout << "The average Normalized Turnaround time is " << avgTTime << endl;
}

int main() //driver
{
    loggingStart();
    Scheduler* object = new Scheduler[11]; //allocate data on heap

    cout << "The total ms that the processes will need is " << 298 << "." << endl; // outputs the time needed for all processes
    for (int i = 1; i < 4; ++i) {
        initializer(object); //initialize variables
        if (get_data(object)){ //open file and read in job data
            return -1;
        }
        cout << "The quantum used is " << i << endl;
        cout << endl;
        round_robin(object, i); //begin round robin CPU scheduling
    }

    delete[] object; //delete allocated data
    return 0;
}
