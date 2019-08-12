//
// Created by 张可 on 2019/7/1.
//
/**
 * @author cleancup
 * @description 线性表中顺序表的实现
 * @date 2019/8/12
 */

#include "../header/LinearTable.h"
#include <stdio.h>
#include <stdlib.h>
#define ElemType int
#define StructType Array_Table
#define StructPointer Pointer_Table
#define Maxsize 20
#define ERRORMASSAGE printf



void initLinear(StructType* t){     //与下一个线性表的初始化方式区别：这个结构体内data域为数组
    t->length=0;
    for (int j = 0; j < 10; ++j) {
        t->data[j]=j+1;
        t->length++;
    }
    t->data[t->length]=-1;
}

void initPointerLinear(StructPointer* t){   //与上一个线性表的初始化方式区别：这个结构体内data域为指针
    t->data=(ElemType*) malloc(sizeof(ElemType)*Maxsize);
    t->length=0;
    for (int j = 0; j < 10; ++j) {
        t->data[j]=j+3;
        t->length++;
    }
    t->data[t->length]=-1;
}

/**
 * 输出所有元素
 * @param arr 线性表
 */
void FOREACH(StructPointer* arr){
    for (int i = 0; i < arr->length; ++i) {
        printf("arr[%d]=%d\t",i,arr->data[i]);
        if((i+1)%5==0)
            puts("");
    }
}

/**
 * 在site位置插入元素item
 *
 * @param item      被插入元素
 * @param arr       数组（代表顺序存储结构）
 * @param length    数组长度
 * @param site      被插入数组中的位置
 * @return          成功：1，失败：0
 */
int insert(ElemType item,StructPointer* arr,int length,int site){
    if(length>=Maxsize || site<1 || site>length){
        ERRORMASSAGE("数组已满或位置异常");
        return 0;
    }else if(length<0){
        ERRORMASSAGE("RUN_TIME_ERROR");
        return 0;
    }else{
        for (int i = length-1; i >= site-1; i--) {
            arr->data[i+1]=arr->data[i];
        }
        arr->data[site-1]=item;
        arr->length++;
        printf("\n");
        return 1;
    }
}

int length(StructPointer* arr){
    if(arr==NULL){
        return 0;
    }else{
        return arr->length;
    }

}

/**
 * 判断数组arr是否为空
 *
 * @param arr
 * @param length
 * @return  数组为空：1，不为空：1
 */
int isEmpty(StructPointer* arr,int length){
    if(length==0){
        return 1;
    }else{
        return 0;
    }
}

/**
 *
 * @param arr 线性表
 * @param length 表长度
 * @param i 删除位置
 */
void DELETELIST(StructPointer* arr,int length,int i){
    int j;
    if(i<1||i>length){
        ERRORMASSAGE("删除元素位置异常");
        return;
    }
    for (int k = i-1; k < length; ++k) {
        arr->data[k]=arr->data[k+1];
    }
    arr->length--;
}



int main01() {      //数据域为数组时主函数调用
    Array_Table t ={{-1},0};
    initLinear(&t);
    if (!isEmpty(&t,t.length))
        FOREACH(&t);
    insert(11,&t,t.length,9);
    FOREACH(&t);
    printf("Array_Table's length=%d\n",length(&t));
    return 0;
}

int main02() {      //数据域为指针时主函数调用
    StructPointer t;
    initPointerLinear(&t);
    if (!isEmpty(&t,t.length))
        FOREACH(&t);
    insert(11,&t,t.length,9);
    FOREACH(&t);
    printf("Array_Table's length=%d\n",length(&t));
    free(t.data);
    return 0;
}

