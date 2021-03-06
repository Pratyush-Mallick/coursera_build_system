/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief Statistics library header
 *
 * This file contains all the function declarations for performing  maximum, 
 * minimum, mean, median, sorting and printing operation on a input array of  
 * unsigned char data items 
 *
 * @author Pratyush Mallick
 * @date 22-02-2021
 *
 */
#ifndef __DATA_H__
#define __DATA_H__

#include <stdint.h>

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

#endif /* __STATS_H__ */