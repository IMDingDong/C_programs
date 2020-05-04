TITLE MASM Template

INCLUDE Irvine32.inc
.data
	source BYTE "This is the source string", 0
	target BYTE SIZEOF source DUP('#')
.code
main PROC
   mov esi, 0
   mov ecx, SIZEOF source
   L1:
   mov al, source[ecx]-2
   mov target[esi], al
   inc esi
   loop L1

   mov esi, OFFSET target
   mov ebx, 1
   mov ecx, SIZEOF target
   call DumpMem
   exit
main ENDP

END main