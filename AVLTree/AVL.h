#ifndef _AvlTree_H
#define _AvlTree_H
#define Max(a,b) (a>b)?(a):(b)
struct AvlNode;
typedef struct AvlNode *Position;
typedef struct AvlNode *AvlTree;
typedef int ElementType;

static int Height(Position P); 
AvlTree MakeEmpty(AvlTree T);
Position Find(ElementType X,AvlTree T);
Position FindMin(AvlTree T);
Position FindMax(AvlTree T);
AvlTree Insert(ElementType X,AvlTree T);
AvlTree Delete(ElementType X,AvlTree T);
/*����ת��������*/ 
static Position SingleRotateWithLeft(Position K2);
/*����ת��������*/ 
static Position SingleRotateWithRight(Position K2);
/*˫��ת��������*/ 
static Position DoubleRotateWithLeft(Position K3);
/*˫��ת��������*/ 
static Position DoubleRotateWithRight(Position K3);
ElementType Retrieve(Position P);

#endif

