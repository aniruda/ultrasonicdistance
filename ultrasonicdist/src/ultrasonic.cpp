#include "ultrasonic.h"

MyUltrasonic::MyUltrasonic(bool displayMsg){
  
}
long MyUltrasonic::CalculateDistance(int duration){
  int distance;
    distance= duration*0.034/2;
    return distance;
  
  }
