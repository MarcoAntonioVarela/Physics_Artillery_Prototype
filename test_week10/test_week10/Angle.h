/***********************************************************************
* Header File:
* Angle : Represents an angle
* Author:
* Efrain Gomez Fajardo & Marco Varela
* Summary:
* Helps understand where the Shell is heading
************************************************************************/
#pragma once
#define _USE_MATH_DEFINES
#include <math.h>


class TestVelocity;
class Angle
{
   friend TestVelocity;
private:
   double radians;
public:
   Angle(double degrees) {
      radians = degreesToRadians(degrees);
   }
   double getRadians() { return radians; }
   double degreesToRadians(double degrees) { return degrees * M_PI / 180;}

   // Calculating the angle using 2 components a = atan(dx, dy)
   void calculatingAngleUsingTwoComponents(double dx, double dy)

      // seek for the atan formula that takes 2 parameters instead of 1
   {
      radians =  atan2(dx , dy);
   }
};


