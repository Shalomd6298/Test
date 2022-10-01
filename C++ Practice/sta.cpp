#include <iostream>
using namespace std;
#define size 10 

struct stack
{
    int top;
    int array[size];
    struct stack *p;
};

void push(stack *st, int x)
{
    if(st->top == size-1) { cout<<"Overflow!" <<endl;}
    else
    {
        st->top+=1;
        st->array[st->top] = x;
    }
}

void pop(stack *st)
{
    if(st->top==-1) { cout<<"Underflow!" <<endl;}
    else
    {
        cout<<"Item popped: "<<st->array[st->top]<<endl;
        st->top-=1;
    }
}

bool isFull(stack *q)
{
    return q->top==size-1 ? true:false;
}

bool isEmpty(stack *q)
{
    return q->top == -1 ? true:false;
}

void stack_print(stack *e)
{
    for(int i=0; i<= e->top ; i++)
    {
        cout<< e->array[i] << " ";
    }
    cout<<endl;
}

int main()
{
    stack *st = new stack();
    st->top = -1;
    
    push(st,5);
    push(st,10);
    push(st,15);
    push(st,20);
    stack_print(st);
    pop(st);
    stack_print(st);
    bool x = isEmpty(st);
    cout<< x<< endl;
}