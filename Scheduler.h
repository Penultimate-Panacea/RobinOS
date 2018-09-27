//
// Created by Alyssa on 9/22/2018.
//

#ifndef ROUNDROBINIDEA_SCHEDULER_H
#define ROUNDROBINIDEA_SCHEDULER_H
class Scheduler{
public:
    Schedule( int process_num, int need_time, int duration, bool complete);

    Schedule();

    int get_process_num();

    void set_process_num(int process_num);

    int get_need_time();

    void set_need_time(int need_time);

    int get_duration();

    void set_duration(int duration);

    void get_complete();

    void set_complete(bool complete);

    void initialize(Schedule &object);

    void parse(const Schedule , std::string, int);

    int get_data(const Schedule);

    int find_total(Schedule);

    void round_robin(Schedule &object);

};


#endif //ROUNDROBINIDEA_STRUCTUREIDEA_H
