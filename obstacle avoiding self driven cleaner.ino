//1
const int RMF = 3;
const int RMB = 2;
const int LMF =0 ;
const int LMB = 1;
//2
const int trigPin_L1 = 13;
const int echoPin_L1 = 12;
const int trigPin_L2 = 11;
const int echoPin_L2 = 10;
const int trigPin_R1 = 7;
const int echoPin_R1 = 6;
const int trigPin_R2 = 5;
const int echoPin_R2 = 4;
const int trigPin_C = 9;
const int echoPin_C = 8;
int i=1,j;
//3
void setup() 
{
  pinMode(trigPin_L1, OUTPUT);
  pinMode(echoPin_L1, INPUT);
  pinMode(trigPin_L2, OUTPUT);
  pinMode(echoPin_L2, INPUT);
  pinMode(trigPin_R1, OUTPUT);
  pinMode(echoPin_R1, INPUT);
  pinMode(trigPin_R2, OUTPUT);
  pinMode(echoPin_R2, INPUT);
  pinMode(trigPin_C, OUTPUT);
  pinMode(echoPin_C, INPUT);
  pinMode (RMF, OUTPUT);
  pinMode (RMB, OUTPUT);
  pinMode (LMF, OUTPUT);
  pinMode (LMB, OUTPUT);
}
//4
long duration_L1, distance_L1;
long duration_L2, distance_L2;
long duration_R1, distance_R1;
long duration_R2, distance_R2;
long duration_C, distance_C;

//5

void goRight(){ 
       

               digitalWrite(RMF, LOW);        //right turn       
               digitalWrite(RMB, HIGH); 
               digitalWrite(LMF, HIGH); 
               digitalWrite(LMB, LOW);
            
  }
  //6

 void goLeft(){


               digitalWrite(RMF, HIGH);        //left turn       
               digitalWrite(RMB, LOW); 
               digitalWrite(LMF, LOW); 
               digitalWrite(LMB, HIGH);
               
  }
  //7



void goHead(){
               digitalWrite(RMF, HIGH);             
               digitalWrite(RMB, LOW); 
               digitalWrite(LMF, HIGH); 
               digitalWrite(LMB, LOW);
    
  }
//8
void loop()
{     //9
  digitalWrite(trigPin_L1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin_L1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin_L1, LOW);  
  duration_L1 = pulseIn(echoPin_L1, HIGH);
  distance_L1 = duration_L1/58.2;



  digitalWrite(trigPin_L2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin_L2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin_L2, LOW);  
  duration_L2 = pulseIn(echoPin_L2, HIGH);
  distance_L2 = duration_L2/58.2;


  digitalWrite(trigPin_R1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin_R1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin_R1, LOW);  
  duration_R1 = pulseIn(echoPin_R1, HIGH);
  distance_R1 = duration_R1/58.2;


digitalWrite(trigPin_R2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin_R2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin_R2, LOW);  
  duration_R2 = pulseIn(echoPin_R2, HIGH);
  distance_R2 = duration_R2/58.2;


digitalWrite(trigPin_C, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin_C, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin_C, LOW);  
 duration_C = pulseIn(echoPin_C, HIGH);
 distance_C = duration_C/58.2;

//10
//11
 if(distance_L1<30 and distance_C<30 and distance_R1<30 and distance_L2<30)   
        {  i=1;  
        j=1;   
        goRight();
         delay (5000);
        
         if( distance_L2< 20 and distance_R2>20 ) 
           {     
               goRight();
               delay (5000);
               goHead();
           }
        }
//12
 if(distance_L1<30 and distance_C<30 and distance_R1<30 and distance_R2<30)  
         {   i=0;   
         j=0;
         goLeft(); 
         delay (5000); 
         
         if( distance_L2> 20 and distance_R2<20 ) 
           {     
               goLeft();
               delay (5000);
               goHead();
           }
         }

            //13

  if(distance_L1<30 and  distance_C<30 and distance_R1<30 and distance_L2> 20 and distance_R2>20 and i %2!=0 ) 
          {     i=i+1;
            
               goLeft();
                delay (5000);
        
         if( distance_L2> 20 and distance_R2<20 ) 
           {     
               goLeft();
               delay (5000);
               goHead();
           }
          }
           //14
 if(distance_L1<30 and distance_C<30 and  distance_R1 <30 and distance_L2> 20 and distance_R2>20 and i %2==0 ) 
           {    i=i+1;
           
              goRight();
              delay (5000);
        
         if( distance_L2< 20 and distance_R2>20 ) 
           {     
               goRight();
               delay (5000);
               goHead();
           }
           }



           
//15

 if(distance_L1>30 and distance_C>30 and  distance_R1<30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==0) 
           {     i=i+1;
               goLeft();
                delay (5000);
        
              goHead();
               delay (5000);
                    
               goLeft();
               delay (5000);
               goHead();
           }
           

   if(distance_L1>30 and distance_C>30 and  distance_R1<30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                 goHead();
               delay (5000);
                    
               goRight();
               delay (5000);
               goHead();
           }
           



if(distance_L1>30 and distance_C>30 and  distance_R1<30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==0) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                   goHead();
               delay (5000);
                   
               goRight();
               delay (5000);
               goHead();
           
           }



 if(distance_L1>30 and distance_C>30 and  distance_R1<30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                 goHead();
               delay (5000);
                  
               goRight();
               delay (5000);
               goHead();
           }
           



 //16

 if(distance_L1<30 and distance_C>30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==0) 
           {     i=i+1;
               goLeft();
                delay (5000);
        
              goHead();
               delay (5000);
                    
               goLeft();
               delay (5000);
               goHead();
           }
           

   if(distance_L1<30 and distance_C>30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                goHead();
               delay (5000);
                    
               goRight();
               delay (5000);
               goHead();
           }
           



if(distance_L1<30 and distance_C>30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==0) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                goHead();
               delay (5000);
                
               goRight();
               delay (5000);
               goHead();
           }
           



 if(distance_L1<30 and distance_C>30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                goHead();
               delay (5000);
                    
               goRight();
               delay (5000);
               goHead();
           }
           


//17


if(distance_L1>30 and distance_C<30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==0) 
           {     i=i+1;
               goLeft();
                delay (5000);
        
                  goHead();
               delay (5000);
                    
               goLeft();
               delay (5000);
               goHead();
           }
           

   if(distance_L1>30 and distance_C<30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                  goHead();
               delay (5000);
                    
               goRight();
               delay (5000);
               goHead();
           }
           



if(distance_L1>30 and distance_C<30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==0) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                goHead();
               delay (5000);
                   
               goRight();
               delay (5000);
               goHead();
           }
           



 if(distance_L1>30 and distance_C<30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                 goHead();
               delay (5000);
                    
               goRight();
               delay (5000);
               goHead();
           }
           
 


//18




if(distance_L1>30 and distance_C<30 and  distance_R1<30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==0) 
           {     i=i+1;
               goLeft();
                delay (5000);
        
                goHead();
               delay (5000);
                    
               goLeft();
               delay (5000);
               goHead();
           }
           

   if(distance_L1>30 and distance_C<30 and  distance_R1<30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                goHead();
               delay (5000);
                    
               goRight();
               delay (5000);
               goHead();
           }
           



if(distance_L1>30 and distance_C<30 and  distance_R1<30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==0) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                goHead();
               delay (5000);
                  
               goRight();
               delay (5000);
               goHead();
           
           }



 if(distance_L1>30 and distance_C<30 and  distance_R1<30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                goHead();
               delay (5000);
                    
               goRight();
               delay (5000);
               goHead();
           }
           
 

 
//19

 if(distance_L1<30 and distance_C<30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==0) 
           {     i=i+1;
               goLeft();
                delay (5000);
        
               goHead();
               delay (5000);
                    
               goLeft();
               delay (5000);
               goHead();
           }
           

   if(distance_L1<30 and distance_C<30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                goHead();
               delay (5000);
                    
               goRight();
               delay (5000);
               goHead();
           }
           



if(distance_L1<30 and distance_C<30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2!=0 and j==0) 
           {     i=i+1;
               goRight();
                delay (5000);
        
                goHead();
               delay (5000);
                
               goRight();
               delay (5000);
               goHead();
           }
           



 if(distance_L1<30 and distance_C<30 and  distance_R1>30 and distance_L2> 20 and distance_R2>20 and i %2==0 and j==1) 
           {     i=i+1;
               goRight();
                delay (5000);
        
               goHead();
               delay (5000);
                
               goRight();
               delay (5000);
               goHead();
           
           }
 


   



delay(5000);
}

             
