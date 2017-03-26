#ifndef STEPPER_H
#define STEPPER_H

#define PH1 0b00001001 //0x9
#define PH3 0b00000101 //0x5
#define PH5 0b00000110 //0x6
#define PH7 0b00001010 //0xa

void step_one_fifth_forward(volatile uint8_t *);
void step_one_fifth_backward(volatile uint8_t *);


#endif
