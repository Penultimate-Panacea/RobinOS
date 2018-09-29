//
// Created by Alyssa on 9/22/2018.
//

#ifndef ROUNDROBINIDEA_SCHEDULER_H
#define ROUNDROBINIDEA_SCHEDULER_H
#include <string>
class Scheduler{
public:
    int process_num = 0;
    int duration = 0;
    int need_time = 0;
    bool complete = 0;
    Scheduler( int process_num, int need_time, int duration, bool complete);

    int get_process_num();

    void set_process_num(int process_num);

    int get_need_time();

    void set_need_time(int need_time);

    int get_duration();

    void set_duration(int duration);

    void set_complete(bool complete);

    bool get_data(Scheduler* sched);

  //  void initialize(Scheduler &object, int n);

    void parse(Scheduler* sched, std::string, int n);

    int find_total(Scheduler* sched);

    void round_robin(Scheduler *sched);

};


#endif //ROUNDROBINIDEA_STRUCTUREIDEA_H
