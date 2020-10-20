void checkleft(){
  Masrur.write(180);
  delay(500);

  ultracompute();
   delay(500);
  tempcompute();
  delay(500);
 

   if(error<0){
    
    left();
    delay(420);
   
    Masrur.write(90);
    delay(420);
   
   
    
    
    
    
    }


    else if(distance<=20){
    delay(500);
    Masrur.write(90);
    delay(500);
   backward();
    delay(500);
    checkright();
   
    
    
    }
  
  
  
  
}
