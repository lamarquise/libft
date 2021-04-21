	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15, 4	sdk_version 10, 15, 4
	.globl	_ft_atoi                ## -- Begin function ft_atoi
	.p2align	4, 0x90
_ft_atoi:                               ## @ft_atoi
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movl	$0, -12(%rbp)
	movq	$0, -24(%rbp)
	movl	$1, -28(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$9, %edx
	jl	LBB0_3
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$13, %edx
	movb	$1, %sil
	movb	%sil, -29(%rbp)         ## 1-byte Spill
	jle	LBB0_4
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$32, %edx
	sete	%sil
	movb	%sil, -29(%rbp)         ## 1-byte Spill
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movb	-29(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB0_5
	jmp	LBB0_6
LBB0_5:                                 ##   in Loop: Header=BB0_1 Depth=1
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB0_1
LBB0_6:
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$43, %edx
	je	LBB0_8
## %bb.7:
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$45, %edx
	jne	LBB0_11
LBB0_8:
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$45, %edx
	jne	LBB0_10
## %bb.9:
	movl	$-1, -28(%rbp)
LBB0_10:
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
LBB0_11:
	jmp	LBB0_12
LBB0_12:                                ## =>This Inner Loop Header: Depth=1
	xorl	%eax, %eax
                                        ## kill: def $al killed $al killed $eax
	movq	-8(%rbp), %rcx
	movslq	-12(%rbp), %rdx
	movsbl	(%rcx,%rdx), %esi
	cmpl	$48, %esi
	movb	%al, -30(%rbp)          ## 1-byte Spill
	jl	LBB0_14
## %bb.13:                              ##   in Loop: Header=BB0_12 Depth=1
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$57, %edx
	setle	%sil
	movb	%sil, -30(%rbp)         ## 1-byte Spill
LBB0_14:                                ##   in Loop: Header=BB0_12 Depth=1
	movb	-30(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB0_15
	jmp	LBB0_16
LBB0_15:                                ##   in Loop: Header=BB0_12 Depth=1
	imulq	$10, -24(%rbp), %rax
	movq	-8(%rbp), %rcx
	movslq	-12(%rbp), %rdx
	movsbl	(%rcx,%rdx), %esi
	subl	$48, %esi
	movslq	%esi, %rcx
	addq	%rcx, %rax
	movq	%rax, -24(%rbp)
	movl	-12(%rbp), %esi
	addl	$1, %esi
	movl	%esi, -12(%rbp)
	jmp	LBB0_12
LBB0_16:
	movq	-24(%rbp), %rax
	movslq	-28(%rbp), %rcx
	imulq	%rcx, %rax
                                        ## kill: def $eax killed $eax killed $rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
