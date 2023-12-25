/*
 * Port_Priv.h
 *
 * Created: 12/12/2023 1:16:44 AM
 *  Author: main
 */ 


#ifndef PORT_PRIV_H_
#define PORT_PRIV_H_

#define PRE_COMP 0
#define POST_COMP 1

#define PORT_LOW 0
#define PORT_HIGH 1

#define TWO_PORTS 2
#define THREE_PORTS 3
#define FOUR_PORTS 4

#define INPUT_PU 1
#define INPUT_PD 2
#define OUTPUT_HIGH 3
#define OUTPUT_LOW 4

#define HELPER(P7,P6,P5,P4,P3,P2,P1,P0) 0b##P7##P6##P5##P4##P3##P2##P1##P0
#define CONCAT(P7,P6,P5,P4,P3,P2,P1,P0) HELPER(P7,P6,P5,P4,P3,P2,P1,P0)

#define NUM_OF_PINS 8




#endif /* PORT_PRIV_H_ */