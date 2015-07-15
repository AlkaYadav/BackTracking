/*
 * main.cpp
 *
 *  Created on: Jul 15, 2015
 *      Author: alkyadav
 */
#include"Permutation.h"
#include<cstring>
using namespace std;
int main(){
	Permutation p;
	char str[50];
    cout<<"Enter the string to permute"<<endl;
    cin>>str;
    p.permute(str,0,strlen(str)-1);
    return 0;
}



