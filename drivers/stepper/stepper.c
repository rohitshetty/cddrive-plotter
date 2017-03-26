#include "../../config.h"
#include<avr/io.h>
#include<util/delay.h>
#include "stepper.h"

void step_one_fifth_forward(volatile uint8_t *port) {
	*port = PH1;
	_delay_ms(10);
	*port = PH3;
	_delay_ms(10);
	*port = PH5;
	_delay_ms(10);
	*port = PH7;
	_delay_ms(10);
}

void step_one_fifth_backward(volatile uint8_t *port) {
	*port = PH7;
	_delay_ms(10);
	*port = PH5;
	_delay_ms(10);
	*port = PH3;
	_delay_ms(10);
	*port = PH1;
	_delay_ms(10);
}
