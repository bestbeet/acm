__asm__(
"	.text\n"
"	.align 2\n"
"	.p2align 4,,15\n"
".globl main\n"
"main:\n"
"	pushl	%ebp\n"
"	xorl	%edx, %edx\n"
"	movl	%esp, %ebp\n"
"	pushl	%edi\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	subl	$76, %esp\n"
"L2:\n"
"	leal	1(%edx), %eax\n"
"	xorl	%edi, %edi\n"
"	xorl	%esi, %esi\n"
"	xorl	%ebx, %ebx\n"
"	xorl	%ecx, %ecx\n"
"	movl	%edi, _cmap(,%edx,4)\n"
"	xorl	%edi, %edi\n"
"	movl	%esi, _isdig(,%edx,4)\n"
"	xorl	%esi, %esi\n"
"	movl	%ebx, _cmap(,%eax,4)\n"
"	xorl	%ebx, %ebx\n"
"	movl	%ecx, _isdig(,%eax,4)\n"
"	leal	2(%edx), %eax\n"
"	xorl	%ecx, %ecx\n"
"	movl	%edi, _cmap(,%eax,4)\n"
"	xorl	%edi, %edi\n"
"	movl	%esi, _isdig(,%eax,4)\n"
"	leal	3(%edx), %eax\n"
"	xorl	%esi, %esi\n"
"	movl	%ebx, _cmap(,%eax,4)\n"
"	xorl	%ebx, %ebx\n"
"	movl	%ecx, _isdig(,%eax,4)\n"
"	leal	4(%edx), %eax\n"
"	xorl	%ecx, %ecx\n"
"	movl	%edi, _cmap(,%eax,4)\n"
"	xorl	%edi, %edi\n"
"	movl	%esi, _isdig(,%eax,4)\n"
"	leal	5(%edx), %eax\n"
"	xorl	%esi, %esi\n"
"	movl	%ebx, _cmap(,%eax,4)\n"
"	leal	6(%edx), %ebx\n"
"	movl	%edi, _cmap(,%ebx,4)\n"
"	leal	7(%edx), %edi\n"
"	addl	$8, %edx\n"
"	movl	%ecx, _isdig(,%eax,4)\n"
"	xorl	%ecx, %ecx\n"
"	xorl	%eax, %eax\n"
"	cmpl	$256, %edx\n"
"	movl	%esi, _isdig(,%ebx,4)\n"
"	movl	%ecx, _cmap(,%edi,4)\n"
"	movl	%eax, _isdig(,%edi,4)\n"
"	jne	L2\n"
"	movl	$1, %edi\n"
"	movl	$1, %esi\n"
"	movl	$1, %ebx\n"
"	movl	$1, %ecx\n"
"	movl	$1, %edx\n"
"	movl	$1, %eax\n"
"	movl	%edi, _isdig+192\n"
"	movl	$1, %edi\n"
"	movl	%esi, _isdig+196\n"
"	movl	$1, %esi\n"
"	movl	%ebx, _isdig+200\n"
"	movl	$1, %ebx\n"
"	movl	%ecx, _isdig+204\n"
"	movl	$1, %ecx\n"
"	movl	%edx, _isdig+208\n"
"	movl	$1, %edx\n"
"	movl	%eax, _isdig+212\n"
"	movl	$2, %eax\n"
"	movl	%edi, _isdig+216\n"
"	movl	$3, %edi\n"
"	movl	%esi, _isdig+220\n"
"	movl	$4, %esi\n"
"	movl	%ebx, _isdig+224\n"
"	movl	$5, %ebx\n"
"	movl	%ecx, _isdig+228\n"
"	movl	$6, %ecx\n"
"	movl	%edx, _cmap+260\n"
"	movl	$7, %edx\n"
"	movl	%eax, _cmap+200\n"
"	movl	$8, %eax\n"
"	movl	%edi, _cmap+204\n"
"	movl	$9, %edi\n"
"	movl	%esi, _cmap+208\n"
"	movl	$10, %esi\n"
"	movl	%ebx, _cmap+212\n"
"	movl	$11, %ebx\n"
"	movl	%ecx, _cmap+216\n"
"	movl	$12, %ecx\n"
"	movl	%edx, _cmap+220\n"
"	movl	$13, %edx\n"
"	movl	%eax, _cmap+224\n"
"	movl	$14, %eax\n"
"	movl	%edi, _cmap+228\n"
"	movl	$15, %edi\n"
"	movl	%esi, _cmap+192\n"
"	movl	$16, %esi\n"
"	movl	%ebx, _cmap+296\n"
"	movl	$17, %ebx\n"
"	movl	%ecx, _cmap+324\n"
"	movl	$16777215, %ecx\n"
"	movl	%edx, _cmap+300\n"
"	movl	$_inbuf, %edx\n"
"	movl	%ebx, _cmap+332\n"
"	movl	%eax, _cmap+268\n"
"	movl	%edi, _cmap+272\n"
"	movl	%esi, _cmap+288\n"
"	movl	%ecx, 8(%esp)\n"
"	movl	%edx, 4(%esp)\n"
"	movl	$0, (%esp)\n"
"	call	read\n"
"	movl	_inp, %ebx\n"
"	movb	$0, _inbuf(%eax)\n"
"	movl	_outp, %eax\n"
"	movl	%eax, -48(%ebp)\n"
"L86:\n"
"	movsbl	(%ebx),%eax\n"
"	movl	_isdig(,%eax,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L5\n"
"L90:\n"
"	incl	%ebx\n"
"	subl	$48, %eax\n"
"	movsbl	(%ebx),%ecx\n"
"	movl	_isdig(,%ecx,4), %esi\n"
"	testl	%esi, %esi\n"
"	je	L7\n"
"	movl	%ebx, %edx\n"
"L9:\n"
"	leal	(%eax,%eax,4), %eax\n"
"	leal	-48(%ecx,%eax,2), %eax\n"
"	movsbl	1(%edx),%ecx\n"
"	incl	%edx\n"
"	movl	_isdig(,%ecx,4), %ebx\n"
"	testl	%ebx, %ebx\n"
"	jne	L9\n"
"	movl	%edx, %ebx\n"
"L7:\n"
"	testl	%eax, %eax\n"
"	je	L11\n"
"	movl	%eax, -52(%ebp)\n"
"	xorl	%edx, %edx\n"
"	xorl	%edi, %edi\n"
"	movl	-52(%ebp), %esi\n"
"	xorl	%ecx, %ecx\n"
"	movl	%edx, _count\n"
"	movb	$0, _alpha\n"
"	movl	%edi, _kid\n"
"	testl	%esi, %esi\n"
"	movl	%ecx, _sib\n"
"	jle	L39\n"
"L89:\n"
"	movsbl	(%ebx),%eax\n"
"	movl	%ebx, %edx\n"
"	movl	_isdig(,%eax,4), %edi\n"
"	testl	%edi, %edi\n"
"	jne	L16\n"
"	.p2align 4,,15\n"
"L14:\n"
"	movsbl	1(%edx),%eax\n"
"	incl	%edx\n"
"	movl	_isdig(,%eax,4), %esi\n"
"	testl	%esi, %esi\n"
"	je	L14\n"
"	movl	%edx, %ebx\n"
"L16:\n"
"	incl	%ebx\n"
"	movsbl	(%ebx),%ecx\n"
"	leal	-48(%eax), %esi\n"
"	movl	_isdig(,%ecx,4), %eax\n"
"	testl	%eax, %eax\n"
"	je	L17\n"
"	movl	%ebx, %edx\n"
"	.p2align 4,,15\n"
"L19:\n"
"	leal	(%esi,%esi,4), %edi\n"
"	leal	-48(%ecx,%edi,2), %esi\n"
"	movsbl	1(%edx),%ecx\n"
"	incl	%edx\n"
"	movl	_isdig(,%ecx,4), %ebx\n"
"	testl	%ebx, %ebx\n"
"	jne	L19\n"
"	movl	%edx, %ebx\n"
"L17:\n"
"	xorl	%edi, %edi\n"
"	testl	%esi, %esi\n"
"	jle	L21\n"
"	.p2align 4,,15\n"
"L23:\n"
"	movsbl	(%ebx),%edx\n"
"	movl	_cmap(,%edx,4), %ecx\n"
"	movl	%ebx, %edx\n"
"	testl	%ecx, %ecx\n"
"	jne	L26\n"
"	.p2align 4,,15\n"
"L24:\n"
"	movsbl	1(%edx),%eax\n"
"	incl	%edx\n"
"	movl	_cmap(,%eax,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	je	L24\n"
"	movl	%edx, %ebx\n"
"L26:\n"
"	movsbl	1(%ebx),%eax\n"
"	sall	$4, %ecx\n"
"	addl	$2, %ebx\n"
"	movl	_cmap(,%eax,4), %edx\n"
"	addl	%edx, %ecx\n"
"	movl	%ecx, tmpbuf1(,%edi,4)\n"
"	incl	%edi\n"
"	cmpl	%esi, %edi\n"
"	jne	L23\n"
"L21:\n"
"	movl	%esi, %eax\n"
"	decl	%eax\n"
"	jns	L88\n"
"L28:\n"
"	decl	-52(%ebp)\n"
"	movl	-52(%ebp), %esi\n"
"	testl	%esi, %esi\n"
"	jg	L89\n"
"L39:\n"
"	movl	_count, %ecx\n"
"	cmpl	$0, %ecx\n"
"	jne	L42\n"
"	movl	-48(%ebp), %eax\n"
"	movb	$48, (%eax)\n"
"	incl	%eax\n"
"	movl	%eax, -48(%ebp)\n"
"L44:\n"
"	movl	-48(%ebp), %ecx\n"
"	movb	$10, (%ecx)\n"
"	incl	%ecx\n"
"	movl	%ecx, -48(%ebp)\n"
"	movsbl	(%ebx),%eax\n"
"	movl	_isdig(,%eax,4), %edx\n"
"	testl	%edx, %edx\n"
"	jne	L90\n"
"L5:\n"
"	incl	%ebx\n"
"	jmp	L86\n"
"L88:\n"
"	movl	_count, %edi\n"
"	notl	%eax\n"
"	movl	$0, -60(%ebp)\n"
"	movl	$0, -56(%ebp)\n"
"	movl	%eax, -64(%ebp)\n"
"L30:\n"
"	movl	-56(%ebp), %edx\n"
"	movl	-60(%ebp), %eax\n"
"	leal	(%esi,%edx), %ecx\n"
"	movzbl	tmpbuf1-4(,%ecx,4), %edx\n"
"	movl	_kid(,%eax,4), %ecx\n"
"	testl	%ecx, %ecx\n"
"	je	L31\n"
"	cmpb	_alpha(%ecx), %dl\n"
"	movl	%ecx, %eax\n"
"	jne	L35\n"
"	jmp	L33\n"
"	.p2align 4,,7\n"
"L36:\n"
"	cmpb	_alpha(%eax), %dl\n"
"	je	L91\n"
"L35:\n"
"	movl	_sib(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L36\n"
"L31:\n"
"	incl	%edi\n"
"	xorl	%eax, %eax\n"
"	movl	%ecx, _sib(,%edi,4)\n"
"	movl	-60(%ebp), %ecx\n"
"	movb	%dl, _alpha(%edi)\n"
"	movl	%edi, _kid(,%ecx,4)\n"
"	movl	%edi, %ecx\n"
"	movl	%eax, _kid(,%edi,4)\n"
"L33:\n"
"	decl	-56(%ebp)\n"
"	movl	-64(%ebp), %edx\n"
"	movl	%ecx, -60(%ebp)\n"
"	cmpl	%edx, -56(%ebp)\n"
"	jne	L30\n"
"	movl	%edi, _count\n"
"	jmp	L28\n"
"L91:\n"
"	movl	%eax, %ecx\n"
"	jmp	L33\n"
"L42:\n"
"	movb	$0, -13(%ebp)\n"
"	.p2align 4,,2\n"
"	jle	L92\n"
"	leal	-13(%ebp), %esi\n"
"	movl	$1717986919, %edi\n"
"L48:\n"
"	movl	%ecx, %eax\n"
"	decl	%esi\n"
"	imull	%edi\n"
"	movl	%ecx, %eax\n"
"	sarl	$31, %eax\n"
"	sarl	$2, %edx\n"
"	subl	%eax, %edx\n"
"	leal	(%edx,%edx,4), %eax\n"
"	addl	%eax, %eax\n"
"	subl	%eax, %ecx\n"
"	movb	%cl, %al\n"
"	movl	%edx, %ecx\n"
"	addb	$48, %al\n"
"	testl	%edx, %edx\n"
"	movb	%al, (%esi)\n"
"	jg	L48\n"
"	movl	%edx, _count\n"
"L47:\n"
"	movzbl	(%esi), %ecx\n"
"	testb	%cl, %cl\n"
"	je	L44\n"
"	movl	-48(%ebp), %edx\n"
"	movl	%esi, %eax\n"
"L50:\n"
"	movb	%cl, (%edx)\n"
"	incl	%edx\n"
"	movzbl	1(%eax), %ecx\n"
"	incl	%eax\n"
"	testb	%cl, %cl\n"
"	jne	L50\n"
"	movl	%edx, -48(%ebp)\n"
"	jmp	L44\n"
"L11:\n"
"	movl	-48(%ebp), %esi\n"
"	movl	%ebx, _inp\n"
"	movl	$_outbuf, %ebx\n"
"	movl	%ebx, 4(%esp)\n"
"	movl	$1, (%esp)\n"
"	movl	%esi, _outp\n"
"	subl	$_outbuf, %esi\n"
"	movl	%esi, 8(%esp)\n"
"	call	write\n"
"	movl	$0, (%esp)\n"
"	call	exit\n"
"L92:\n"
"	leal	-13(%ebp), %esi\n"
"	jmp	L47\n"
".globl _sib\n"
"	.bss\n"
"	.align 32\n"
"_sib:\n"
"	.space 400400\n"
".globl _kid\n"
"	.align 32\n"
"_kid:\n"
"	.space 400400\n"
".globl _count\n"
"	.align 4\n"
"_count:\n"
"	.space 4\n"
".globl _alpha\n"
"	.align 32\n"
"_alpha:\n"
"	.space 100100\n"
".lcomm _cmap,1024\n"
".lcomm _isdig,1024\n"
".lcomm _inbuf,16777216\n"
"	.data\n"
"	.align 4\n"
"_inp:\n"
"	.long	_inbuf\n"
"	.align 4\n"
"_outp:\n"
"	.long	_outbuf\n"
".lcomm _outbuf,1048576\n"
".lcomm tmpbuf1,400\n"
);
