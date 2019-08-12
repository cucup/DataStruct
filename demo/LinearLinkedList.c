/**
* Created by 张可
* @autor cleancup
* @date 2019/8/12.
* @description 
**/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../header/LinearLinkedList.h"

LinkedList CREATE(int n){
    LinkedList p,r=NULL,list=NULL;
    ElemType a;
    srand(time(NULL));
    for (int i = 1; i <= n; i++) {
        a=rand()%10;
        p=(LinkedList)malloc(sizeof(LNode));
        p->data=a;
        p->next=NULL;
        if(list==NULL)
            list=p;
        else
            r->next=p;
        r=p;
    }
    return list;
}

void Foreach(LinkedList list){
    int i=1;
    while(list->next!=NULL){
        printf("node:%d=%d\t",i++,list->next->data);
        list=list->next;
    }
}