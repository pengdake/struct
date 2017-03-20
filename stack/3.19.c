#include <stdio.h>
#include <stdlib.h>
#include 'stack.h'
typedef ElementType int;

int compute(char *arr, int len)
{
	Stack S;
	int i;
	ElementType ele, ele_1, ele_2, sum;


	s = CreateStack();
	sum = 0;
	for(i=0;i<len;i++)
	{
		switch(arr[i])
		{
			case '+':
				ele_1 = Top(s);
				Pop(s);
				if(sum == 0)
				{
					ele_2 = Top(s);
					Pop(s);
					sum = ele_1 + ele_2;
				}
				else
				{
					sum += ele_1;
				}
				Push(sum, s);
				break;
			case '-':
				ele_1 = Top(s);
				Pop(s);
				if(sum == 0)
				{
					ele_2 = Top(s);
					Pop(s);
					sum = ele_1 - ele_2;
				}
				else
				{
					sum -= ele_1;
				}
				Push(sum, s);
				break;
			case '*':
				ele_1 = Top(s);
				Pop(s);
				if(sum == 0)
				{
					ele_2 = Top(s);
					Pop(s);
					sum = ele_1 * ele_2;
				}
				else
				{
					sum *= ele_1;
				}
				Push(sum, s);
				break;
			case '/':
				ele_1 = Top(s);
				Pop(s);
				if(sum == 0)
				{
					ele_2 = Top(s);
					Pop(s);
					sum = ele_1 / ele_2;
				}
				else
				{
					sum /= ele_1;
				}
				Push(sum, s);
				break;
			default:
				ele = 0;
                                while(arr[i+1] != '+' || arr[i+1] != '-' || arr[i+1] != '*' || arr[i+1] != '/')
				{
					ele = ele * 10 + atoi(arr[i++]);	
				}
				Push(ele, s);
				break;
		}
	}
	result = 0;
        
}
