TITLE MASM Template

INCLUDE Irvine32.inc

.data
	buffer BYTE 50 DUP(0)
	byteCount DWORD ?

.code

main PROC
	mov edx, OFFSET buffer
	mov ecx, SIZEOF buffer
	call ReadString
	mov byteCount, eax
	mov ecx, byteCount
	mov esi, 0

L1:
	movzx eax, buffer[esi]
	push eax
	inc esi
	loop L1
	mov ecx, byteCount
	mov esi, 0

L2:
	pop eax
	mov buffer[esi], al
	inc esi
	loop L2
	mov edx, OFFSET buffer
	call WriteString
	call Crlf

	exit
mainENDP
END main