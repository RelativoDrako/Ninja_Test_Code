#pragma once
#ifndef JOB_H  //#pragma once
#define JOB_H
#include <string>


using namespace std;

class Job
{
public:
    Job();
    string NameOfJob;
    string JobDescription;
    int WorkedHours;
    virtual string getNameOfJob(string nameOfJob);
    string getJobDescription(string jobDesc);
    int getWorkedHours(int hours);
    void DoWork();
    void DoWork(string nameOfJob, string jobDesc, int hours);
    virtual ~Job();

protected:
private:
};

struct Programmer:Job {
public:
    Programmer();
    Programmer(string name);
    virtual string getNameOfJob(string jobname);
    virtual ~Programmer();
protected:
private:
};

struct Pilot:Job {
public:
    Pilot();
    Pilot(string name);
    virtual string getNameOfJob(string jobname);
    virtual ~Pilot();
protected:
private:
};

#endif


/*
void getNameOfJob();
void getJobDescription();
void getWorkedHours();
void DoWork();


void getNameOfJob();
void getJobDescription();
void getWorkedHours();
void DoWork();
*/