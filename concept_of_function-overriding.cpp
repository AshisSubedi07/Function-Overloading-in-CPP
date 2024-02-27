//Program to demonstrate the concept of function overloading in c++
#include<iostream>
using namespace std;
class Parent{ //Creating class
	public:
		 void get_data(){ //Function
		cout<<"This is a Parent class: "<<endl;
		}
};
class child:public Parent{
	public:
		void get_data(char a){ //Creating function with argument of type character
		cout<<"This is a child class: "<<endl;
		}
};
 int main(){
 child obj; //Creating object for class child.
 obj.get_data('A');//Passing arguments
  return 0;
 }
 
