#include "../include/height.h"

int height(int UpSpeed,int DownSpeed,int desiredHeight){
    int result = desiredHeight / (UpSpeed - DownSpeed);
    if (desiredHeight % (UpSpeed - DownSpeed) > 0){
        result += 1;
    }
    return result;
}