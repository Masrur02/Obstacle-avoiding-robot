void checkright(){
  Masrur.write(15);
  delay(500);

  ultracompute();
  delay(500);
  tempcompute();
  delay(500);


  if(error<0){
   right();
    delay(420);
   
   Masrur.write(100);
    delay(420);    
    
    
    
    }
   else if(distance<=20){
    delay(500);
    checkleft();
    
    
  }
  
  
  
  
  
  }
