/*
 * Permutation.h
 *
 *  Created on: Jul 15, 2015
 *      Author: alkyadav
 */

#include <iostream>
using namespace std;

class Permutation{
	void swap(char *a,int index1,int index2);
public:
	void permute(char* str,int start,int end);
};



