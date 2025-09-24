#include "../include/height.h"

int height(int UpSpeed,int DownSpeed,int desiredHeight){
    int resylt;
    int delta;
    delta = UpSpeed - DownSpeed;
    resylt = desiredHeight / (UpSpeed - DownSpeed);
    if (desiredHeight % delta != 0){
        resylt = resylt + 1;
    }
    return resylt;
}