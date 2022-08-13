#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"stack.c"
int set[5]={0,0,0,0,0};
char l[1024];
int n=0;
char g;
int setm(FILE *ptr){
  while(fgets(l, 1024, ptr)){
    l[strlen(l) - 1] = 0;
    if (strlen(l) > set[0]) set[0] = strlen(l);
    set[1]+=1;
  } 
}
int fic(FILE *ptr){
  for(int i=0; i!=set[1]+1; i++){
    fgets(l, 1024, ptr);
  }
  g=l[set[4]];
}
int bi(char nk, FILE *ptr){
  int a=0;
  switch(nk){
    case '1': 
      push(stack, nk-'0'); break; 
    case '0': 
      push(stack, nk-'0'); break;
    case '>': 
      set[2]=0; break;
    case '<': 
      set[2]=2; break;
    case '^': 
      set[2]=3; break;
    case 'v': 
      set[2]=1; break;
    case '+': 
      a=pop(stack); 
      a+=pop(stack); 
      push(stack, a); 
      break;
    case '-': 
      a=pop(stack); 
      a-=pop(stack); 
      push(stack, a); 
      break;
    case '*': 
      a=pop(stack); 
      a*=pop(stack); 
      push(stack, a); 
      break;
    case '/': 
      a=pop(stack); 
      a/=pop(stack); 
      push(stack, a); 
      break;
    case '%': 
      a=pop(stack); 
      a%=pop(stack); 
      push(stack, a); 
      break;
    case '!': 
      a=pop(stack); 
      if(!a){
        push(stack, 1); 
        break;
      }
      push(stack, 0); 
      break; 
    case '`': 
      a=pop(stack); 
      if(a < pop(stack)){
        push(stack, 1); 
        break;
      } 
      push(stack, 0); 
      break;
    case '?': 
      srand(time(NULL)); 
      set[2]=(rand()%4); 
      break;
    case '_': 
      a=pop(stack);
      if(!a) set[2]=0; 
      else set[2]=2; 
      break;
    case '|': 
      a=pop(stack); 
      if(!a) set[2]=1;  
      else set[2]=3; 
      break;
    case '.': 
      printf("%i", pop(stack)); 
      break;
    case ':':
      a=pop(stack);
      push(stack, a); push(stack, a);
      break;
    case '\\':
      a=pop(stack);
      int b = pop(stack);
      push(stack, a); push(stack, b);
      break;
    case '$':
      pop(stack);
      break;
    case '#':
      if(set[2]==0) set[4]+=1;
      else if(set[2]==1) set[3]+=1;
      else if(set[2]==2) set[4]-=1;
      else set[3]-=1;
      break;
    case '&':
      scanf("%d", &a);
      push(stack, a);
      break;
    case '@': exit(0);
  }
}
int main(int argc, char *argv[]){
  FILE *ptr = fopen(argv[1], "r");
  setm(ptr);
  while(1){
    fic(ptr);  
    bi(g, ptr);
    if(set[2]==0)
      {set[4]+=1;}
    else if(set[2]==1) 
      {set[3]+=1;}
    else if(set[2]==2) 
      {set[4]-=1;}
    else 
      {set[3]-=1;}

    if(set[4]==-1)
      {set[4]=set[0];}
    else if(set[4]==set[0]+1)
      {set[4]=0;}
    else if(set[3]==-1)
      {set[3]=set[1];}
    else if(set[3]==set[1]+1)
      {set[3]=0;}
  }
}
