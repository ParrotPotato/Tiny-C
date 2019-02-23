
void swap(int *a,int *b);

int main()
{
	int a;
	int b;
	int err;

	printStr("Enter the value of a:");
	a = readi(&err);

	printStr("Enter the value of b:");
	b = readi(&err);
	
	swap(&a,&b);
	printStr("Swapping the values of a and b by passing into a function as reference\n");
	printStr("The value of a:");
	printInt(a);
	printStr("\n");

	printStr("The value of b:");
	printInt(b);
	printStr("\n");


	return 0;
}

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}
