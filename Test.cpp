#include <iostream>
#include "Mat.h"

int main() {
	Mat::Vec4<int> A = Mat::Vec4<int>();
	std::cout << A.VTS();
	return 0;
}