int main()
{
__asm__ __volatile__(
"	jmp	_main2\n"
"	.p2align 4,,15\n"
"_xsort:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	pushl	%edi\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	subl	$20, %esp\n"
"	movl	8(%ebp), %edi\n"
"L2:\n"
"	cmpl	$11, 12(%ebp)\n"
"	jle	L36\n"
"	xorl	%esi, %esi\n"
"	movl	12(%ebp), %ecx\n"
"	decl	%ecx\n"
"	movl	12(%ebp), %edx\n"
"	sarl	%edx\n"
"	movl	(%edi,%edx,8), %ebx\n"
"	.p2align 4,,15\n"
"L15:\n"
"	cmpl	%ebx, (%edi,%esi,8)\n"
"	jge	L33\n"
"	.p2align 4,,15\n"
"L21:\n"
"	incl	%esi\n"
"	cmpl	%ebx, (%edi,%esi,8)\n"
"	jl	L21\n"
"L33:\n"
"	cmpl	%ebx, (%edi,%ecx,8)\n"
"	jle	L35\n"
"	.p2align 4,,15\n"
"L25:\n"
"	decl	%ecx\n"
"	cmpl	%ebx, (%edi,%ecx,8)\n"
"	jg	L25\n"
"L35:\n"
"	cmpl	%ecx, %esi\n"
"	jge	L16\n"
"	movl	(%edi,%esi,8), %eax\n"
"	movl	4(%edi,%esi,8), %edx\n"
"	movl	%eax, -24(%ebp)\n"
"	movl	%edx, -20(%ebp)\n"
"	movl	(%edi,%ecx,8), %eax\n"
"	movl	4(%edi,%ecx,8), %edx\n"
"	movl	%eax, (%edi,%esi,8)\n"
"	movl	%edx, 4(%edi,%esi,8)\n"
"	incl	%esi\n"
"	movl	-24(%ebp), %eax\n"
"	movl	-20(%ebp), %edx\n"
"	movl	%eax, (%edi,%ecx,8)\n"
"	movl	%edx, 4(%edi,%ecx,8)\n"
"	decl	%ecx\n"
"	jmp	L15\n"
"L16:\n"
"	movl	12(%ebp), %eax\n"
"	subl	%esi, %eax\n"
"	cmpl	$1, %eax\n"
"	jg	L37\n"
"L27:\n"
"	movl	%esi, 12(%ebp)\n"
"	jmp	L2\n"
"L37:\n"
"	movl	%eax, 4(%esp)\n"
"	leal	(%edi,%esi,8), %ecx\n"
"	movl	%ecx, (%esp)\n"
"	call	_xsort\n"
"	jmp	L27\n"
"L36:\n"
"	movl	$1, %esi\n"
"	cmpl	12(%ebp), %esi\n"
"	jge	L1\n"
"L14:\n"
"	movl	(%edi,%esi,8), %eax\n"
"	movl	4(%edi,%esi,8), %ecx\n"
"	movl	%eax, -24(%ebp)\n"
"	movl	%ecx, -20(%ebp)\n"
"	movl	%esi, %ecx\n"
"	decl	%ecx\n"
"	js	L9\n"
"	cmpl	%eax, (%edi,%ecx,8)\n"
"	jle	L9\n"
"L13:\n"
"	movl	(%edi,%ecx,8), %edx\n"
"	movl	4(%edi,%ecx,8), %ebx\n"
"	movl	%edx, 8(%edi,%ecx,8)\n"
"	movl	%ebx, 12(%edi,%ecx,8)\n"
"	decl	%ecx\n"
"	js	L9\n"
"	movl	-24(%ebp), %eax\n"
"	cmpl	%eax, (%edi,%ecx,8)\n"
"	jg	L13\n"
"L9:\n"
"	movl	-24(%ebp), %edx\n"
"	movl	-20(%ebp), %ebx\n"
"	movl	%edx, 8(%edi,%ecx,8)\n"
"	movl	%ebx, 12(%edi,%ecx,8)\n"
"	incl	%esi\n"
"	cmpl	12(%ebp), %esi\n"
"	jl	L14\n"
"L1:\n"
"	addl	$20, %esp\n"
"	popl	%ebx\n"
"	popl	%esi\n"
"	popl	%edi\n"
"	popl	%ebp\n"
"	ret\n"
"	.p2align 4,,15\n"
"_ysort:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	pushl	%edi\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	subl	$20, %esp\n"
"	movl	8(%ebp), %edi\n"
"L39:\n"
"	cmpl	$11, 12(%ebp)\n"
"	jle	L73\n"
"	xorl	%esi, %esi\n"
"	movl	12(%ebp), %ecx\n"
"	decl	%ecx\n"
"	movl	12(%ebp), %edx\n"
"	sarl	%edx\n"
"	movl	4(%edi,%edx,8), %ebx\n"
"	.p2align 4,,15\n"
"L52:\n"
"	cmpl	%ebx, 4(%edi,%esi,8)\n"
"	jge	L70\n"
"	.p2align 4,,15\n"
"L58:\n"
"	incl	%esi\n"
"	cmpl	%ebx, 4(%edi,%esi,8)\n"
"	jl	L58\n"
"L70:\n"
"	cmpl	%ebx, 4(%edi,%ecx,8)\n"
"	jle	L72\n"
"	.p2align 4,,15\n"
"L62:\n"
"	decl	%ecx\n"
"	cmpl	%ebx, 4(%edi,%ecx,8)\n"
"	jg	L62\n"
"L72:\n"
"	cmpl	%ecx, %esi\n"
"	jge	L53\n"
"	movl	(%edi,%esi,8), %eax\n"
"	movl	4(%edi,%esi,8), %edx\n"
"	movl	%eax, -24(%ebp)\n"
"	movl	%edx, -20(%ebp)\n"
"	movl	(%edi,%ecx,8), %eax\n"
"	movl	4(%edi,%ecx,8), %edx\n"
"	movl	%eax, (%edi,%esi,8)\n"
"	movl	%edx, 4(%edi,%esi,8)\n"
"	incl	%esi\n"
"	movl	-24(%ebp), %eax\n"
"	movl	-20(%ebp), %edx\n"
"	movl	%eax, (%edi,%ecx,8)\n"
"	movl	%edx, 4(%edi,%ecx,8)\n"
"	decl	%ecx\n"
"	jmp	L52\n"
"L53:\n"
"	movl	12(%ebp), %eax\n"
"	subl	%esi, %eax\n"
"	cmpl	$1, %eax\n"
"	jg	L74\n"
"L64:\n"
"	movl	%esi, 12(%ebp)\n"
"	jmp	L39\n"
"L74:\n"
"	movl	%eax, 4(%esp)\n"
"	leal	(%edi,%esi,8), %ecx\n"
"	movl	%ecx, (%esp)\n"
"	call	_ysort\n"
"	jmp	L64\n"
"L73:\n"
"	movl	$1, %esi\n"
"	cmpl	12(%ebp), %esi\n"
"	jge	L38\n"
"L51:\n"
"	movl	(%edi,%esi,8), %ecx\n"
"	movl	4(%edi,%esi,8), %edx\n"
"	movl	%ecx, -24(%ebp)\n"
"	movl	%edx, -20(%ebp)\n"
"	movl	%esi, %ecx\n"
"	decl	%ecx\n"
"	js	L46\n"
"	cmpl	%edx, 4(%edi,%ecx,8)\n"
"	jle	L46\n"
"L50:\n"
"	movl	(%edi,%ecx,8), %edx\n"
"	movl	4(%edi,%ecx,8), %ebx\n"
"	movl	%edx, 8(%edi,%ecx,8)\n"
"	movl	%ebx, 12(%edi,%ecx,8)\n"
"	decl	%ecx\n"
"	js	L46\n"
"	movl	-20(%ebp), %eax\n"
"	cmpl	%eax, 4(%edi,%ecx,8)\n"
"	jg	L50\n"
"L46:\n"
"	movl	-24(%ebp), %edx\n"
"	movl	-20(%ebp), %ebx\n"
"	movl	%edx, 8(%edi,%ecx,8)\n"
"	movl	%ebx, 12(%edi,%ecx,8)\n"
"	incl	%esi\n"
"	cmpl	12(%ebp), %esi\n"
"	jl	L51\n"
"L38:\n"
"	addl	$20, %esp\n"
"	popl	%ebx\n"
"	popl	%esi\n"
"	popl	%edi\n"
"	popl	%ebp\n"
"	ret\n"
"	.p2align 4,,15\n"
"_isort:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	pushl	%edi\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	subl	$8, %esp\n"
"	movl	8(%ebp), %edi\n"
"L76:\n"
"	cmpl	$11, 12(%ebp)\n"
"	jle	L110\n"
"	xorl	%esi, %esi\n"
"	movl	12(%ebp), %edx\n"
"	decl	%edx\n"
"	movl	12(%ebp), %ecx\n"
"	sarl	%ecx\n"
"	movl	(%edi,%ecx,4), %ebx\n"
"	.p2align 4,,15\n"
"L89:\n"
"	movl	(%edi,%esi,4), %ecx\n"
"	cmpl	%ebx, %ecx\n"
"	jge	L107\n"
"	.p2align 4,,15\n"
"L95:\n"
"	incl	%esi\n"
"	movl	(%edi,%esi,4), %ecx\n"
"	cmpl	%ebx, %ecx\n"
"	jl	L95\n"
"L107:\n"
"	movl	(%edi,%edx,4), %eax\n"
"	cmpl	%ebx, %eax\n"
"	jle	L109\n"
"	.p2align 4,,15\n"
"L99:\n"
"	decl	%edx\n"
"	movl	(%edi,%edx,4), %eax\n"
"	cmpl	%ebx, %eax\n"
"	jg	L99\n"
"L109:\n"
"	cmpl	%edx, %esi\n"
"	jge	L90\n"
"	movl	%eax, (%edi,%esi,4)\n"
"	incl	%esi\n"
"	movl	%ecx, (%edi,%edx,4)\n"
"	decl	%edx\n"
"	jmp	L89\n"
"L90:\n"
"	movl	12(%ebp), %eax\n"
"	subl	%esi, %eax\n"
"	cmpl	$1, %eax\n"
"	jg	L111\n"
"L101:\n"
"	movl	%esi, 12(%ebp)\n"
"	jmp	L76\n"
"L111:\n"
"	movl	%eax, 4(%esp)\n"
"	leal	(%edi,%esi,4), %edx\n"
"	movl	%edx, (%esp)\n"
"	call	_isort\n"
"	jmp	L101\n"
"L110:\n"
"	movl	$1, %esi\n"
"	cmpl	12(%ebp), %esi\n"
"	jge	L75\n"
"L88:\n"
"	movl	(%edi,%esi,4), %ecx\n"
"	movl	%esi, %edx\n"
"	decl	%edx\n"
"	js	L83\n"
"	movl	(%edi,%edx,4), %eax\n"
"	cmpl	%ecx, %eax\n"
"	jle	L83\n"
"L87:\n"
"	movl	%eax, 4(%edi,%edx,4)\n"
"	decl	%edx\n"
"	js	L83\n"
"	movl	(%edi,%edx,4), %eax\n"
"	cmpl	%ecx, %eax\n"
"	jg	L87\n"
"L83:\n"
"	movl	%ecx, 4(%edi,%edx,4)\n"
"	incl	%esi\n"
"	cmpl	12(%ebp), %esi\n"
"	jl	L88\n"
"L75:\n"
"	addl	$8, %esp\n"
"	popl	%ebx\n"
"	popl	%esi\n"
"	popl	%edi\n"
"	popl	%ebp\n"
"	ret\n"
"	.p2align 4,,15\n"
"_main2:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	pushl	%edi\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	subl	$28, %esp\n"
"	xorl	%esi, %esi\n"
"	.p2align 4,,15\n"
"L141:\n"
"	xorl	%eax, %eax\n"
"	movl	%eax, _d.2(,%esi,4)\n"
"	incl	%esi\n"
"	cmpl	$255, %esi\n"
"	jle	L141\n"
"	movl	$48, %esi\n"
"L146:\n"
"	movl	$1, %eax\n"
"	movl	%eax, _d.2(,%esi,4)\n"
"	incl	%esi\n"
"	cmpl	$57, %esi\n"
"	jle	L146\n"
"	xorl	%esi, %esi\n"
"	.p2align 4,,15\n"
"L151:\n"
"	movl	$1, %edx\n"
"	movl	%edx, _dm.3(,%esi,4)\n"
"	incl	%esi\n"
"	cmpl	$255, %esi\n"
"	jle	L151\n"
"	movl	$48, %esi\n"
"L156:\n"
"	xorl	%ecx, %ecx\n"
"	movl	%ecx, _dm.3(,%esi,4)\n"
"	incl	%esi\n"
"	cmpl	$57, %esi\n"
"	jle	L156\n"
"	xorl	%esi, %esi\n"
"	movl	%esi, _dm.3+180\n"
"	movl	$27262976, %ebx\n"
"	movl	%ebx, 8(%esp)\n"
"	movl	$_buf.6, %edi\n"
"	movl	%edi, 4(%esp)\n"
"	movl	$0, (%esp)\n"
"	call	read\n"
"L157:\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%ebx\n"
"	movl	_dm.3(,%ebx,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L324\n"
"L163:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%edx\n"
"	movl	_dm.3(,%edx,4), %esi\n"
"	testl	%esi, %esi\n"
"	jne	L163\n"
"L324:\n"
"	cmpb	$45, %cl\n"
"	je	L376\n"
"	movsbl	%cl,%edx\n"
"	incl	%edi\n"
"	subl	$48, %edx\n"
"	movl	%edx, -20(%ebp)\n"
"	movl	%edx, _n.4\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%eax\n"
"	movl	_d.2(,%eax,4), %esi\n"
"	testl	%esi, %esi\n"
"	je	L367\n"
"	movl	%eax, %edx\n"
"L175:\n"
"	movl	-20(%ebp), %eax\n"
"	leal	(%eax,%eax,4), %ebx\n"
"	incl	%edi\n"
"	leal	-48(%edx,%ebx,2), %ecx\n"
"	movl	%ecx, -20(%ebp)\n"
"	movl	%ecx, _n.4\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%esi\n"
"	movl	%esi, %edx\n"
"	movl	_d.2(,%esi,4), %ebx\n"
"	testl	%ebx, %ebx\n"
"	jne	L175\n"
"L170:\n"
"	movl	-20(%ebp), %esi\n"
"	testl	%esi, %esi\n"
"	jle	L158\n"
"	xorl	%esi, %esi\n"
"	cmpl	-20(%ebp), %esi\n"
"	jge	L329\n"
"L213:\n"
"	movsbl	%cl,%edx\n"
"	movl	_dm.3(,%edx,4), %ebx\n"
"	testl	%ebx, %ebx\n"
"	je	L331\n"
"	.p2align 4,,15\n"
"L184:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%ebx\n"
"	movl	_dm.3(,%ebx,4), %edx\n"
"	testl	%edx, %edx\n"
"	jne	L184\n"
"L331:\n"
"	cmpb	$45, %cl\n"
"	je	L377\n"
"	movsbl	%cl,%edx\n"
"	leal	-48(%edx), %ebx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%eax\n"
"	movl	_d.2(,%eax,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L191\n"
"	movl	%eax, %edx\n"
"	.p2align 4,,15\n"
"L196:\n"
"	leal	(%ebx,%ebx,4), %ecx\n"
"	leal	-48(%edx,%ecx,2), %ebx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%eax\n"
"	movl	%eax, %edx\n"
"	movl	_d.2(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L196\n"
"L191:\n"
"	movl	%ebx, _p.7(,%esi,8)\n"
"	movsbl	%cl,%edx\n"
"	movl	_dm.3(,%edx,4), %ebx\n"
"	testl	%ebx, %ebx\n"
"	je	L336\n"
"	.p2align 4,,15\n"
"L200:\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%ebx\n"
"	movl	_dm.3(,%ebx,4), %edx\n"
"	testl	%edx, %edx\n"
"	jne	L200\n"
"L336:\n"
"	cmpb	$45, %cl\n"
"	je	L378\n"
"	movsbl	%cl,%edx\n"
"	leal	-48(%edx), %ebx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %edx\n"
"	movb	%dl, %cl\n"
"	movsbl	%dl,%eax\n"
"	movl	_d.2(,%eax,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L207\n"
"	movl	%eax, %edx\n"
"	.p2align 4,,15\n"
"L212:\n"
"	leal	(%ebx,%ebx,4), %ecx\n"
"	leal	-48(%edx,%ecx,2), %ebx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %edx\n"
"	movb	%dl, %cl\n"
"	movsbl	%dl,%eax\n"
"	movl	%eax, %edx\n"
"	movl	_d.2(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L212\n"
"L207:\n"
"	movl	%ebx, _p.7+4(,%esi,8)\n"
"	incl	%esi\n"
"	cmpl	-20(%ebp), %esi\n"
"	jl	L213\n"
"L329:\n"
"	movl	-20(%ebp), %eax\n"
"	movl	%eax, 4(%esp)\n"
"	movl	$_p.7, (%esp)\n"
"	call	_ysort\n"
"	movl	_p.7+4, %ebx\n"
"	movl	%ebx, _key\n"
"	movl	$1, %ecx\n"
"	movl	$1, %esi\n"
"	movl	_n.4, %eax\n"
"	movl	%eax, -20(%ebp)\n"
"	cmpl	%eax, %esi\n"
"	jge	L341\n"
"L219:\n"
"	movl	_p.7+4(,%esi,8), %edx\n"
"	cmpl	%ebx, %edx\n"
"	je	L216\n"
"	movl	%edx, %ebx\n"
"	movl	%edx, _key(,%ecx,4)\n"
"	incl	%ecx\n"
"L216:\n"
"	incl	%esi\n"
"	cmpl	%eax, %esi\n"
"	jl	L219\n"
"L341:\n"
"	movl	%ecx, _total\n"
"	movl	%eax, 4(%esp)\n"
"	movl	$_p.7, (%esp)\n"
"	call	_xsort\n"
"	xorl	%esi, %esi\n"
"	movl	_total, %ebx\n"
"	movl	%ebx, -28(%ebp)\n"
"	movl	%ebx, %eax\n"
"	cmpl	%ebx, %esi\n"
"	jge	L343\n"
"L224:\n"
"	xorl	%ecx, %ecx\n"
"	movl	%ecx, _count(,%esi,4)\n"
"	incl	%esi\n"
"	cmpl	%eax, %esi\n"
"	jl	L224\n"
"L343:\n"
"	xorl	%esi, %esi\n"
"	movl	_n.4, %edx\n"
"	movl	%edx, -20(%ebp)\n"
"	cmpl	%edx, %esi\n"
"	jge	L345\n"
"	movl	$0, %ebx\n"
"	jge	L375\n"
"L234:\n"
"	movl	_p.7+4(,%ebx,8), %edx\n"
"	movl	%edx, (%esp)\n"
"	call	_find_less\n"
"	movl	%eax, _s1.0(,%ebx,4)\n"
"	movl	_p.7+4(,%ebx,8), %ecx\n"
"	movl	%ecx, (%esp)\n"
"	call	_find_greater\n"
"	movl	%eax, _s2.1(,%ebx,4)\n"
"	incl	%ebx\n"
"	movl	_n.4, %eax\n"
"	movl	%eax, -20(%ebp)\n"
"	cmpl	%eax, %ebx\n"
"	jge	L369\n"
"	movl	_p.7(,%esi,8), %ecx\n"
"	movl	%ecx, -24(%ebp)\n"
"	cmpl	%ecx, _p.7(,%ebx,8)\n"
"	je	L234\n"
"	movl	_total, %ebx\n"
"	movl	%ebx, -28(%ebp)\n"
"L230:\n"
"	movl	%esi, %ebx\n"
"L249:\n"
"	movl	_p.7+4(,%ebx,8), %esi\n"
"	xorl	%ecx, %ecx\n"
"	movl	-28(%ebp), %edx\n"
"	decl	%edx\n"
"	cmpl	%edx, %ecx\n"
"	jg	L237\n"
"	.p2align 4,,15\n"
"L248:\n"
"	leal	(%edx,%ecx), %eax\n"
"	sarl	%eax\n"
"	incl	_count(,%eax,4)\n"
"	cmpl	_key(,%eax,4), %esi\n"
"	jge	L243\n"
"	leal	-1(%eax), %edx\n"
"L239:\n"
"	cmpl	%edx, %ecx\n"
"	jle	L248\n"
"L237:\n"
"	incl	%ebx\n"
"	movl	-24(%ebp), %esi\n"
"	cmpl	%esi, _p.7(,%ebx,8)\n"
"	je	L249\n"
"	movl	%ebx, %esi\n"
"	cmpl	-20(%ebp), %ebx\n"
"	jl	L234\n"
"L345:\n"
"	xorl	%esi, %esi\n"
"	cmpl	-28(%ebp), %esi\n"
"	jge	L351\n"
"L255:\n"
"	xorl	%ecx, %ecx\n"
"	movl	%ecx, _count(,%esi,4)\n"
"	incl	%esi\n"
"	cmpl	-28(%ebp), %esi\n"
"	jl	L255\n"
"L351:\n"
"	movl	-20(%ebp), %esi\n"
"	decl	%esi\n"
"	js	L353\n"
"	movl	%esi, %ebx\n"
"	.p2align 4,,15\n"
"L265:\n"
"	movl	_p.7+4(,%ebx,8), %ecx\n"
"	movl	%ecx, (%esp)\n"
"	call	_find_less\n"
"	addl	%eax, _s2.1(,%ebx,4)\n"
"	movl	_p.7+4(,%ebx,8), %edx\n"
"	movl	%edx, (%esp)\n"
"	call	_find_greater\n"
"	addl	%eax, _s1.0(,%ebx,4)\n"
"	decl	%ebx\n"
"	js	L261\n"
"	movl	_p.7(,%esi,8), %edx\n"
"	cmpl	%edx, _p.7(,%ebx,8)\n"
"	je	L265\n"
"L261:\n"
"	movl	%esi, %ebx\n"
"	testl	%esi, %esi\n"
"	js	L373\n"
"	movl	_p.7(,%esi,8), %eax\n"
"	movl	%eax, -16(%ebp)\n"
"	movl	_total, %esi\n"
"	movl	%esi, -28(%ebp)\n"
"	.p2align 4,,15\n"
"L281:\n"
"	movl	_p.7+4(,%ebx,8), %esi\n"
"	xorl	%ecx, %ecx\n"
"	movl	-28(%ebp), %edx\n"
"	decl	%edx\n"
"	cmpl	%edx, %ecx\n"
"	jg	L268\n"
"	.p2align 4,,15\n"
"L280:\n"
"	leal	(%edx,%ecx), %eax\n"
"	sarl	%eax\n"
"	incl	_count(,%eax,4)\n"
"	cmpl	_key(,%eax,4), %esi\n"
"	jge	L275\n"
"	leal	-1(%eax), %edx\n"
"L271:\n"
"	cmpl	%edx, %ecx\n"
"	jle	L280\n"
"L268:\n"
"	decl	%ebx\n"
"	js	L267\n"
"	movl	-16(%ebp), %edx\n"
"	cmpl	%edx, _p.7(,%ebx,8)\n"
"	je	L281\n"
"L267:\n"
"	movl	%ebx, %esi\n"
"	testl	%ebx, %ebx\n"
"	jns	L265\n"
"L373:\n"
"	movl	_n.4, %ebx\n"
"	movl	%ebx, -20(%ebp)\n"
"L353:\n"
"	xorl	%ecx, %ecx\n"
"	xorl	%esi, %esi\n"
"	cmpl	-20(%ebp), %esi\n"
"	jge	L358\n"
"L295:\n"
"	movl	_s1.0(,%esi,4), %ebx\n"
"	movl	%ebx, _s1.0(,%ecx,4)\n"
"	movl	_s2.1(,%esi,4), %edx\n"
"	movl	%edx, _s2.1(,%ecx,4)\n"
"	leal	1(%esi), %ebx\n"
"	cmpl	-20(%ebp), %ebx\n"
"	jge	L288\n"
"	movl	_p.7(,%esi,8), %edx\n"
"	cmpl	%edx, _p.7(,%ebx,8)\n"
"	je	L294\n"
"L288:\n"
"	movl	%ebx, %esi\n"
"	incl	%ecx\n"
"	cmpl	-20(%ebp), %ebx\n"
"	jl	L295\n"
"L358:\n"
"	movl	_s1.0, %edx\n"
"	movl	%edx, _s.5\n"
"	xorl	%esi, %esi\n"
"	cmpl	%ecx, %esi\n"
"	jge	L361\n"
"L301:\n"
"	movl	_s1.0(,%esi,4), %eax\n"
"	cmpl	%edx, %eax\n"
"	jle	L298\n"
"	movl	%eax, %edx\n"
"L298:\n"
"	incl	%esi\n"
"	cmpl	%ecx, %esi\n"
"	jl	L301\n"
"	movl	%edx, _s.5\n"
"L361:\n"
"	xorl	%ebx, %ebx\n"
"	xorl	%esi, %esi\n"
"	cmpl	%ecx, %ebx\n"
"	jge	L363\n"
"	movl	_s.5, %edx\n"
"L307:\n"
"	cmpl	%edx, _s1.0(,%esi,4)\n"
"	je	L379\n"
"L304:\n"
"	incl	%esi\n"
"	cmpl	%ecx, %esi\n"
"	jl	L307\n"
"L363:\n"
"	movl	%ebx, 4(%esp)\n"
"	movl	$_key, (%esp)\n"
"	call	_isort\n"
"	movl	_s.5, %ecx\n"
"	movl	%ecx, 4(%esp)\n"
"	movl	$LC0, (%esp)\n"
"	call	printf\n"
"	xorl	%esi, %esi\n"
"	cmpl	%ebx, %esi\n"
"	jge	L365\n"
"L314:\n"
"	testl	%esi, %esi\n"
"	je	L370\n"
"	movl	_key(,%esi,4), %eax\n"
"	cmpl	%eax, _key-4(,%esi,4)\n"
"	je	L310\n"
"L313:\n"
"	movl	%eax, 4(%esp)\n"
"	movl	$LC1, (%esp)\n"
"	call	printf\n"
"L310:\n"
"	incl	%esi\n"
"	cmpl	%ebx, %esi\n"
"	jl	L314\n"
"L365:\n"
"	movl	$LC2, (%esp)\n"
"	call	puts\n"
"	jmp	L157\n"
"L370:\n"
"	movl	_key, %eax\n"
"	jmp	L313\n"
"L379:\n"
"	movl	_s2.1(,%esi,4), %eax\n"
"	movl	%eax, _key(,%ebx,4)\n"
"	incl	%ebx\n"
"	jmp	L304\n"
"L294:\n"
"	movl	_s1.0(,%ebx,4), %eax\n"
"	cmpl	_s1.0(,%ecx,4), %eax\n"
"	jge	L292\n"
"	movl	%eax, _s1.0(,%ecx,4)\n"
"L292:\n"
"	movl	_s2.1(,%ebx,4), %eax\n"
"	cmpl	_s2.1(,%ecx,4), %eax\n"
"	jle	L289\n"
"	movl	%eax, _s2.1(,%ecx,4)\n"
"L289:\n"
"	incl	%ebx\n"
"	cmpl	-20(%ebp), %ebx\n"
"	jge	L288\n"
"	cmpl	%edx, _p.7(,%ebx,8)\n"
"	je	L294\n"
"	jmp	L288\n"
"	.p2align 4,,7\n"
"L275:\n"
"	jle	L268\n"
"	leal	1(%eax), %ecx\n"
"	jmp	L271\n"
"	.p2align 4,,7\n"
"L243:\n"
"	jle	L237\n"
"	leal	1(%eax), %ecx\n"
"	jmp	L239\n"
"L369:\n"
"	movl	_total, %eax\n"
"	movl	%eax, -28(%ebp)\n"
"L375:\n"
"	movl	_p.7(,%esi,8), %edx\n"
"	movl	%edx, -24(%ebp)\n"
"	jmp	L230\n"
"L378:\n"
"	incl	%edi\n"
"	movsbl	(%edi),%ecx\n"
"	leal	-48(%ecx), %ebx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%eax\n"
"	movl	_d.2(,%eax,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L338\n"
"	movl	%eax, %edx\n"
"L206:\n"
"	leal	(%ebx,%ebx,4), %ecx\n"
"	leal	-48(%edx,%ecx,2), %ebx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%eax\n"
"	movl	%eax, %edx\n"
"	movl	_d.2(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L206\n"
"L338:\n"
"	negl	%ebx\n"
"	jmp	L207\n"
"L377:\n"
"	incl	%edi\n"
"	movsbl	(%edi),%ecx\n"
"	leal	-48(%ecx), %ebx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%eax\n"
"	movl	_d.2(,%eax,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L333\n"
"	movl	%eax, %edx\n"
"L190:\n"
"	leal	(%ebx,%ebx,4), %ecx\n"
"	leal	-48(%edx,%ecx,2), %ebx\n"
"	incl	%edi\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%eax\n"
"	movl	%eax, %edx\n"
"	movl	_d.2(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L190\n"
"L333:\n"
"	negl	%ebx\n"
"	jmp	L191\n"
"L367:\n"
"	movl	_n.4, %edx\n"
"	movl	%edx, -20(%ebp)\n"
"	jmp	L170\n"
"L376:\n"
"	incl	%edi\n"
"	movsbl	(%edi),%ecx\n"
"	incl	%edi\n"
"	subl	$48, %ecx\n"
"	movl	%ecx, -20(%ebp)\n"
"	movl	%ecx, _n.4\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%eax\n"
"	movl	_d.2(,%eax,4), %ebx\n"
"	testl	%ebx, %ebx\n"
"	je	L366\n"
"	movl	%eax, %edx\n"
"L169:\n"
"	movl	-20(%ebp), %eax\n"
"	leal	(%eax,%eax,4), %esi\n"
"	incl	%edi\n"
"	leal	-48(%edx,%esi,2), %ebx\n"
"	movl	%ebx, -20(%ebp)\n"
"	movl	%ebx, _n.4\n"
"	movzbl	(%edi), %ecx\n"
"	movsbl	%cl,%esi\n"
"	movl	%esi, %edx\n"
"	movl	_d.2(,%esi,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L169\n"
"L326:\n"
"	negl	-20(%ebp)\n"
"	movl	-20(%ebp), %ebx\n"
"	movl	%ebx, _n.4\n"
"	jmp	L170\n"
"L366:\n"
"	movl	_n.4, %edx\n"
"	movl	%edx, -20(%ebp)\n"
"	jmp	L326\n"
"L158:\n"
"	movl	$0, (%esp)\n"
"	call	exit\n"
"	.p2align 4,,15\n"
"_find_less:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	movl	8(%ebp), %esi\n"
"	xorl	%ebx, %ebx\n"
"	xorl	%ecx, %ecx\n"
"	movl	_total, %edx\n"
"	decl	%edx\n"
"	cmpl	%edx, %ebx\n"
"	jg	L114\n"
"	.p2align 4,,15\n"
"L123:\n"
"	leal	(%edx,%ecx), %eax\n"
"	sarl	%eax\n"
"	cmpl	_key(,%eax,4), %esi\n"
"	jge	L117\n"
"	leal	-1(%eax), %edx\n"
"L113:\n"
"	cmpl	%edx, %ecx\n"
"	jle	L123\n"
"L114:\n"
"	movl	%ebx, %eax\n"
"	popl	%ebx\n"
"	popl	%esi\n"
"	popl	%ebp\n"
"	ret\n"
"	.p2align 4,,7\n"
"L117:\n"
"	jle	L119\n"
"	movl	_count(,%eax,4), %ecx\n"
"	addl	%ecx, %ebx\n"
"	leal	1(%eax), %ecx\n"
"	cmpl	%edx, %ecx\n"
"	jg	L114\n"
"	leal	(%edx,%ecx), %eax\n"
"	sarl	%eax\n"
"	subl	_count(,%eax,4), %ebx\n"
"	jmp	L113\n"
"L119:\n"
"	leal	-1(%eax), %edx\n"
"	cmpl	%edx, %ecx\n"
"	jg	L114\n"
"	leal	(%edx,%ecx), %esi\n"
"	sarl	%esi\n"
"	movl	_count(,%esi,4), %edx\n"
"	addl	%edx, %ebx\n"
"	jmp	L114\n"
"	.p2align 4,,15\n"
"_find_greater:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	movl	8(%ebp), %esi\n"
"	xorl	%ebx, %ebx\n"
"	xorl	%ecx, %ecx\n"
"	movl	_total, %edx\n"
"	decl	%edx\n"
"	cmpl	%edx, %ebx\n"
"	jg	L126\n"
"	.p2align 4,,15\n"
"L135:\n"
"	leal	(%edx,%ecx), %eax\n"
"	sarl	%eax\n"
"	cmpl	_key(,%eax,4), %esi\n"
"	jge	L129\n"
"	movl	_count(,%eax,4), %edx\n"
"	addl	%edx, %ebx\n"
"	leal	-1(%eax), %edx\n"
"	cmpl	%edx, %ecx\n"
"	jg	L126\n"
"	leal	(%edx,%ecx), %eax\n"
"	sarl	%eax\n"
"	subl	_count(,%eax,4), %ebx\n"
"L125:\n"
"	cmpl	%edx, %ecx\n"
"	jle	L135\n"
"L126:\n"
"	movl	%ebx, %eax\n"
"	popl	%ebx\n"
"	popl	%esi\n"
"	popl	%ebp\n"
"	ret\n"
"	.p2align 4,,7\n"
"L129:\n"
"	jle	L132\n"
"	leal	1(%eax), %ecx\n"
"	jmp	L125\n"
"L132:\n"
"	leal	1(%eax), %ecx\n"
"	cmpl	%edx, %ecx\n"
"	jg	L126\n"
"	leal	(%edx,%ecx), %esi\n"
"	sarl	%esi\n"
"	movl	_count(,%esi,4), %edx\n"
"	addl	%edx, %ebx\n"
"	jmp	L126\n"
"	.p2align 4,,7\n"
".lcomm _d.2,1024\n"
".lcomm _dm.3,1024\n"
".lcomm _n.4,16\n"
".lcomm _s.5,16\n"
".lcomm _s1.0,800016\n"
".lcomm _s2.1,800016\n"
".lcomm _buf.6,27262976\n"
".lcomm _p.7,1600016\n"
".lcomm	_key, 800016\n"
".lcomm	_count, 800016\n"
".lcomm	_total, 16\n"
"LC0:\n"
"	.ascii \"Stan: %d; Ollie:\\0\"\n"
"LC1:\n"
"	.ascii \" %d\\0\"\n"
"LC2:\n"
"	.ascii \";\\0\"\n"
);
}
