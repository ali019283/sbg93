#include<stdlib.h>
int stack[1024];
int top=0;
int push(int *s, int value){
  stack[top]=value;
  top++;
}
int pop(int *s){
  int i;
  if (top==-1){
    printf("ok");
    return -1;
  }
  top--;
  i = stack[top];
  stack[top]=NULL;
  return i;
}

