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


//Try On Computer
void swap(int *x, int *y);
void swapSecond(int &x, int &y);




void Stars();
void A1();
void A2(int y);//call by value function
int A3();
void A4(int *z);//call by pointer
void A5(int num);
void A6(int *x, int *y);
void A7(char a, char *b, char &c);
bool A8a(int &a, int &b);
void A8b();
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
	srand(time(NULL));//To Make the seed be random each time


	//Try On Computer

	int twelve = 3;
	cout<<twelve<<endl;
	cout<<&twelve<<endl;
	Stars();

	int OnComputer;
	int *Try = &OnComputer;
	cout<<*Try<<endl;
	cout<<&Try<<endl;
	cout<<&*Try<<endl;
	Stars();

	int hi = 42;
	int *hello = &hi;
	*hello = 55;
	cout<<*hello<<endl;

	Stars();

	int swap1=2;
	int swap2=4;
	int *two = &swap1;
	int *four = &swap2;
	swap(two,four);
	swapSecond(swap1,swap2);
	Stars();
	Stars();

	//START OF LAB 2
	//Prints out value and the address of the variable.
	A1();
	Stars();

	int test=4;
	A2(test);//This is call by value. It prints out the variable and addresses of the variable in and out of the function. The value does not change outside the function
	cout<<test<<endl;
	cout<<&test<<endl;
	Stars();

	int Test3=A3();//returns a number that is a random number from 1 to 50. Also prints the address and the number
	cout<<Test3<<endl;
	cout<<&Test3<<endl;
	Stars();

	int test4=3;
	cout<<test4<<endl;
	cout<<&test4<<endl;
	A4(&test4);//Call by pointer function showing that the address of the value does not change but the value does change. The other address is the address the pointer points to
	cout<<test4<<endl;
	cout<<&test4<<endl;

	Stars();

	int seven=8;
	cout<<seven<<endl;
	cout<<&seven<<endl;
	A5(seven);//uses call by reference. Does same thing as number 4 but uses call by reference

	Stars();

	int test6a=10;
	int test6b=20;
	A6(&test6a,&test6b);//Uses call by reference to change the values of the two parameters
	cout<<test6a<<endl;
	cout<<test6b<<endl;
	Stars();

	char first='c';
	char second='u';
	char third = 't';
	cout<<first<<second<<third<<endl;
	A7(first,&second, third);//using call by value, call by reference, and call by pointer, this function takes in the word cut and changes it to the word cat
	cout<<first<<second<<third<<endl;


	Stars();

	int test8a1=4;
	int test8a2=2;
	A8a(test8a1,test8a2);//Swaps first value with second if first is larger. This one changes swaos for the test
	cout<<test8a1<<endl;
	cout<<test8a2<<endl;
	A8a(test8a1,test8a2);//should keep same values
	cout<<test8a1<<endl;
	cout<<test8a2<<endl;
	test8a1=10000;
	test8a2=1;
	A8a(test8a1,test8a2);//should swap
	cout<<test8a1<<endl;
	cout<<test8a2<<endl;
	A8b();//loops 20 times through the swap functions
	Stars();

	int trial=-1;
	B1(10,trial);//Makes an array and sets the values to 0 through 50. Then sets the 3rd index to hold the smallest value
	Stars();

	B2(5);//reverses an array
	Stars();

	B3(5,5);//Makes an array the first parameter is the length of the array and the second parameter is what values the indexes should be
	Stars();

	int*x= B4();//Worked but kept giving warnings
	cout<<&x<<endl;
	Stars();

	int arr[25];
	for(int x=0;x<25;x++){
		arr[x]=rand()%10 +1;
		cout<<arr[x]<<",";
	}
	cout<<endl;
	B5(&arr[0],0);//Makes an array of a given size and then prints it
	Stars();

	int size;
	int high;
	int low;
	B5(B6(&size,&high,&low),size);//uses B5 to print out the new function. This new function creates a new array with a random size, high value and low value
	Stars();


	//B7(27) This does not work because the array on the heap is not deleting


	int Test[4]={1,2,3,4};
	B8(Test,4);//prints out the address of every int in the array
	Stars();

	double TestTwo[3]={2.5,9.5,4.5};
	B9(TestTwo,3);//prints out an the address of every double in an array
	Stars();

	int Testing[12]={1,3,5,2,6,9,5,5,5,5,5,7};
	int e=12;
	B10(Testing,&e);//gets rid of duplicate numbers next to each other
	Stars();

	int window[5]={1,3,2,5,6};
	B11(window,5);//does hanning window
	Stars();

	B12(window,5);//Filters an array
	Stars();

	B13(window,6,1,5);//Creates a graph of the array, making a star for each value in the array in the place it holds
	Stars();

	int xx=3;
	int yy=3;
	int **TwoD=B14(&xx,&yy);//This creates a two dimensional array
	for(int zz=0;zz<xx;zz++){
		int* vv=TwoD[zz];
		for(int cc=0;cc<yy;cc++){
			B5(&vv[0],yy);
			cout<<TwoD[zz][cc]<<",";
		}
	}
	cout<<endl;
	Stars();

	return 0;
}


//Try On Computer
void swap(int *m, int *n) {
	int* tmp = m;
	m = n;
	n = tmp;
	cout<<*m<<","<<*n<<endl;

}

void swapSecond(int &m, int &n) {
int tmp = m;
m = n;
n = tmp;
cout<<m<<","<<n<<endl;
}



//START OF LAB2
void A1(){
	int x=2;
	cout<<x<<endl;
	cout<<&x<<endl;
}

void A2(int y){//call by value function
	y=y+4;
	cout<<y<<endl;
	cout<<&y<<endl;
}

int A3(){
	int x=rand()%50;
	cout<<x<<endl;
	cout<<&x<<endl;
	return x;
}

void A4(int *z){//call by pointer
	*z*=*z**z;
	cout<<*z<<endl;//prints value at the address
	cout<<&z<<endl;//prints address in the function
	cout<<z<<endl;//prints the address of the input parameter
}

void A5(int num){ //call by references
	int random=rand()%10;
	num+=random;
	cout<<random<<endl;
	cout<<num<<endl;
	cout<<&num<<endl;

}

void A6(int *x, int *y){//uses call by pointer for problem 6
	int *worker=x;
	*worker=32;
	worker=y;
	*worker=42;
}




void A7(char a, char *b, char &c){
	a='m';
	*b='a';
	c='r';
}




bool A8a(int &a,int &b){
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

void A8b(){
	for(int i=0;i<=20;i++){
		int first= rand() % 25 +1;
		int second= rand() % 25 +1;
		int check=first;
		cout<<first<<" "<<second<<endl;
		A8a(first,second);
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
 /*/int* B7(int num){
	int *arr=new int[num];
	for(int i=0;i<num;i++){
		arr[i]=rand()%100;
	}
	return &arr[0];
}
*/
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
int** B14(int* x, int* y) {
	int a = rand() % 5 +6;
	int b = rand() % 4 +5;
	*x = a;
	*y = b;

	int** arr = new int*[*x];
	for (int i = 0;i<*x;i++) {
		arr[i] = new int[*y];
		for (int j=0;j<*y;j++) {
			arr[i][j] = 0;
		}
	}
	int count = 0;
	int xval;
	int yval;
	while(count < 5) {
		xval = rand() % *x;
		yval = rand() % *y;
		if (arr[xval][yval] == 0) {
			arr[xval][yval] = 1;
			count++;
		}
	}
	return arr;
}

void Stars(){
	cout<<"********"<<endl;
}
