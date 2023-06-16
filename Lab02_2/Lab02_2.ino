int LED[] = {16,5,4,0};u
int BZ = 13;
void setup(){
  pinMode(LED[0], OUTPUT );
  pinMode(LED[1], OUTPUT );
  pinMode(LED[2], OUTPUT );
  pinMode(LED[3], OUTPUT );
  pinMode(BZ, OUTPUT);
} 
void loop(){
 LED_RUN();
 
}