/*
 * user.h
 *
 *  Created on: 2021/03/15
 *      Author: KIU-CHI
 */

#ifndef INC_USER_H_
#define INC_USER_H_

extern SPI_HandleTypeDef hspi1;
extern SPI_HandleTypeDef hspi2;

void init();
void scan_start();
void loop();
void usb_rx_callback(uint8_t *, uint16_t *);

#endif /* INC_USER_H_ */
