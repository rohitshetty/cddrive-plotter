#include "config.h"
#include<avr/io.h>
#include<util/delay.h>
#include "drivers/stepper/stepper.h"

int main () {
	int i;
	DDRA = 0xff;
	DDRC = 0xff;
	while (1) {

		for (i=0;i<40;i++){
			step_one_fifth_forward(&PORTA);
			step_one_fifth_forward(&PORTC);
		}
		_delay_ms(1000);

		for (i=0;i<40;i++) {
			step_one_fifth_backward(&PORTA);
			step_one_fifth_backward(&PORTC);
		}
		_delay_ms(1000);




	}

}
