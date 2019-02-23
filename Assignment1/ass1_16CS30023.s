
# data segment of program
	.file	"asgn1.c"										# name of the source file 	
	.section	.rodata										# setting this section to be read only 
	.align 8												# align next variable or instruction to the multiple of the given number 8
.LC0:														# label for the first printf string							
	.string	"Number of iterations to estimate PI: "
.LC1:														# label for the scanf string 
	.string	"%ld"
	.align 8
.LC2:														# label for second printf string 
	.string	"\nPI: %10.8lf (using Infinite Series)"
	.align 8
.LC3:														# label for third printf
	.string	"\nPI: %10.8lf (using Monte Carlo method)\n\n"

# text segment of the program 
	.text
	.globl	main											# setting main as a global name
	.type	main, @function									# setting main as a function
main:
.LFB2:
	.cfi_startproc											# Call frame information - mostly used for direct exception handeling
	pushq	%rbp											# pushing base pointer 
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# setting a new base pointer for the stack
	.cfi_def_cfa_register 6								
	subq	$48, %rsp										# create space for local variables ( which will be used only in this function) 
	movq	%fs:40, %rax									# storing the value of %fs:40 in %rax
	movq	%rax, -8(%rbp)									# updating the value of%rax to be 8 less then rbp
	xorl	%eax, %eax										# making %eax  = 0 (XOR with own is always 0 )
	
	# printing "Number of iterations to estimate PI: " :  printf("Number of iterations to estimate PI: ");
	movl	$.LC0, %edi										# loading string (string in .LC0) in %edi as the first argument printf
	movl	$0, %eax										# setting %eax to be 0, thu setting vector register to 0 (no floating point data is being printed)
	call	printf											# calling printf

	# scaning num   : scanf("%ld",&num);
	leaq	-32(%rbp), %rax									# chaning value of rax so as to create space for num
	movq	%rax, %rsi										# setting second argument as &num 
	movl	$.LC1, %edi										# loading .LC1 string ("%ld") in first argument								
	movl	$0, %eax										# eax = 0 setting vector register to 0 as there are no floating points to be displayed
	call	__isoc99_scanf									# calling scanf
	
	# calling monteCarlo(num) and storing in piD1
	movq	-32(%rbp), %rax									# getting the value of num from stack
	movq	%rax, %rdi										# seting the argument to passed to the function ((rdi = rax (rdi is function argument)))
	call	monteCarlo										# calling monteCarlo(num) function 
	movq	%xmm0, %rax										# storing the return value of monte carlo function in rax
	movq	%rax, -24(%rbp)									# storing the return value in stack
	
	# calling iSeriese(num) and storing in piD2
	movq	-32(%rbp), %rax									# getting the num value from the stack (rax = rbi)
	movq	%rax, %rdi										# setting the argument of the function (rdi)
	call	iSeries											# calling iSeries(num) function
	movq	%xmm0, %rax										# storing the return value in the rax 
	movq	%rax, -16(%rbp)									# storing the return value in the stack (rbp)
	
	# printing "\nPI: %10.8lf (using Infinite Series)",piD2  : printf("\nPI: %10.8lf (using Infinite Series)",piD2);
	movq	-16(%rbp), %rax									# retriving the value of pid2 from the stack 
	movq	%rax, -40(%rbp)									# storing the value at position -40 in stack (temp potision)
	movsd	-40(%rbp), %xmm0								# loading value for printf argument for printing 
	movl	$.LC2, %edi										# loading string to printed 
	movl	$1, %eax										# setting eax = 1 because there is floating point data to be printed 
	call	printf											# calling printf 
	
	# printing "\tPI: %10.8lf (using Monte Carlo method)\n\n",piD1  : printf("\tPI: %10.8lf (using Monte Carlo method)\n\n",piD1);
	movq	-24(%rbp), %rax									# retriving the value of pid1 from the stack 
	movq	%rax, -40(%rbp)									# storing the value at position -40 in stack (temp potision)
	movsd	-40(%rbp), %xmm0								# loading value for printf argument for printing 
	movl	$.LC3, %edi										# loading string to printed
	movl	$1, %eax										# setting eax = 1 because there is floating point data to be printed 
	call	printf											# calling printf 
	
	# returning from the main
	movl	$0, %eax										# storing 0 in eax
	movq	-8(%rbp), %rdx									# updating the value of rdx 
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret														# return 
	.cfi_endproc
.LFE2:
	.size	main, .-main
# end of main 


# starting of iSeries(long int n) 
	.globl	iSeries											# setting iSeries as global name
	.type	iSeries, @function								# setting iSeries as a function
iSeries:
.LFB3:
	.cfi_startproc											# Call Frame Information
	pushq	%rbp											# storing the base pointer of the calle function 
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# setting a new stack pointer 
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)									# storing the function argument (pass for this function in rbp)

	pxor	%xmm0, %xmm0									# setting xmm0 to be 0 (xor with ones self leads to zero)
	movsd	%xmm0, -8(%rbp)									# storing it in rbp -8 position

	movl	$1, -12(%rbp)									# setting 1 in rbp -12 (setting the value of iterator (i) = 1 )
	jmp	.L5													# jump to loop

.L8:

	# conditional check for i%2  == 0 
	movl	-12(%rbp), %eax									# getting the value of i (loading from rbp -12)
	andl	$1, %eax										# checking the last bit (if 0 then even , if 1 then odd)(bitwise and)
	testl	%eax, %eax										# setting a zero flog is eax & eax = 0  ie eax = 0 
	jne	.L6													# jumping to .LC6 if flag != 0

	# setting value of pi -= (4.0/(2*i-1));					if flag  == 0 
	movl	-12(%rbp), %eax									# loading i in eax 
	addl	%eax, %eax										# eax += eax ie simply multiplying with 2 
	subl	$1, %eax										# subtracting 1 from eax 
	pxor	%xmm0, %xmm0									# setting xmm0 = 0 
	cvtsi2sd	%eax, %xmm0									# converting to float from int and storing in xmm0
	movsd	.LC5(%rip), %xmm1								# setting xmm1 = 4.0
	divsd	%xmm0, %xmm1									# xmm1 /= xmm0 dividing 4.0 by 2*i - 1
	movapd	%xmm1, %xmm0									# setting xmm0 to xmm1 
	movsd	-8(%rbp), %xmm1									# getting previously stored value from stack 
	subsd	%xmm0, %xmm1									# subtracting the new value from the previous value xmm1 -= xmm0
	movapd	%xmm1, %xmm0									# moveing the value of xmm1 to xmm0
	movsd	%xmm0, -8(%rbp)									# storing the new calculated value in stack
	jmp	.L7													# jumping to .L7

.L6:

	# setting value of pi -= (4.0/(2*i-1));					if flag  == 1 
	movl	-12(%rbp), %eax									# setting eax  = i 
	addl	%eax, %eax										# eax += eax (simply multiplying by 2)
	subl	$1, %eax										# getting 2*i - 1
	pxor	%xmm0, %xmm0									# setting xmm0 to 0
	cvtsi2sd	%eax, %xmm0									# Converting integer value of eax to float and storing in xmm0
	movsd	.LC5(%rip), %xmm1								# xmm1 = 4.0 
	divsd	%xmm0, %xmm1									# xmm1 /= xmm0 dividing 4.0 by 2*i - 1
	movapd	%xmm1, %xmm0									# setting xmm0 to xmm1 
	movsd	-8(%rbp), %xmm1									# getting previously stored value from stack 
	addsd	%xmm1, %xmm0									# adding the new value from the previous value xmm1 -= xmm0
	movsd	%xmm0, -8(%rbp)									# (rbp - 8) = xmm0 (Store the current value of pi to stack)

.L7:
	addl	$1, -12(%rbp)									# increasing the value of i by 1

.L5:
	movl	-12(%rbp), %eax									# storing the value of i in eax 
	cltq													# sign extension from 32 to 64 bit

	cmpq	-24(%rbp), %rax									# comparing rax with (rbp -24 ) which stores n (checking the exit condition of the loop)
	jle	.L8													# goto .L8 is (i <= n)

	# returning the calculated value 
	movsd	-8(%rbp), %xmm0									# storing the returning value in rbp -8 
	popq	%rbp											# pop base pointer 
	.cfi_def_cfa 7, 8								
	ret														# returning 
	.cfi_endproc
.LFE3:
	.size	iSeries, .-iSeries
# end of iSeriese function 



# starting of monteCarlo(num)
	.globl	monteCarlo										# setting monteCarlo as a global name 
	.type	monteCarlo, @function							# setting monteCarlo as a function 
monteCarlo:													# starting of monteCarlo function

.LFB4:							
	.cfi_startproc											# Call Frame Information
	pushq	%rbp											# pushing the base pointer thus saving it in the stack 
	.cfi_def_cfa_offset 16							
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# setting a new stack pointer 
	.cfi_def_cfa_register 6
	subq	$48, %rsp										# creating space for local variables
	movq	%rdi, -40(%rbp)									# storing the function argument (pass for this function in rbp)(num)

	#declaring int i and count while setting count to be 0
	movl	$0, -20(%rbp)									# setting count = 0  ( rbp - 20 = 0 )					

	# initialising srand with 12345
	movl	$12345, %edi									# edi = 12345 (firat argument of the calling srand(12345))
	call	srand											# calling srand with argument is edi

	# declaring i = 0 
	movl	$1, -24(%rbp)									# i =0  ( i is stored at rbp - 24 ) 			
	jmp	.L11												# jumping to the loop starting position

.L14:

	# setting the value of x to be rand() / RAND_MAX (x = (double)rand()/RAND_MAX;)
	call	rand											# calling rand function ( storing the return value in rax)
	pxor	%xmm0, %xmm0									# xmm0 = 0 (using xor)
	cvtsi2sd	%eax, %xmm0									# converting to float from integer eax and storing in xmm0
	movsd	.LC6(%rip), %xmm1								# getting RAND_MAX value and storing in xmm1
	divsd	%xmm1, %xmm0									# divide rand() with RAND_MAX 
	movsd	%xmm0, -16(%rbp)								# storing the value of x in the stack 

	# setting the value of y to be rand() / RAND_MAX (y = (double)rand()/RAND_MAX;)
	call	rand											# calling rand function ( storing the return value in rax)
	pxor	%xmm0, %xmm0									# xmm0 = 0 (using xor)
	cvtsi2sd	%eax, %xmm0									# converting to float from integer eax and storing in xmm0
	movsd	.LC6(%rip), %xmm1								# getting RAND_MAX value and storing in xmm1
	divsd	%xmm1, %xmm0									# divide rand() with RAND_MAX 
	movsd	%xmm0, -8(%rbp)									# storing the value of x in the stack 

	# checking condition if ((x*x+y*y)<=1)
	movsd	-16(%rbp), %xmm0								# getting x value from rbp -16 to xmm0
	movapd	%xmm0, %xmm1									# moing the value of x to xmm1
	mulsd	-16(%rbp), %xmm1								# multiplying xmm1 with (rbp - 16) ( x^2 )
	movsd	-8(%rbp), %xmm0									# getting y value from rbp -16 to xmm0
	mulsd	-8(%rbp), %xmm0									# multiplying xmm0 with (rbp - 16) (y^2)
	addsd	%xmm1, %xmm0									# adding x^2 and y^2
	movsd	.LC7(%rip), %xmm1								# xmm1 = 1.0
	ucomisd	%xmm0, %xmm1									# comparing value of sum to <=  1
	jb	.L12												# jumping .L12

	# updating value of count ( count ++ )
	addl	$1, -20(%rbp)									# incrementing the value stored at rbp -20 by 1 

.L12:
	addl	$1, -24(%rbp)									# updating the value if i ( i = i++)

.L11:
	movl	-24(%rbp), %eax									# getting the value of i from the stack
	cltq													# 32 bit to 64 bit extension

	cmpq	-40(%rbp), %rax									# comparing the value of i with the value of n 
	jle	.L14												# jumpng  to .L14 if the condition (i<=n)

	# returning the calculated value (double)count/n*4.0 `	# if condition does not hold 
	pxor	%xmm0, %xmm0									# xmm0  = 0 (xor with itself  = 0 )
	cvtsi2sd	-20(%rbp), %xmm0							# converting integer to double (value of count) stored at rbp -20  
	pxor	%xmm1, %xmm1									# xmm1  = 0 (xor with itself  = 0 )
	cvtsi2sdq	-40(%rbp), %xmm1							# converting integer to double (value of n) stored at rbp -40 
	divsd	%xmm1, %xmm0									# dividing the value of count by n (xmm0 /= xmm1 )
	movsd	.LC5(%rip), %xmm1								# loading xmm1 with 4.0
	mulsd	%xmm1, %xmm0									# multiplying xmm0 with 4
	leave													# enter xmm0 value in stack
	.cfi_def_cfa 7, 8
	ret														# returning 
	.cfi_endproc

.LFE4:
	.size	monteCarlo, .-monteCarlo
# end of monte carlo 

# declaration of constants 
	.section	.rodata                                     # read only region of data 
	.align 8                                                # aligning with 8
.LC5:
	.long	0
	.long	1074790400
	.align 8
.LC6:
	.long	4290772992
	.long	1105199103
	.align 8
.LC7:
	.long	0
	.long	1072693248
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
