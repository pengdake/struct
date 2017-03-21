struct AvlNode;
typedef struct AvlNode *Position;
typedef struct AvlNode *AvlTree;

AvlTree MakeEmpty(AvlTree T);
Position Find(ElementType X, AvlTree T);
Position FindMin(AvlTree T);
Position FindMax(AvlTree T);
AvlTree Insert(ElementType X, AvlTree T);
AvlTree Delete(ElementType X, AvlTree T);
ElementType Retrieve(Position P);

struct AvlNode
{
	ElementType Element;
	AvlNode Left;
	AvlNode Right;
	int Height;
};

static int Height(Position P);
AvlTree Insert(ElementType X, AvlTree T);
static Position SingleRotateWithLeft(Position K2);
static Position DoubleRotateWithLeft(Position K3);
