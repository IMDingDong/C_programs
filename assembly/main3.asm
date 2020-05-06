TITLE MASM Template

INCLUDE Irvine32. inc

.data
	arrayD DWORD 5 DUP(O)

.code

main PROC
	mov ecx, LENGTHOF arrayD

L1:
	call ReadInt
	push eax
	loop L1
	mov ecx, LENGTHOF arrayD

L2:
	pop eax
	call WriteInt
	call Crlf
	loop L2

	exit
main ENDP
END main
