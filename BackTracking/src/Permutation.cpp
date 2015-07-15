//============================================================================
// Name        : Permutation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Permute a string(not containing duplicates)
//============================================================================
#include "Permutation.h"
void Permutation::permute(char* str,int start,int end){
	if(start==end){
		cout<<str<<endl;
	}
	for(int i=start;i<=end;i++){
		swap(str,i,start);
		permute(str,start+1,end);
		swap(str,i,start);
	}
}

void Permutation::swap(char *a,int index1,int index2){
 char tmp;
 tmp=a[index1];
 a[index1]=a[index2];
 a[index2]=tmp;
}
