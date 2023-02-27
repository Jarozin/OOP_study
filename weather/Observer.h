#ifndef OBSERVER_H
#define OBSERVER_H

#pragma once

class Observer
{
public:
    Observer();
    virtual ~Observer() = 0;
    virtual void Update() = 0;
private:

};

#endif