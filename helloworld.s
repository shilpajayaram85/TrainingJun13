	.file	"helloworld.c"
	.text
	.section	.rodata
.LC0:
	.string	"Hello World"
.LC1:
	.string	"Welcome to c Programming"
.LC3:
	.string	"%f"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	movq	.LC2(%rip), %rax
	movq	%rax, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	leaq	.LC3(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movss	.LC4(%rip), %xmm0
	movss	%xmm0, -4(%rbp)
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC2:
	.long	2027224564
	.long	1074341609
	.align 4
.LC4:
	.long	1105354293
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
