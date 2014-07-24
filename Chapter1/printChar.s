	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	jmp	LBB0_2
	.align	4, 0x90
LBB0_1:                                 ## %.lr.ph
                                        ##   in Loop: Header=BB0_2 Depth=1
	movl	%eax, %edi
	callq	_putchar
LBB0_2:                                 ## %.lr.ph
                                        ## =>This Inner Loop Header: Depth=1
	callq	_getchar
	cmpl	$-1, %eax
	jne	LBB0_1
## BB#3:                                ## %._crit_edge
	xorl	%eax, %eax
	popq	%rbp
	ret
	.cfi_endproc


.subsections_via_symbols
