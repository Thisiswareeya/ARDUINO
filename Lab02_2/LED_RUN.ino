void LED_RUN(){
   for(int i=0; i <=3; i++ ){
    digitalWrite(LED[i], HIGH);
    delay(500);
    digitalWrite(LED[i], LOW);
    delay(500);
  }
    digitalWrite(BZ, HIGH);
    delay(500);
    digitalWrite(BZ, LOW);
    delay(500);
}