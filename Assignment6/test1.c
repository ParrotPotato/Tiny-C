

int main()
{
	int a[100];
	int i;
	int j;
	int n;
	int err;
	printStr("Enter the total number of integers to sort :");
	n = readInt(&err);
	printStr("Enter the number one by one:\n");
	for(i=0;i<n;i++)
	{
		a[i] = readInt(&err);
	}

	printStr("Sorting the array. \n");
	int temp;
	for(i=n;i>0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printStr("Printing the sorted array. \n");
	for(i=0;i<n;i++)
	{
		printInt(a[i]);
		printStr(" ");
	}
	printStr("\n");

	return 0;


}