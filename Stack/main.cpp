#include <iostream>
using namespace std;
#define SIZE 5

int stack[SIZE];
int top = -1;
int *p;

void push (int value);
int pop();
void display();
bool isEnpty();
bool isFull();
void displa();




int main() {
    
    push(1);
    pop();
    push(2);
    push(3);
    pop();

    push(4);
    pop();
    pop();
    push(5);

    display();
    
    return 0;
}



void push(int value ) {
    p=new int;
    p=&top;
    if (top == SIZE-1){
        cout << " Stsck is Full" << endl;
    }
    else {
        top++;
        stack[top] = value;
    }
}

int pop(){
    if (top == -1){
        return -1;
    }
    else{
        return stack[top--];
    }
}

void display(){
    cout << endl;

    if (top == -1){
        cout << " Stsck is Not defind" << endl;
    }
    else{
        for ( int i = top ; i >= 0 ; i--){
            cout <<" - "<< stack[i]<<" ";
        }
        cout << endl;

    }

}

void displa(){
        for ( int i = 0 ; i <= top ; i--){
            cout <<" - "<< stack[i]<<" ";
        }
}

bool isEnpty(){
    if ( top == -1){
        return true;
    }
    else {
        return false;
    }
}


bool isFull(){
    if ( top == SIZE -1){
        return false;
    }
    else {
        return true;
    }

}



