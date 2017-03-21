#include <stdio.h>
#include 'tree.h'

SearchTree
MakeEmpty(SearchTree T)
{
	if(T != NULL)
	{
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		free(T);
	}
	return NULL;
}

Position
Find(ElementType X, SearchTree T)
{
	if(T == NULL)
	{
		return NULL;
	}
	if(T->Element == X)
	{
		return T;
	}
	else if(T->Element > X)
	{
	        return Find(X, T->Right);	
	}
	else
	{
		return Find(X, T->Left);
	}
}
Position
FindMin(SearchTree T)
{
	if(T == NULL)
	{
		return NULL;
	}
	else if(T->Left == NULL)
	{
		return T;
	}
	else
	{
		return FindMin(T->Left);
	}

}
Position
FindMax(SearchTree T)
{
	if(T == NULL)
	{
		return NULL;
	}
	else if(T->Right == NULL)
	{
		return T;
	}
	else
	{
		return FindMax(T->Right);
	}
}
SearchTree
Insert(ElementType X, SearchTree T)
{
	if(T == NULL)
	{
		T = malloc(sizeof(TreeNode));
		if(T == NULL)
		{
			Error("out of space!\n");
		}
		else
		{
			T->Element = X;
			T->Left = NULL;
			T->Rigth = NULL;
		}
	}
	else if(X > T->Element)
	{
		T->Right = Insert(X, T->Right);
	}
	else if(X < T->Element)
	{
		T->Left = Insert(X, T->Left);
	}
	else
	{
		printf("there is a same element");
	}
	return T;

}
