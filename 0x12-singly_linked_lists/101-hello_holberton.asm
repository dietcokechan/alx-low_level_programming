		extern printf				; the function to be called
		section .data				; data section, initialized variables
msg:	db "Hello, Holberton", 0	; string needs 0
fmt:	db "%s", 10, 0				; printf format, "\n", '0'

		section .text				; code section

		global main					; standard gcc entry point
main:
		push	rbp					; set up stack frame, must be aligned

		mov		rdi,fmt
		mov		rsi,msg
		mov		rax,0
		call	printf				; call function

		pop		rbp					; restore stack

		mov		rax,0				; normal, no error, return value
		ret							; return
