 #include <Stepper.h>
  
  #define STEPS 2038 // the number of steps in one revolution of your motor (28BYJ-48)
  
  Stepper stepper_pointer(STEPS, 8, 10, 9, 11);
  
  Stepper stepper_middle(STEPS, 2, 4, 3, 5);
  
  Stepper stepper_thumb(STEPS, 28, 24, 26, 22);
  
  Stepper stepper_ring(STEPS, 36, 32, 34, 30);
  
  Stepper stepper_pinky(STEPS, 52, 48, 50, 46);

/*
stepper.setSpeed(15);
stepper.step();
delay(1000);
*/
  
 void setup() 
  {
  // nothing to do
  }
 
 void loop() 
 {
/*
   // POINTER
 stepper_pointer.setSpeed(15); // 1 rpm
 stepper_pointer.step(-2038*2.5); // do 2038 steps -- corresponds to one revolution in one minute
 delay(1000); 
  
 stepper_pointer.setSpeed(15); // 1 rpm
 stepper_pointer.step(2038*2.5); // do 2038 steps -- corresponds to one revolution in one minute
 delay(1000); 





// MIDDLE
 stepper_middle.setSpeed(15); // 1 rpm
 stepper_middle.step(-2038*2.5); 
 delay(1000); 
  
 stepper_middle.setSpeed(15); // 1 rpm
 stepper_middle.step(2038*2.5); 
 delay(1000); 




// THUMB
 stepper_thumb.setSpeed(15); // 1 rpm
 stepper_thumb.step(-2038*2.4); 
 delay(1000); 
 
 stepper_thumb.setSpeed(15); 
 stepper_thumb.step(2038*2.4); 
 delay(1000); 




// RING
stepper_ring.setSpeed(15);
stepper_ring.step(-2038*2.5);
delay(1000);

stepper_ring.setSpeed(15);
stepper_ring.step(2038*2.5);
delay(1000);




//Pinky
stepper_pinky.setSpeed(15);
stepper_pinky.step(-2038*2.5);
delay(1000);

stepper_pinky.setSpeed(15);
stepper_pinky.step(2038*2.5);
delay(1000);
*/

//FIST
 stepper_pointer.setSpeed(15); // 1 rpm
 stepper_pointer.step(-2038*2.5); // do 2038 steps -- corresponds to one revolution in one minute
 stepper_middle.setSpeed(15); // 1 rpm
 stepper_middle.step(-2038*2.5); 
 stepper_ring.setSpeed(15);
 stepper_ring.step(-2038*2.5);
 stepper_pinky.setSpeed(15);
 stepper_pinky.step(-2038*2.5);
 delay(1000);
 delay(500); 
 stepper_thumb.setSpeed(15); // 1 rpm
 stepper_thumb.step(-2038*2.4);
 delay(1000);
 stepper_thumb.setSpeed(15); // 1 rpm
 stepper_thumb.step(2038*2.4);
 delay(500);
 stepper_pointer.setSpeed(15); // 1 rpm
 stepper_pointer.step(2038*2.5); // do 2038 steps -- corresponds to one revolution in one minute
 stepper_middle.setSpeed(15); // 1 rpm
 stepper_middle.step(2038*2.5); 
 stepper_ring.setSpeed(15);
 stepper_ring.step(2038*2.5);
 stepper_pinky.setSpeed(15);
 stepper_pinky.step(2038*2.5);
 delay(1000);
 }
