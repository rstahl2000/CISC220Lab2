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
int func3();
void func4(int *z);
void func5(int num);

int main(){

	func1();

	int test=4;
	func2(test);
	cout<<test<<endl;
	cout<<&test<<endl;

	int Test3=func3();
		cout<<Test3<<endl;
		cout<<&Test3<<endl;

	int seven=8;
	cout<<seven<<endl;
	cout<<&seven<<endl;
	func5(seven);
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

int func3(){
	int x=rand()%50;
	cout<<x<<endl;
	cout<<&x<<endl;
	return x;
}

void func4(int *z){

}

void func5(int num){ //call by references
	int random=rand()%10;
	num+=random;
	cout<<random<<endl;
	cout<<num<<endl;
	cout<<&num<<endl;

}
