#include <stdio.h>
int stack[5],n,top,x,i;
void push();
void pop(); 
void display();

int main(){
    top=-1;
    push(12);
    push(122);
    push(1222);
    display();
    pop();
    display();
    return 0;
}
void push(int x)
{
    if(top>=4)
    {
        printf("STACK overflow");
        
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("Stack underflow");
    }
    else
    {
        top--;
    }
}
void display(){
    if(top>0){
        for(i=0;i<=top;i++){
            printf("\n %d", stack[i]);
        }}
        else{
            printf("stack is empty");
        }
    
}
