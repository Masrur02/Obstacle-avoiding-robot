 void tempcompute(){
 
 
 delta_t1=micros()-time_old1;
  temp= dht.readTemperature();
   error1=SetPoint1-temp;
  ErrorSum1+=error1*delta_t1;
  float derror1=error_old1-error1;

  
  D1=derror1/delta_t1;
    
 
    

  I1=ErrorSum1*delta_t1;

  float u1=kp1*error1+ ki1*I1 + kd1*D1;
  float output1=u1+temp;


     

Serial.print("Temp: ");
Serial.print(temp);
Serial.print("&&");
Serial.print("temperror");
Serial.println(error1);






 


  time_old1=now1;
   error_old1=error1;



 }
