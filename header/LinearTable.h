//
// Created by 张可 on 2019/7/1.
//

#ifndef BUAATEST_LINEARTABLE_H
#define BUAATEST_LINEARTABLE_H
#define StructType Table
#define ElemType int
#define Maxsize 20
typedef struct{
    ElemType data[Maxsize];
    ElemType length;
}Table;
void initLinear(StructType* arr);
int insert(ElemType item,StructType* arr,int length,int site);
int isEmpty(StructType* arr,int length);
int length(StructType* arr);
void DELETELIST(StructType* arr,int length,int i);
void FOREACH(StructType* arr);
#endif //BUAATEST_LINEARTABLE_H
