#include<iostream>
using namespace std;

#include"json.h"
using namespace yazi::json;

int main() {

	Json arr;
	arr[0] = true;
	arr[1] = 123;
	arr[2] = 1.23;
	arr[3] = "hello world";

	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << (*it).str() << std::endl;
	}

	system("pause");
	return 0;
}