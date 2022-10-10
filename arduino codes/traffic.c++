int isObstaclePin1 = 16;  // This is our input pin
int isObstaclePin2 = 17;  // This is our input pin
int isObstaclePin3 = 18;
int isObstaclePin4 = 19;


int isObstacle1 = HIGH;  // HIGH MEANS FREE ROAD
int isObstacle2 = HIGH;  // HIGH MEANS FREE ROAD
int isObstacle3 = HIGH;
int isObstacle4 = HIGH;


//Arduino Traffic Light Project Code
int red = 4;
int yellow = 5;
int green = 6;
int red2 = 7;
int yellow2 = 8;
int green2 = 9;
int red3 = 10;
int yellow3 = 11;
int green3 = 12;
int red4 = 13;
int yellow4 = 14;
int green4 = 15;
void setup() {
  pinMode(isObstaclePin1, INPUT);
  pinMode(isObstaclePin2, INPUT);
  pinMode(isObstaclePin3, INPUT);
  pinMode(isObstaclePin4, INPUT);


  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(yellow3, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(red4, OUTPUT);
  pinMode(yellow4, OUTPUT);
  pinMode(green4, OUTPUT);
  Serial.begin(9600);  
} 

void loop() {

  CheckIrStatus();
  trafficLights();
}

void trafficLights()
{
     // first lane 
    // turn off yellow, then turn red on for 3 seconds
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH); 
    digitalWrite(green4, LOW);
    delay(3000);

  //Essential Delays 0.4 seconds
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(green4, LOW);
    delay(400);
   

    // turn off red and yellow, then turn on green for 5 seconds
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);  
    digitalWrite(green4, LOW);    
    delay(3000);

  //Essential Delays 0.4 seconds
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(green4, LOW); 
    delay(400);
   

    // green off, yellow on for 1 seconds
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);  
    digitalWrite(green4, LOW); 
    delay(600);
    
  for(int i=0; i<3; i++) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);            
    delay(400);

    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);        
    delay(400);  
  }
        
    
  //Essential Delays
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);        
    delay(400);

    CheckIrStatus();
    
    
// second lane
    // turn off yellow, then turn red on for 5 seconds
    digitalWrite(yellow2, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);    
    delay(2000);

  //Essential Delays 0.4 seconds
    digitalWrite(red2, LOW);
    digitalWrite(green2, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);    
    delay(400);
   // CheckIrStatus();

    // turn off red and yellow, then turn on green for 4 seconds
    digitalWrite(yellow2, LOW);
    digitalWrite(red2, LOW);
    digitalWrite(green2, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    delay(3000);

  //Essential Delays 0.4 seconds
    digitalWrite(green2, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    delay(400);
   

    // green off, yellow on for 1 seconds
    digitalWrite(green2, LOW);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);
    delay(600);
    
  for(int i=0; i<3; i++) {
    digitalWrite(green2, LOW);
    digitalWrite(yellow2, HIGH); 
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH); 
    digitalWrite(green4, LOW);  
    delay(400);

    digitalWrite(green2, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);    
    delay(400);  
  }
        
    
  //Essential Delays
    digitalWrite(yellow2, LOW);
    digitalWrite(red2, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    delay(400);

    CheckIrStatus();
  
    
//third lane
    // turn off yellow, then turn red on for 5 seconds
    digitalWrite(yellow3, LOW);
    digitalWrite(red3, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);    
    delay(2000);

  //Essential Delays 0.4 seconds
    digitalWrite(red3, LOW);
    digitalWrite(green3, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);    
    delay(400);
   

    // turn off red and yellow, then turn on green for 4 seconds
    digitalWrite(yellow3, LOW);
    digitalWrite(red3, LOW);
    digitalWrite(green3, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);
    delay(3000);

  //Essential Delays 0.4 seconds
    digitalWrite(green3, LOW);
    digitalWrite(yellow3, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);    
    delay(400);
   

    // green off, yellow on for 1 seconds
    digitalWrite(green3, LOW);
    digitalWrite(yellow3, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);
    delay(600);
    
  for(int i=0; i<3; i++) {
    digitalWrite(green3, LOW);
    digitalWrite(yellow3, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);    
    digitalWrite(green4, LOW);    
    delay(400);

    digitalWrite(green3, LOW);
    digitalWrite(yellow3, LOW); 
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);   
    delay(400);  
  }
        
    
  //Essential Delays
    digitalWrite(yellow3, LOW);
    digitalWrite(red3, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(green4, LOW);
    delay(400);

    CheckIrStatus();
   
    
//fourth lane
// turn off yellow, then turn red on for 5 seconds
    digitalWrite(yellow4, LOW);
    digitalWrite(red4, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(green4, LOW);
    delay(2000);

  //Essential Delays 0.4 seconds
    digitalWrite(red4, LOW);
    digitalWrite(green4, LOW);
    delay(400);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
   

    // turn off red and yellow, then turn on green for 4 seconds
    digitalWrite(yellow4, LOW);
    digitalWrite(red4, LOW);
    digitalWrite(green4, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    
    delay(3000);

  //Essential Delays 0.4 seconds
    digitalWrite(green4, LOW);
    digitalWrite(yellow4, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(green4, LOW);    
    delay(400);
   // CheckIrStatus();

    // green off, yellow on for 1 seconds
    digitalWrite(green4, LOW);
    digitalWrite(yellow4, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, LOW);
        
    
    delay(600);
    
  for(int i=0; i<3; i++) {
    digitalWrite(green4, LOW);
    digitalWrite(yellow4, HIGH);   
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, LOW);
    digitalWrite(green4, LOW);     
    delay(400);

    digitalWrite(green4, LOW);
    digitalWrite(yellow4, LOW); 
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);  
    digitalWrite(red4, LOW); 
    digitalWrite(green4, LOW);
    delay(400);  
  }
        
    
  //Essential Delays
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    delay(400);
    CheckIrStatus();
   
    
    
   
}

void CheckIrStatus()
{
  isObstacle1 = digitalRead(isObstaclePin1);
  if (isObstacle1 == LOW)
  {
    Serial.println("LOW PRIORITY CONGESTION!!");
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    delay(3000);
    digitalWrite(green, LOW);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    delay(400);
     digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);   
    delay(600);
    
  for(int i=0; i<3; i++) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);        
    delay(400);

     digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH); 
    digitalWrite(red4, HIGH);   
    delay(400);
      
  }
  } 
    
  isObstacle2 = digitalRead(isObstaclePin2);
  if (isObstacle2 == LOW)
  {
    Serial.println("LOW PRIORITY CONGESTION!!");
    digitalWrite(red2, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(green2, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    delay(3000);
    digitalWrite(green2, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH); 
    digitalWrite(red4, HIGH); 
    delay(400);
    digitalWrite(green, LOW);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);
    delay(400);
     
    
    for(int i=0; i<3; i++) {
    digitalWrite(green, LOW);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH);
    digitalWrite(red4, HIGH);        
    delay(400);

    digitalWrite(green, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red3, HIGH); 
    digitalWrite(red4, HIGH);   
    delay(400);

    }
  }




  isObstacle3 = digitalRead(isObstaclePin3);  
  if (isObstacle3 == LOW)
  {
    Serial.println("LOW PRIORITY CONGESTION!!");
    digitalWrite(red3, LOW);
    digitalWrite(yellow3, LOW);
    digitalWrite(green3, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);
    delay(3000);
    digitalWrite(green3, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);
    delay(400);
    digitalWrite(green, LOW);
    digitalWrite(yellow3, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);   
    delay(600);
    
  for(int i=0; i<3; i++) {
    digitalWrite(green, LOW);
    digitalWrite(yellow3, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red4, HIGH);        
    delay(400);

     digitalWrite(green, LOW);
    digitalWrite(yellow3, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red4, HIGH);
    digitalWrite(red2, HIGH);    
    delay(400);  
  }
}

isObstacle4 = digitalRead(isObstaclePin4);
  if (isObstacle4 == LOW)
  {
    Serial.println("LOW PRIORITY CONGESTION!!");
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green4, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
    delay(3000);
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);

     digitalWrite(green, LOW);
    digitalWrite(yellow4, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
       
    delay(600);
    
  for(int i=0; i<3; i++) {
    digitalWrite(green, LOW);
    digitalWrite(yellow4, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);
            
    delay(400);

     digitalWrite(green, LOW);
    digitalWrite(yellow4, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(red3, HIGH);    
    delay(400);
      
  }
  }  
}