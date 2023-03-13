#include "Job.h"
#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

Job::Job(){
    NameOfJob = "I am Worker ";
    JobDescription = "Work doing my best, everyday ";
    WorkedHours = 8;
};
Programmer::Programmer() {
    JobDescription = "Writting Code lines to develop the future ";
    WorkedHours = 8;
};
Pilot::Pilot() {
    JobDescription = "Taking passengers to their promised destiny ";
    WorkedHours = 8;
};

Programmer::Programmer(string languaje) {
    JobDescription = "Writting Code lines to develop the future ";
    WorkedHours = 8;
};
Pilot::Pilot(string FO) {
};

string Job::getNameOfJob(string NameOfJob) {
    this->NameOfJob = NameOfJob;
    return NameOfJob;
};

string Job::getJobDescription(string JobDescription) {
    string myActivity = JobDescription;
    //cout << "Please, Type your Daily Activities" << endl;
    //cin >> myActivity;
    string Work = "My Work involves ";
    //cout << Work << myActivity << endl;
    string Description = Work + myActivity;
    return Description ;
};

int Job::getWorkedHours(int hours) {
    this->WorkedHours=hours;
    return WorkedHours;
};

void Job::DoWork(string NameOfJob, string JobDescription, int WorkedHours) {
    this->NameOfJob = NameOfJob;
    this->JobDescription = JobDescription;
    this->WorkedHours = WorkedHours;
    cout << getNameOfJob(NameOfJob) << endl;
    cout << getJobDescription(JobDescription) << WorkedHours << " hrs per Day" << endl;
    cout << endl;
}
void Job::DoWork() {
    this->NameOfJob = NameOfJob;
    this->JobDescription = JobDescription;
    this->WorkedHours = WorkedHours;
    cout << getNameOfJob(NameOfJob) << endl;
    cout << getJobDescription(JobDescription) << WorkedHours << " hrs per Day" << endl;
    cout << endl;
}

///Programmer
string Programmer::getNameOfJob(string jobName) {
    NameOfJob = "I am " + jobName + " Programmer";
    return NameOfJob;
}
///Pilot
string Pilot::getNameOfJob(string jobName) {
    NameOfJob = "I am " + jobName + " Pilot";
    return NameOfJob;
}


Job::~Job() {};
Programmer::~Programmer() {};
Pilot::~Pilot() {};
