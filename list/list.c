#include <stdio.h>
#include 'list.h'

List MakeEmpty(List L)
{
}
int IsEmpty(List L)
{
    return L->Next == NULL;
}
int IsLast(Position P, List L)
{
    return P->Next == NULL;
}
Position Find(ElementType X, List L)
{
	Position P;
	
	P = L->Next;
	while((P != NULL) && (P->Element != X))
	{
		P = P->Next;
	}
	return P;
}
void Delete(ElementType X, List L)
{
	Position P, TmpCell;

	P = FindPrevious(X, L);
	if(!IsLast(P, L))
	{
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		free(TmpCell);
	}
	
}
Position FindPrevious(ElementType X, List L)
{
	Position P;

	P = L;
	while((P->Next != NULL)&&(P->Next->Element != x ))
	{
		P = P->Next;
	}
	return P;

}
void Insert(ElementType X, List L, Position P)
{
	Position TmpCell;
	
	TmpCell = malloc(sizeof(Struct Node));
        if(TmpCell == NULL)
	{
		FatalError("out of space");
	}
	TmpCell->Next = P->Next;
	TmpCell->Element = X;
	P->Next = TmpCell;
}
void DeleteList(List L)
{
	Position P, TmpCell;

	P = L->Next;
	L->Next = NULL;
        while(P!=NULL)
	{
		TmpCell = P->Next;
		free(P);
		P = TmpCell;
	}
}
Position Header(List L)
{

}
Position First(List L)
{

}
Position Advance(Position P)
{

}
ElementType Retrieve(Position P)
{

}
