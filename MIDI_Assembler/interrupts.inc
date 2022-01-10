/*
 * interrupts.inc
 *
 *  Created: 23.12.2021 16:14:46
 *   Author: MikhnovetsA
 */ 

 ; Таблица векторов прерываний
					.ORG	0x0000								; Reset
					rjmp	Reset								; Перепрыгиваем таблицу векторов прерывания
					.ORG	0x0002								; INT0
					reti										; RETI - пока что заглушка. Как пришли так и ушли. Потом будет RJMP на нужную метку
					.ORG	0x0004								; INT1
					reti
					.ORG	0x0006								; PCINT0
					reti
					.ORG	0x0008								; PCINT1
					reti								
					.ORG	0x000A								; PCINT2
					reti
					.ORG	0x000C								; WDT
					reti
					.ORG	0x000E								; Timer2 CompA
					reti
					.ORG	0x0010								; Timer2 CompB
					reti
					.ORG	0x0012								; Timer2 OVF
					reti
					.ORG	0x0014								; Timer1 Capt
					reti
					.ORG	0x0016								; Timer1 CompA
					reti
					.ORG	0x0018								; Timer1 CompB
					reti
					.ORG	0x001A								; Timer1 OVF
					reti	
					.ORG	0x001C								; Timer0 CompA
					reti
					.ORG	0x001E								; Timer0 CompB
					reti
					.ORG	0x0020								; Timer0 OVF
					reti
					.ORG	0x0022								; SPI, STC
					reti
					.ORG	0x0024								; USART, Rx
					reti
					.ORG	0x0026								; USART, UDRE
					reti
					.ORG	0x0028								; USART, Tx
					reti
					.ORG	0x002A								; ADC
					reti
					.ORG	0x002C								; EE READY
					reti
					.ORG	0x002E								; Analog Comp
					reti
					.ORG	0x0030								; TWI
					reti
					.ORG	0x0032								; SPM READY
					reti