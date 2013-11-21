/*
 * RobotMovementLibrary.c
 *
 *  Created on: Nov 19, 2013
 *      Author: C15Jennae.Steinmiller
 */

void motion(int direction, int time) {
	int i = 0;

	//Clears all of the pins
	TA0CCTL1 &= ~OUTMOD_7;
	TA0CCTL0 &= ~OUTMOD_7;
	TA1CCTL1 &= ~OUTMOD_7;
	TA1CCTL0 &= ~OUTMOD_7;

	__delay_cycles(500000); //Allows for small break between different motions.

	if (direction == 1) {
		//to move forward
		TA0CCTL1 |= OUTMOD_7;        // set TACCTL1 to Reset / Set mode
		TA0CCTL0 |= OUTMOD_5;			//set to Reset
		TA1CCTL1 |= OUTMOD_7;
		TA1CCTL0 |= OUTMOD_5;

	}

	else if (direction == 2) {
		//to move backward
		TA0CCTL1 |= OUTMOD_5;		//set to reset
		TA0CCTL0 |= OUTMOD_4;		//set to toggle
		TA1CCTL1 |= OUTMOD_5;		//set to reset
		TA1CCTL0 |= OUTMOD_4;		//set to toggle

	}

	else if (direction == 3) {
		//to move left
		TA0CCTL1 |= OUTMOD_7;        // set TACCTL1 to Reset / Set mode
		TA0CCTL0 |= OUTMOD_5;			//set to Reset
		TA1CCTL1 |= OUTMOD_5;
		TA1CCTL0 |= OUTMOD_7;
	}

	else {
		//to move right
		TA0CCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset
		TA0CCTL0 |= OUTMOD_7;			//set to Reset / Set mode
		TA1CCTL1 |= OUTMOD_7;
		TA1CCTL0 |= OUTMOD_5;

	}

	while(i <= time){
		i++;
		__delay_cycles(1000);
	}

}
