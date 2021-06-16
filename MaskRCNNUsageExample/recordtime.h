#ifndef RECORDTIME_H
#define RECORDTIME_H

#include<iostream>
#include<cstdlib>
#include<ctime>

class RecordTime
{
public:
    RecordTime();

public:
    void  startRecoding()
    {
  start=clock();
    }
    double  getTimeCostSeconds()
    {
         end=clock();
        double endtime=(double)(end-start)/CLOCKS_PER_SEC;
        return  endtime;
    }
    double  getTimeCostMiliSeconds()
    {
         end=clock();
        double endtime=(double)(end-start)/CLOCKS_PER_SEC*1000;
        return  endtime;
    }
private:
    clock_t start,end;
};

int main_recordTm();

#endif // RECORDTIME_H
