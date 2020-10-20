void ultracompute(){

delta_t=micros()-time_old;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration*0.034/2;
 error=SetPoint-distance;
 ErrorSum+=error*delta_t;
  float derror=error_old-error;

  
  D=derror/delta_t;
    
 
    

  I=ErrorSum*delta_t;

   u= kp*error+ ki*I + kd*D;
   u1=0.1;
   if(u <0){
    
  
  mspeed=40-u*distance*u1;
   }
   else if(u>= 0){
    
    mspeed = 40+u*distance*u1;
    }
    

   

Serial.print("Distance: ");
Serial.print(distance);
Serial.print("disError ");
Serial.println(error);



  time_old=now;
 error_old=error;
}
 
  
  
