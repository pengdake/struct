#include <stdio>

int *bucket_sort(int a[], length);
int main()
{
	int list[8] = [324,12,2345,326,34234,3,30,12];
	int *a;
        
        
	a = bucket_sort(list, 8);
	for(int i = 0; i<8; i++)
	{
		printf("%d\n", *a);
	}
	return 0;
}
int *bucket_sort(int a[], length)
{
	int arr[10];
	int index, count;

	for(int i = 0; i<length; i++)
	{
		index = a[i] % 10;
		arr[index]++;
	}
	for(int i = 0; i<length; i++)
	{
 		count = arr[i];
		while(count)
		{
			*a++ = arr[i];
		 	count--;	
		}
	}

}
