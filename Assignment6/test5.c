///MAX of 3 numbers

//This program will ask the user to enter three numbers
//It will invoke a function which will return the maximum of them
//It will be a good example of condition checking.

int findmax(int a,int b,int c)
{
	int max = a;
	if(b>a)
	{
		if(b>c)			
		max = b;
		else
			max = c;
	}
	else if(c>a)
	{
		max = c;
	}

	return max;

}


int main()
{
	printStr("Enter three numbers whose maximum among them you want to know\n");
	int a,b,c,err;
	printStr("Enter the first number: ");
	a = readInt(&err);
	printStr("Enter the second number: ");
	b = readInt(&err);
	printStr("Enter the third number: ");
	c = readInt(&err);

	int max;
	max = findmax(a,b,c);

	printStr("The max value is: ");
	printInt(max);
	printStr("\n");

	printStr("Lets do expression tests:\n");
	printStr("a = b*c*a = ");
	a = b*c*a;
	printInt(a);
	printStr("\n");

	printStr("b = a/c = ");
	b = a/c;
	printInt(b);
	printStr("\n");
	
	printStr("c = a%b = ");
	c = a%b;
	printInt(c);
	printStr("\n");
		
	return 0;
}
