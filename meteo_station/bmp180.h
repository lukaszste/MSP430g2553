/*
 * bmp180.h
 *
 *  Created on: 13 kwi 2015
 *      Author: £ukasz
 */
#include <stdint.h>

#ifndef BMP180_H_
#define BMP180_H_


#define I2C_ADDRES 0x77;
#define CAL_AC1 0xAA
#define CAL_AC2 0xAC
#define CAL_AC3 0xAE
#define CAL_AC4 0xB0
#define CAL_AC5 0xB2
#define CAL_AC6 0xB4
#define CAL_B1  0xB6
#define CAL_B2  0xB8
#define CAL_MB  0xBA
#define CAL_MC  0xBC
#define CAL_MD  0xBE

//Varible
static const uint8_t bmpCalTab[11] = {CAL_AC1, CAL_AC2, CAL_AC3, CAL_AC4, CAL_AC5, CAL_B1, CAL_B2, CAL_MB, CAL_MC, CAL_MD};

enum {
		TX_IDLE_MODE = 0,
		TX_FUN_GET_CAL_VAL_1,
		TX_FUN_GET_CAL_VAL_2,
}i2c_tx_courent_state;

enum {
		RX_IDLE_MODE = 0,
		RX_FUN_GET_CAL_VAL_1,
		RX_FUN_GET_CAL_VAL_2,
}i2c_rx_courent_state;


//Functions

void inline bmp180init();
void GetCalibrationVariable();






#endif /* BMP180_H_ */
