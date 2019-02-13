// This source file should contain various autonomous routine functions and grouped
// together to run one of multiple autonomous routine sequences based on some selection
//

#include "main.h"
#include "portdef.h"			// Cortex port defintions
#include "intake.h"
#include "shooter.h"
#include "chassis.h"
#include "manipulator.h"
#include "lift.h"
#include "auto.h"

void compAutoRedRight(){
  // All the veraious autonomous commands for the Competition, Red Sqaure
  // Right position go here.  THen this function is called in auto.c the autonomous()
  // function based on some selector input.
  driveForDistancePID(6, 60);        // for 10 meter = 394" at speed 60   // for 10 meter = 394" at speed 60
  pivotTurn(0, 60, 110);            // turn at seed 30 for 90 degree angle right turn
  driveForDistancePID(32, 60);     // After turn drive a bit more forward
  liftMove(45);
  delay(1200);
  liftMove(0);
  driveForDistancePID(10, 40);
  pivotTurn(0, 40, 30);
  pivotTurn(1, 40, 10);
  driveForDistancePID(24, -60);
  liftMove(-45);
  delay(1200);
  liftMove(0);
  pivotTurn(1, 50, 90);
  driveForDistancePID(40, 60);
  pivotTurn(0, 50, 110);
  driveForDistancePID(20, 60);
  liftMove(50);
  delay(1100);
  liftMove(0);
  driveForDistancePID(10, 40);
  pivotTurn(0, 40, 40);

}









void testAutoDrive(){
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
  driveRobot(80);       // dirve robot forward at speed '80'
  delay(2000);         // drive for 200mSec (2Sec)
}
