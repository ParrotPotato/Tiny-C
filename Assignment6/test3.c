
int main()
{
	int a,b,c,err;
	printStr("Enter the first number: ");
	a = readInt(&err);
	printStr("Enter the second number: ");
	b = readInt(&err);
	printStr("Enter the third number: ");
	c = readInt(&err);

	int *x,*y,*z;
	char p,q,r;
	char *m,*n,*o;
	p = 'a';
	q = 'b';
	r = 'd';
	m = &p;
	n = &q;
	o = &r;

	x = &a;
	y = &b;
	z = &c;
	
	*x = *y;
	printStr("The first number address was pointed to second one: ");
	printInt(a);
	printStr("\n");

	*y  = *z;
	printStr("The second number address was pointed to third one: ");
	printInt(b);
	printStr("\n");
	int i = 0;

	if(a<b)
	{
		do
		{
			i++;
			a++;
		}while(a<b);
		printStr("After pointer arrangements second was greater than first by :");
		printInt(i);
		printStr("\n");
	}
	else
	{	
		do
		{
			i++;
			b++;
		}while(a>b);
		printStr("After pointer arrangements second was less than first by :");
		printInt(i);
		printStr("\n");
	}

	
	printStr("Character comparison");
	printStr("\n");
	if(*n<*o)
	{
		printStr("q was less\n");
	}
	else
	{
		if(*n>*m)
		{
			printStr("q was best\n");
		}
		else
		{
			printStr("p was best\n");
		}
	}

	printStr("A character array handling. Ignore the garbage due to lack of terminal null char\n");
	char car[5];
	car[0] = 'y';
	car[1] = 'o';
	car[2] = 'u';
	car[3] = 'r';
	car[4] = '\n';
	int i;
	for(i=0;i<5;i++)
	{
		printStr(&car[i]);
		printStr("\n");	
	}
	
	return 0;
}