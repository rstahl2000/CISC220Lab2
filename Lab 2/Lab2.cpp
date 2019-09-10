/*
 * Lab2.cpp
 *Sun Bilin
 *  Created on: Sep 3, 2019
 *      Author: robertstahl and Chris Tiso
 */



#include <iostream>
using namespace std;
#include <stdlib.h>
#include "PartB.h"
#include <time.h>


void func1();
void func2(int y);//call by value function
int func3();
void func4(int *z);//call by pointer
void func5(int num);
void func6(int *x, int *y);
void func7(char a, char *b, char &c);
bool func8a(int &a, int &b);
void func8b();


int main(){
	srand(time(NULL));
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

	int test6a=10;
	int test6b=20;
	func6(&test6a,&test6b);
	cout<<test6a<<endl;
	cout<<test6b<<endl;

	char first='c';
	char second='u';
	char third = 't';
	cout<<first<<second<<third<<endl;
	func7(first,&second, third);
	cout<<first<<second<<third<<endl;



	int test8a1=4;
	int test8a2=2;
	func8a(test8a1,test8a2);//should swap test ints
	cout<<test8a1<<endl;
	cout<<test8a2<<endl;
	func8a(test8a1,test8a2);//should keep same values
	cout<<test8a1<<endl;
	cout<<test8a2<<endl;
	test8a1=10000;
	test8a2=1;
	func8a(test8a1,test8a2);//should swap
	cout<<test8a1<<endl;
	cout<<test8a2<<endl;
	func8b();

	int trial=-1;
	B1(10,trial);
	B2(5);
	B3(5,5);
	int*x= B4();
	cout<<&x<<endl;

	int arr[25];
	for(int x=0;x<25;x++){
		arr[x]=rand()%10 +1;
		cout<<arr[x]<<",";
	}
	cout<<endl;
	B5(&arr[0],0);
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

void func6(int *x, int *y){//uses call by pointer for problem 6
	int *worker=x;
	*worker=32;
	worker=y;
	*worker=42;
}




void func7(char a, char *b, char &c){
	a='m';
	*b='a';
	c='r';
}




bool func8a(int &a,int &b){
	bool swapped=false;
	int swapper;
	if(a>b){
		swapper=a;
		a=b;
		b=swapper;
		swapped=true;
	}
	return swapped;
}

void func8b(){
	for(int i=0;i<=20;i++){
	int first= rand() % 25 +1;
	int second= rand() % 25 +1;
	int check=first;
	cout<<first<<" "<<second<<endl;
	func8a(first,second);
	cout<<first<<" "<<second<<endl;
	if(check!=first){
		cout<<"Values Have Been swapped"<<endl;
	}
	}
}
