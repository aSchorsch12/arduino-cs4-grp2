int output = 13;

int A = 440;
float B = 493.9;
float C = 261.6;
float C5 = 523.3;
float D = 293.7;
float D5 = 587.3
float E = 329.6;
float F = 349.2;
int G = 392;


int tempo = 1;

int whole = tempo * 1000;
int dothalf = tempo * 750;
int half = tempo * 500;
int quarter = tempo * 250;
int sixteenth = tempo * 125;

void setup() 

{
//Line 1
tone(output, B);
delay(whole);

tone(output, A);
delay(half);

tone(output, D);
delay(half);

tone(output, C5);
delay(whole);

tone(output, C5);
delay(quarter);

tone(output, B);
delay(quarter);

tone(output, G);
delay(quarter);

tone(output, D);
delay(quarter);
  //I am confused as to what one of the notes are here so i skip this line for rn line 2
//Line 3
tone(output, E);
delay(quarter);

tone(output, F);
delay(quarter);

tone(output, G);
delay(quarter);

tone(output, A);
delay(quarter);

tone(output, G);
delay(quarter);

tone(output, D);
delay(dothalf);

tone(output, E);
delay(quarter);

tone(output, F);
delay(quarter);

tone(output, G);
delay(quarter);

tone(output, A);
delay(quarter);
//Line 4
tone(output, G);
delay(whole);

tone(output, E);
delay(quarter);

tone(output, F);
delay(quarter);

tone(output, G);
delay(quarter);

tone(output, G);
delay(sixteenth);

tone(output, A);
delay(sixteenth);

tone(output, G);
delay(quarter);

tone(output, D);
delay(quarter);

tone(output, B);
delay(half);

//Line 9
tone(output, B);
delay(half);
tone(output, G);
delay(quarter);
tone(output, E);
delay(quarter);

tone(output, E);
delay(whole);

noTone(output)
delay(half)
tone(output, D);
delay(quarter);
tone(output, G);
delay(quarter);

// Alex test comment
int D4 = 330;

}
void loop() {}







