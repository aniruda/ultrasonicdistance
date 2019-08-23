#ifndef us
#define us

#if(arduino>=100)
 #include"Arduino.h"
#else
  //#include"WPrgoram.h"
#endif

class MyUltrasonic {
public:
 MyUltrasonic(bool displayMsg=false);

 long CalculateDistance(int);
private:
};

#endif
