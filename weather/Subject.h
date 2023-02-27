#ifndef SUBJECT_H
#define SUBJECT_H

#pragma once
#include "Observer.h"
class Subject
{
public:
    Subject();
    virtual ~Subject() = 0;
    virtual int RegisterObserver(Observer *o) = 0;
    virtual int DeleteObserver(Observer *o) = 0;
    virtual int NotifyObservers() = 0;
private:

};

#endif