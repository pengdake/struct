#include <stdio.h>
#include 'stack.h'
int IsEmpty(Stack S)
{
	return S->Next == NULL;
}
Stack CreateStack(void)
{
	Stack S;
	
	S = malloc( sizeof(struct Node));
        if(S==NULL)
	{
		FatalError("Out of space!!!");
	}
	S->Next == NULL;
	MakeEmpty(S);
        return S;
}
void MakeEmpty(Stack S)
{
	if(S == NULL)
	{
		FatalError("Must use CreateStack first");
	}
	else
	{
		while(!IsEmpty(S))
		{
			Pop(S);
		}
	}
}
