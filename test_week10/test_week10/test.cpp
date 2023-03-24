/***********************************************************************
 * Source File:
 *    Test : Test runner
 * Author:
 *    Br. Helfrich, Efrain Gomez and Marco Varela
 * Summary:
 *    The test runner for all the unit tests
 ************************************************************************/

#include "test.h"
#include "testPhysics.h"           // Unit tests created by Marco Varela


 /*****************************************************************
  * TEST RUNNER
  * Runs all the unit tests
  ****************************************************************/
void testRunner()
{
   TestPhysics().run();
   /*TestVelocity().run();*/
}
