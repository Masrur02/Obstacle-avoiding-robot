//ultrasonic part

int trigPin = 12;
int echoPin = 11;

long duration;
int distance;



float SetPoint=40 ;
float error;
float delta_t=0;
float now=micros();
float error_old=0;
float ErrorSum;

float time_old=0;
float D=0;
float I=0;
float kp=1,ki=0,kd=0.1;


//temparature part

#include <DHT.h>
int Sensor=2;
float temp;
#define DHTTYPE DHT22   
DHT dht(2 , DHTTYPE);

float SetPoint1=40;
float error1;
float delta_t1=0;
float now1=micros();
float error_old1=0;
float ErrorSum1;

float time_old1=0;
float D1=0;
float I1=0;
float kp1=1,ki1=0,kd1=0.1;



//robot part

int lf=4;
int lb=5;
int rf=6;
int rb=7;
int el=9;
int er=10;
int mspeed;
int state;
float u;
float u1;


 

//servo part
#include<Servo.h>
Servo Masrur;



void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
dht.begin();
pinMode(lf, OUTPUT);
pinMode(lb, OUTPUT);
pinMode(rf, OUTPUT);
pinMode(rb, OUTPUT);

Masrur.attach(8);
Masrur.write(95);

Serial.begin(9600);
}



void loop(){

  
  forward();
  }
