#include 'queue.h'

int IsEmpty(Queue Q)
{
	return Q->Size == 0;
}
void MakeEmpty(Queue Q)
{
	Q->Size = 0;
	Q->Front = 1;
	Q->Rear = 0;
}
int IsFull(Queue)
{
	return Q->Size == Q->Capacity;
}
void Enqueue(ElementType X, Queue Q)
{
	if(IsFull(Q))
	{
		Error("full queue");
	}
	if(++Q->Rear ==  Q->Capacity)
	{
		Q->Rear = 0;
	}
	Q->Capacity
	Q->Size = Q->Size + 1;
	Q->Array[Q->Rear] = X;
}
