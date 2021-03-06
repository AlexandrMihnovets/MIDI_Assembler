/*
 * flush.inc
 *
 *  Created: 24.12.2021 15:39:23
 *   Author: MikhnovetsA
 */ 

 ; ������������� ������ (������� �� ������)

 RAM_Flush:		ldi		zl, low(SRAM_START)			; ����� ����� ������ ��� � ������ z (0x0100 ��� ATmega328p)
				ldi		zh, high(SRAM_START)		;
				clr		r16							; ������� R16
 Flush:			st		z+, r16						; ����� ���������� �������� R16 (0) � ������ ������ ������ ��� �� ������ 0x0100 � ���������� � ������ 1
				cpi		zh, high(RAMEND+1)			; ���������� ������� � �������� ZH �� ������� ������ ������ ����� ���
				brne	Flush						; �������� �����, ���� �� ������� ��� ������ ���

				cpi		zl, low(RAMEND+1)			; ������ ������� ����
				brne	Flush						;

				clr		zl							; ������� ������
				clr		zh							;
				; ������ ����� ���� ������� Varint
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

				; ��������� ����� ��� ����������, ������� �������, ����� ������� ���� ������ � ������, ����� �������� ���������� 255 ���� � ������� �����.
				; ����� �������� ��� �������� ��� �� ������� �� ����������. ��������������� ����� � ������.

 /*
 Variant:		ldi		zl, 30						; ����� ������ �������� ��������
				clr		zh							;
				dec		zl							; ��������� �����
				st		z, zh						; ���������� � ������� 0
				brne	PC-2						; ���������� ��
 */