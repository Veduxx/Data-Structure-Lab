#include<iostream>
#include<string>

using namespace std;


int main()
{
 int id1,id2,id3;
 string title1,title2,title3;
 //Book1
 cout<<"Enter book 1 id:";
 cin>>id1;
 
 cin.ignore();
 cout<<"Enter book 1 title:";
 getline(cin,title1);
 
 //Book2
 cout<<"Enter book 2 id:";
 cin>>id2;
  
 cin.ignore();
 cout<<"Enter book 2 title:";
 getline(cin,title2);

 //Book3
 cout<<"Enter book 3 id:";
 cin>>id3;
 
 cin.ignore();
 cout<<"Enter book 3 title:";
 getline(cin,title3);

//display
 cout<<"\n\n";
 cout<<"\n Book id 1 is "<<id1;
 cout<<"\t\t\t Book title1 is "<<title1;
 cout<<"\n Book id 2 is "<<id2;
 cout<<"\t\t\t Book title2 is "<<title2;
 cout<<"\n Book id 3 is "<<id3;
 cout<<"\t\t\t Book title 3 is "<<title3;
 cout<<"\n\n";
 return 0;
 }
