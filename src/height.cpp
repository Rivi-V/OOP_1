#include "../include/height.h"

int height(int UpSpeed,int DownSpeed,int desiredHeight){
    int result;
    if (desiredHeight <= UpSpeed){
        return 1;
    }
    result = desiredHeight / (UpSpeed - DownSpeed);
    if (desiredHeight % (UpSpeed - DownSpeed) != 0){
        result += 1;
    }
    return result;
}