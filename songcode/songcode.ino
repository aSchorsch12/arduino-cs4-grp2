int output = 13;

int A = 440;
float B = 493.9;
float C = 261.6;
float C5 = 523.3;
float D = 293.7;
float D5 = 587.3;
float E = 329.6;
float F = 349.2;
int G = 392;


int tempo = 4;

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
//Line 2
tone(output, E);
delay(whole);

tone(output, D);
delay(quarter);
tone(output, G);
delay(quarter);
tone(output, D);
delay(quarter);
noTone(output);
delay(quarter);

tone(output, A);
delay(half);
tone(output, B);
delay(half);

tone(output, C5);
delay(half);
tone(output, D5);
delay(half);
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
//Line 5
tone(output, C5);
delay(quarter);
tone(output, B);
delay(quarter);
tone(output, A);
delay(quarter);
tone(output, B);
delay(quarter);

tone(output, A);
delay(whole);

tone(output, E);
delay(quarter);
tone(output, F);
delay(quarter);
tone(output, G);
delay(quarter);
tone(output, A);
delay(quarter);
//Line 6
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

tone(output, G);
delay(whole);
//Line 7
tone(output, E);
delay(quarter);
tone(output, F);
delay(quarter);
tone(output, G);
delay(sixteenth);
tone(output, C);
delay(sixteenth);
tone(output, C);
delay(quarter);

tone(output, D5);
delay(quarter);
tone(output, B);
delay(quarter);
tone(output, G);
delay(quarter);
tone(output, E);
delay(quarter);

tone(output, C5);
delay(quarter);
tone(output, B);
delay(quarter);
tone(output, A);
delay(quarter);
tone(output, B);
delay(quarter);
//Line 8
tone(output, A);
delay(dothalf);
tone(output, G);
delay(quarter);

tone(output, D5);
delay(half);
tone(output, B);
delay(quarter);

tone(output, A);
delay(dothalf);
tone(output, D5);
delay(quarter);
tone(output, B);
delay(quarter);
//Line 9
tone(output, B);
delay(half);
tone(output, G);
delay(quarter);
tone(output, E);
delay(quarter);

tone(output, E);
delay(whole);

noTone(output);
delay(half);
tone(output, D);
delay(quarter);
tone(output, G);
delay(quarter);
//Line 10
tone(output, C5);
delay(half);
tone(output, B);
delay(half);

tone(output, A);
delay(whole);

tone(output, A);
delay(whole);

noTone(output);
delay(half);
tone(output, E);
delay(quarter);
tone(output, F);
delay(quarter);
//Line 11
tone(output, G);
delay(half);
tone(output, D);
delay(quarter);
tone(output, D);
delay(quarter);

tone(output, D5);
delay(half);
tone(output, B);
delay(half);

tone(output, G);
delay(quarter);
tone(output, G);
delay(quarter);
tone(output, E);
delay(half);

tone(output, C5);
delay(half);
tone(output, B);
delay(half);
//Line 12
tone(output, A);
delay(half);
tone(output, B);
delay(half);

tone(output, A);
delay(whole);

tone(output, A);
delay(dothalf);
tone(output, D);
delay(quarter);
//Line 13
tone(output, D5);
delay(half);
tone(output, B);
delay(quarter);

tone(output, A);
delay(dothalf);
tone(output, D5);
delay(quarter);

tone(output, B);
delay(dothalf);
tone(output, G);
delay(quarter);
tone(output, E);
delay(quarter);
//Line 14
tone(output, E);
delay(whole);

noTone(output);
delay(half);
tone(output, D);
delay(quarter);
tone(output, G);
delay(quarter);

tone(output, C5);
delay(half);
tone(output, B);
delay(half);
//Line 15
tone(output, A);
delay(whole);

tone(output, A);
delay(whole);

noTone(output);
delay(half);
tone(output, E);
delay(quarter);
tone(output, F);
delay(quarter);
//Line 16
tone(output, G);
delay(half);
tone(output, D);
delay(quarter);
tone(output, D);
delay(quarter);

tone(output, D5);
delay(half);
tone(output, B);
delay(half);

tone(output, G);
delay(quarter);
tone(output, G);
delay(quarter);
tone(output, E);
delay(quarter);
tone(output, D);
delay(quarter);
}
void loop() {}







