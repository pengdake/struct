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
// 3.1
void Show(List L)
{
	PtrToNode p;

	p = L->Next;
	while(p!=NULL)
	{
		printf("%s\n", p->Element);
		p = p->Next;
	}
}
//3.3
Position Header(List L)
void Swap(List L, ElementType x, ElementType y)
{
	PtrToNode p, TmpCell;
	
	p = L;
	while(p->Next!=NULL && (p->Next->Element != x || p->Next->Element != y))
	{
		p = p->Next;
	}
	if(p->Next == NULL)
	{
		Error("can't find elements");
	}
	else
	{
		TmpCell = p->Next->Next;
		p->Next->Next = TmpCell->Next;
		TmpCell->Next = p->Next;
		p->Next = TmpCell; 	
	}
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
