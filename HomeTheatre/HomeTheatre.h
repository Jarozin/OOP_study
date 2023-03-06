#ifndef HOMETHEATRE_H
#define HOMETHEATRE_H

#pragma once
#include "TV.h"
#include "Stereo.h"
class HomeTheatre
{
public:
    HomeTheatre(Stereo *stereo, TV *tv);
    ~HomeTheatre();
    void WatchShow();
private:
    TV *tv;
    Stereo *stereo;
};

#endif