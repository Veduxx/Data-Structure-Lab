// write a cpp program to store 5 recently served token no in a stack and display the service history starting from the most recently served customer 

#include <iostream>
using namespace std;

int main(){
    int stack[5];
    int top = -1;

    cout<<"=============The recently served token numbers================\n";
    for(int i=1;i<=5;i++){
        cout<<"Enter recently served token number ("<<i<<"): ";
        cin>>stack[++top];
    }

    cout<<"serve history starting from most recently served"<<endl;
    int b = 0;
    while(top>=0){
        cout<<"The "<<5-b<<" served order token number is: "<<stack[top]<<endl;
        top--;
        b++;
    }
    return 0;
}
