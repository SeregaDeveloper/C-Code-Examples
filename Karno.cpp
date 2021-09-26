#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{	
char arr[32][4];
int arr2[16];
int KMap0 [32]={
		26,30,22,18,
		10,14,6,2,
		27,31,23,19,
		11,15,7,3,
		25,29,21,17,
		9,13,5,1,
		24,28,20,16,8,12,4,0};	
char KMap1 [4][8];
char KMap2 [4][8];
char KMap3 [4][8];
char KMap4 [4][8];
//char arrS[16]={'0000','0001','0010','0011','0100','0101','0110','0111','1000','1001','1010','1011','1100','1101','1110','1111'};
char arrS[16][4]={
		'0','0','0','0',
		'0','0','0','1',
		'0','0','1','0',
		'0','0','1','1',
		'0','1','0','0',
		'0','1','0','1',
		'0','1','1','0',
		'0','1','1','1',
		'1','0','0','0',
		'1','0','0','1',
		'1','0','1','0',
		'1','0','1','1',
		'1','1','0','0',
		'1','1','0','1',
		'1','1','1','0',
		'1','1','1','1'};
	
for(int i=0;i<32;i++){
	for (int j=0;j<4;j++){
		//cin>>arr[j][i];
		arr[i][j]='FFFF';
	}
}
	
for(int i=0;i<32;i++){
	for (int j=0;j<4;j++){
		cout<<arr[i][j]<<"  ";
	}
cout<<endl;
}
cout<<"Enter you numbers (16)"<<endl<<endl;
	
for(int i=0;i<16;i++){
cin>>arr2[i];
arr[arr2[i]][0]=arrS[i][0];
arr[arr2[i]][1]=arrS[i][1];
arr[arr2[i]][2]=arrS[i][2];
arr[arr2[i]][3]=arrS[i][3];
}
	
for(int i=0;i<32;i++){
	for (int j=0;j<4;j++){
		cout<<arr[i][j]<<"  ";
	}
cout<<endl;
}
	
int flag=0;
int k=0;
int z=0;
cout<< endl <<"Karno map for 3"<<endl;	
	
for(int i=0;i<32;i++){
	flag=KMap0[i];
	cout<<arr[flag][0]<<" ";
	if(i==7 || i==15 || i==23)
		cout<<endl;
}
	
cout<<endl<<endl;		
flag=0;
k=0;
z=0;
cout<<"Karno map for 2"<<endl<<endl;
	
for(int i=0;i<32;i++){
	flag=KMap0[i];
	cout<<arr[flag][1]<<" ";
	if(i==7 || i==15 || i==23)
		 cout<<endl;   
}
		
cout<<endl<<endl;
flag=0;
k=0;
z=0;
cout<<"Karno map for 1"<<endl<<endl;
	
for(int i=0;i<32;i++){
	flag=KMap0[i];
	cout<<arr[flag][2]<<" ";
	if(i==7 || i==15 || i==23)
		cout<<endl;
}
	
cout<<endl<<endl;				
flag=0;
k=0;
z=0;
cout<<"Karno map for 0"<<endl<<endl;
	
for(int i=0;i<32;i++){
	flag=KMap0[i];
	cout<<arr[flag][3]<<" ";
	if(i==7 || i==15 || i==23)
		cout<<endl;
}
cout<<endl;		
system("pause");
return 0;
}
