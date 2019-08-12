//
// Created by 张可 on 2019/7/1.
//

#ifndef BUAATEST_LINEARTABLE_H
#define BUAATEST_LINEARTABLE_H
#define StructType Array_Table
#define StructPointer Pointer_Table
#define ElemType int
#define Maxsize 20
typedef struct{
    ElemType data[Maxsize];
    ElemType length;
}Array_Table;

typedef struct{
    ElemType* data;
    ElemType length;
}Pointer_Table;


void initLinear(StructType* arr);
void initPointerLinear(StructPointer* t);
int insert(ElemType item,StructPointer* arr,int length,int site);
int isEmpty(StructPointer* arr,int length);
int length(StructPointer* arr);
void DELETELIST(StructPointer* arr,int length,int i);
void FOREACH(StructPointer* arr);
#endif //BUAATEST_LINEARTABLE_H
