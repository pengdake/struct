#include 'stack.h'

int IsEmpty(Stack S)
{
	return S->Next == NULL;
}

Stack CreateStack(void)
{
	Stack s;
	
	s = malloc(sizeof(struct Node))
	if(s == NULL)
	{
		FatalError("out of space!");
	}
	MakeEmpty(s);
	return s;
}
void MakeEmpty(Stack S)
{
	if(S==NULL)
	{
		Error("Create Stack first!");
	}
	else
	{
		while(!IsEmpty(S))
		{
			Pop(S);
		}
	}

}
void Push(ElementType X, Stack S)
{
	PtrToNode p;

	p = malloc(sizeof(struct Node));
	if(p == NULL)
	{
		Error("out of space!");
	}
	else
	{
		p->Next = S->Next;
		p->Element = X;
		S->Next = p;
	}

}
ElementType Top(stack S)
{
        if(IsEmpty(S))
	{
		Error("Empty stack!");
	}
	else
	{
		return S->Next->Element;
	}
}
void Pop(Stack S)
{
	PtrToNode TmpCell;

	if(IsEmpty(S))
	{
		Error("Empty stack!");
	}
	else
	{
		TmpCell = S->Next;
		S->Next = TmpCell->Next;
	 	free(TmpCell);
	}
}
