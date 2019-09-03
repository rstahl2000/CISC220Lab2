/*
 * Lab2.cpp
 *Agnijit Das
 *  Created on: Sep 3, 2019
 *      Author: robertstahl and Chris Tiso
 */



#include <iostream>
using namespace std;


void func1();
void func2(int y);

int main(){

	func1();
	return 0;

}


void func1(){
	int x=2;
	cout<<x<<endl;
	cout<<&x<<endl;
}

void func2(int y){
	y=y+4;

}
