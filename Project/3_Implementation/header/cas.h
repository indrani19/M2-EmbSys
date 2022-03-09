/**
 * @file cas.h
 * @author Indrani v
 * @brief
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */


#ifndef __CAS__H__
#define __CAS__H__
#ifndef __AVR_ATmega2560__
#define __AVR_ATmega2560__
#endif
#define F_CPU 8000000UL   

#include <Ultrasonic.h>

void forward(void);

void halt(void);


void changeSpeed(void);

#endif