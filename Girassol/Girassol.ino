#include <Stepper.h>			//Chama a biblioteca externa do motor de step

const int  PPR = 512;
Stepper flor( PPR, 8, 10, 9, 11);   

	//Total de passos por rotacao
const int  LDRD = A0;
const int  LDRE = A1;

 int  leituraD = 0;
int  leituraE = 0;

void setup(){
	flor.setSpeed(60);
	
}

void loop(){
	leituraD = analogRead(LDRD);
	leituraE = analogRead(LDRE);
	if( leituraD > leituraE){
		flor.step(-1);
		delay(2);
	}else{
		flor.step(1);
		delay(2);
	}
}