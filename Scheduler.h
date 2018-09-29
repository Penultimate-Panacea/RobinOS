//
// Created by Alyssa on 9/22/2018.
//

#ifndef ROUNDROBINIDEA_SCHEDULER_H
#define ROUNDROBINIDEA_SCHEDULER_H
#include <string>
class Scheduler{
public:
   Scheduler(int process_num , int duration, int need_time, bool complete);
    Scheduler();

    int get_process_num();

    void set_process_num(int process_num);

    int get_need_time();

    void set_need_time(int need_time);

    int get_duration();

    void set_duration(int duration);

    void set_complete(bool complete);

    bool get_data(Scheduler* sched);

    void parse(Scheduler* sched, std::string, int n);

    int find_total(Scheduler* scheduler);

    void initializer(Scheduler* sched);
    
    void round_robin(Scheduler* sched);

};


#endif //ROUNDROBINIDEA_STRUCTUREIDEA_H

