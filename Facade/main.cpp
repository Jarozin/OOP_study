#include "HomeTheatre.h"
#include <iostream>
int main()
{
    TV my_tv;
    Stereo my_stereo;
    HomeTheatre my_home_theatre(&my_stereo, &my_tv);
    my_home_theatre.WatchShow();
    return 0;
}