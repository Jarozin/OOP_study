#include "HomeTheatre.h"

HomeTheatre::HomeTheatre(Stereo *stereo, TV *tv)
{
    this->stereo = stereo;
    this->tv = tv;
}

HomeTheatre::~HomeTheatre()
{

}

void HomeTheatre::WatchShow()
{
    tv->TurnOn();
    stereo->SetVolume();
    tv->FindChannel();  
    stereo->AdjustMode();
    tv->WatchShow();
    tv->TurnOff();
}