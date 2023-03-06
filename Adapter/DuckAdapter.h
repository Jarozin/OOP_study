#ifndef DUCKADAPTER_H
#define DUCKADAPTER_H

#pragma once
#include "Duck.h"
#include "Turkey.h"
class DuckAdapter : public Turkey
{
public:
    DuckAdapter(Duck *duck);
    ~DuckAdapter();
    void Squick() override;
private:
    Duck *duck;
};

#endif