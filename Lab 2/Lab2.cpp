/*
 * Lab2.cpp
 *Agnijit Das
 *  Created on: Sep 3, 2019
 *      Author: robertstahl and Chris Tiso
 */



#include <iostream>
using namespace std;


void func1();
void func2(int y);//call by value function
void func4(int *z);

int main(){

	func1();
	int test=4;
	func2(test);
	cout<<test<<endl;
	cout<<&test<<endl;
	return 0;

}


void func1(){
	int x=2;
	cout<<x<<endl;
	cout<<&x<<endl;
}

void func2(int y){//call by value function
	y=y+4;
	cout<<y<<endl;
	cout<<&y<<endl;
}

void func4(int *z){

}
