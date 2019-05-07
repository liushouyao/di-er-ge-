#include <iostream>
#include <Windows.h>

using namespace std;

int max_value(int a[], int size) {
	int sum = 0;
	int max = -(1 << 31);
	int cur=0;
	if (size < 0) {
		return -1;
	}
	while (cur<size){
		sum = sum + a[cur];
		if (sum > max) {
			max = sum;
		}
		else if (sum<0) {
			sum = 0;
		}
		cur++;
	}
	
}