// write a cpp program using recursion to display a restaurant menu repeatedly and allow the user to select an option until user chooses exit 

#include <iostream>
using namespace std;

void menu(){

    int choice;
    cout<<"===============Restaurant Menu===================="<<endl;
    cout<<"\n1. Pizza"<<endl;
    cout<<"2. Burger"<<endl;
    cout<<"3. Pasta"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"Enter the number as per above menu: ";
    cin>>choice;

    cout<<"\n";

    if(choice==1){
        cout<<"Your selected order is Pizza"<<endl;
        menu();
    }
    else if(choice==2){
        cout<<"Your selected order is Burger"<<endl;
        menu();
    }
    else if(choice==3){
        cout<<"Your selected order is Pasta"<<endl;
        menu();
    }
    else if(choice==4){
        cout<<"Thank you for visiting our store"<<endl;
        menu();
    }
    else{
        cout<<"Invalid choice";
        menu();
    }   
}

int main(){
    
    menu();

    return 0;
}
