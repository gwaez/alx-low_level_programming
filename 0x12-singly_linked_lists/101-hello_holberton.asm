section		.text
	extern	printf
	global	main

main:
	mov		edi, gwz
	mov		eax, 0
	call	printf


section		.data
	gwz db 'Hello, Holberton', 0xa, 0
