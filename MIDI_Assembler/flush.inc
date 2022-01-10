/*
 * flush.inc
 *
 *  Created: 24.12.2021 15:39:23
 *   Author: MikhnovetsA
 */ 

 ; Инициализация памяти (очистка от мусора)

 RAM_Flush:		ldi		zl, low(SRAM_START)			; Пишем адрес начала ОЗУ в индекс z (0x0100 для ATmega328p)
				ldi		zh, high(SRAM_START)		;
				clr		r16							; Очищаем R16
 Flush:			st		z+, r16						; Пишем содержимое регистра R16 (0) в первую ячейку памяти ОЗУ по адресу 0x0100 и прибавляем к адресу 1
				cpi		zh, high(RAMEND+1)			; Сравниваем знчение в регистре ZH со старшим байтом адреса конца ОЗУ
				brne	Flush						; Крутимся здесь, пока не обнулим все ячейки ОЗУ

				cpi		zl, low(RAMEND+1)			; Теперь младший байт
				brne	Flush						;

				clr		zl							; Очищаем индекс
				clr		zh							;
				; Отсюда может быть вариант Varint
				clr		r0
				clr		r1
				clr		r2
				clr		r3
				clr		r4
				clr		r5
				clr		r6
				clr		r7
				clr		r8
				clr		r9
				clr		r10
				clr		r11
				clr		r12
				clr		r13
				clr		r14
				clr		r15
				clr		r16
				clr		r17
				clr		r18
				clr		r19
				clr		r20
				clr		r21
				clr		r22
				clr		r23
				clr		r24
				clr		r25
				clr		r26
				clr		r27
				clr		r28
				clr		r29

				; Поскольку адрес ОЗУ двубайтный, сначала смотрим, чтобы старший байт совпал с концом, потом добиваем оставшиеся 255 байт с младшем байте.
				; Далее обнуляем все регистры РОН от первого до последнего. Микроконтроллер готов к работе.

 /*
 Variant:		ldi		zl, 30						; Адрес самого старшего регистра
				clr		zh							;
				dec		zl							; Уменьшаем адрес
				st		z, zh						; Записываем в регистр 0
				brne	PC-2						; Перебираем всё
 */