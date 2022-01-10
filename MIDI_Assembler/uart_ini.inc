/*
 * uart_ini.inc
 *
 *  Created: 23.12.2021 16:48:35
 *   Author: MikhnovetsA
 */ 

 
				.equ	XTAL = 16000000								; Тактовая частота МК
				.equ	baudrate = 31250							; Частота MIDI
				.equ	bauddivider = XTAL / (16 * baudrate) - 1	; 

 uart_init:		ldi		r16, low(bauddivider)
				sts		UBRR0L, r16
				ldi		r16, high(bauddivider)
				sts		UBRR0H, r16