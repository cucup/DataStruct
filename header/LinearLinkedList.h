/**
* Created by 张可
* @autor cleancup
* @date 2019/8/12.
* @description 
**/

#ifndef BUAATEST_LINEARLINKEDLIST_H
#define BUAATEST_LINEARLINKEDLIST_H
#define ElemType int

typedef struct LNode{   //单链表
    ElemType data;
    struct LNode* next;
}LNode, *LinkedList;        //LNode用来存放头节点，因为只有这一个(类型时LNode，普通变量)；LinkedList用来实现链表元素（多个，类型为指针）

typedef struct DNode{   //双链表
    ElemType data;
    struct Dnode *prior,*next;
}DNode,*DLinkList;

LinkedList CREATE(int n);
void Foreach(LinkedList list);

#endif //BUAATEST_LINEARLINKEDLIST_H
