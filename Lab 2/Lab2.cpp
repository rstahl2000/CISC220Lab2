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
void func4(int *z);//call by pointer
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

	int test4=3;
	cout<<test4<<endl;
	cout<<&test4<<endl;
	func4(&test4);
	cout<<test4<<endl;
	cout<<&test4<<endl;

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

void func4(int *z){//call by pointer
	*z*=*z**z;
	cout<<*z<<endl;//prints value at the address
	cout<<&z<<endl;//prints address in the function
	cout<<z<<endl;//prints the address of the input parameter
}

void func5(int num){ //call by references
	int random=rand()%10;
	num+=random;
	cout<<random<<endl;
	cout<<num<<endl;
	cout<<&num<<endl;

}
