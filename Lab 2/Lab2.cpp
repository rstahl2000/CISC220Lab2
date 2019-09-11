/*
 * Lab2.cpp
 *Sun Bilin
 *  Created on: Sep 3, 2019
 *      Author: robertstahl and Chris Tiso
 */



#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
#include <cmath>

void Stars();
void func1();
void func2(int y);//call by value function
int func3();
void func4(int *z);//call by pointer
void func5(int num);
void func6(int *x, int *y);
void func7(char a, char *b, char &c);
bool func8a(int &a, int &b);
void func8b();
void B1(int length, int &pass);
void B2(int length);
int* B4();
void B3(int length,int range);
void B5(int* arr,int length);
int* B6(int* size,int* high,int* low);
void B8(int *arr,int length);
void B9(double *arr,double length);
int* B10(int *arr,int *length);
int B11(int* arr,int length);
void B12(int* arr,int length);
void B13(int* arr,int high, int low,int length);
int** B14(int* x, int* y);


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

	int size;
	int high;
	int low;
	B6(&size,&high,&low);

	int Test[4]={1,2,3,4};
	B8(Test,4);

	double TestTwo[3]={2.5,9.5,4.5};
	B9(TestTwo,3);

	int Testing[12]={1,3,5,2,6,9,5,5,5,5,5,7};
	int e=12;
	B10(Testing,&e);

	int window[5]={1,3,2,5,6};
	B11(window,5);

	B12(window,5);

	B13(window,6,1,5);
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
void B1(int length, int &pass){
	int arr[length];
	for(int i=0;i<length;i++){
		arr[i]= rand()% 50 +1;
		cout<<arr[i]<<",";
	}
	cout<<endl;
	pass=arr[0];
	for(int x=0;x<length;x++){
		if(arr[x]<=pass){
			pass=arr[x];
		}
	}
	arr[3]=pass;
	cout<<arr[3]<<endl;
}

void B2(int length){
	int arr[length];
	for(int i=0;i<length;i++){
			arr[i]= rand()% 50 +1;
			cout<<arr[i]<<",";
		}
	cout<<endl;
	for(int x=length-1;x>=0;x--){
		cout<<arr[x]<<",";
	}
	cout<<endl;
}

void B3(int length,int range){
	int arr[length];
	for(int i=0;i<=0;i++){
		arr[i]=rand() %range;
	}
	for(int x=0;x<length;x++){
		for(int y=x+1;y<length;y++){
			if (arr[x]>arr[y]){
				int hold = arr[x];
				arr[x]=arr[y];
				arr[y]=hold;
			}
		}
	}
	for(int z=0;z<length;z++){
			cout<<arr[z]<<",";
}
	cout<<endl;
}
int* B4(){
	int x=3;
	cout<<x<<endl;
	cout<<&x<<endl;
	return &x;
}

void B5(int* arr,int length){
	for(int i=0;i<length;i++){
		cout<<arr[i]<<",";
	}
	cout<<endl;
}
int* B6(int* size,int* high,int* low){
	srand(time(NULL));
	*size=rand()% 25 +25;
	*high=(rand()%5)+5;
	*low=-1*((rand()% 5) +5);
	int *arr= new int[*size];
	for(int i=0;i<*size;i++){
		arr[i]=rand()%(*high-*low)-*high;
		cout<<arr[i]<<",";
	}
	cout<<endl;
	return arr;


}

void B8(int *arr,int length){
	for(int x=0;x<length;x++){
		cout<<&arr[x]<<",";
	}
	cout<<endl;
}

void B9(double *arr,double length){
	for(int x=0;x<length;x++){
			cout<<&arr[x]<<",";
		}
		cout<<endl;
}

int* B10(int *arr,int *length){
	int *r=new int[*length];
	int temp=0;
	for(int i=0;i<*length;i++){
		if(arr[i]!=arr[i-1]){
			r[temp]=arr[i];
			temp++;
		}
	}
	for(int y=0;y<temp;y++){
		cout<<r[y]<<",";
		*length=y;
	}
	cout<<endl;
	return r;
}
int B11(int* arr,int length){
	int sum=0;
	int mult=1;
	int divide=0;
	for(int i=0;i<length;i++){
		sum+= mult *arr[i];
		divide+=mult;
		if(i+1 <= (length/2)+.5){
			mult++;
		}
		else{
			mult--;
		}
	}
	cout<<sum/divide<<endl;
	return (sum/divide);
}

void B12(int* arr,int length){
	int* filter=new int[length];
	filter[0]=0;
	filter[length-1]=0;
	for(int i=1;i<length-1;i++){
		filter[i]=(arr[i]+arr[i+1]+arr[i-1])/3;
	}
	for(int x=0;x<length;x++){
		cout<<filter[x]<<",";
	}
	cout<<endl;
}

void B13(int* arr,int high, int low,int length){
	int distance=high-low;
	for(int i=0;i<=distance;i++){
		cout<<high-i<<":";
		int number=high-i;
		for(int j=0;j<length;j++){
			if(arr[j]==number){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
int** B14(int* x, int* y){
	*x=rand()%5+6;
	*y=rand()%4+5;
	int **array;
	array=new int*[*x];
	for(int i=0;i<*x;i++){
		array[*x]=new int[*y];
		for (int j=0;j<*y;j++){
			array[*x][*y]=0;
		}
	}
	int count=0;
	int xplace;
	int yplace;
	while(count<6){
		xplace=rand()%*x;
		yplace=rand()%*y;
		if(array[xplace][yplace]==0){
			array[xplace][yplace]=1;
			count++;
		}
	}
	return array;
}

void Stars(){
	cout<<"********"<<endl;


int** B14(int* x, int* y){
	*x=rand()%5+5;
	*y=rand()%4+4;
	int **array;
	array=new int*[*x];
	for(int i=0;i<*x;i++){
		array[*x]=new int[*y];
		for (int j=0;j<*y;j++){
			array[*x][*y]=0;
		}
	}
	int count=0;
	int xplace;
	int yplace;
	while(count<6){
		xplace=rand()%*x;
		yplace=rand()%*y;
		if(array[xplace][yplace]==0){
			array[xplace][yplace]=1;
			count++;
		}
	}
	return array;
}
