/*
 * Lab2.cpp
 *Sun Bilin
 *  Created on: Sep 3, 2019
 *      Author: robertstahl and Chris Tiso
 */


#include "PartB.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

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

void B5(int &arr[0],int length){
	for(int i=0;i<length;i++){
		cout<<arr[i]<<",";
	}
	cout<<endl;
}
