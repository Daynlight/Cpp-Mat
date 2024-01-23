#pragma once

#include <iostream>
#include "Mat.h"

class WorkingTest {
private:
	Mat::Vec2<int> Vec2 = Mat::Vec2<int>(12, 1);
	Mat::Vec3<int> Vec3 = Mat::Vec3<int>(2, 45, 5);
	Mat::Vec4<int> Vec4 = Mat::Vec4<int>(2, 2, 9, 1);
	Mat::Vec2<int> Vec2B = Mat::Vec2<int>(12, 1);
	Mat::Vec3<int> Vec3B = Mat::Vec3<int>(1, 6, 8);
	Mat::Vec4<int> Vec4B = Mat::Vec4<int>(1, 6, 9, 11);
	int Num = 5;

public:
	void ShowAll();

	void ShowAllOperators();
	void ShowOperatorWithAnotherVec();
	void ShowOperatorWithAnotherNumber();

	void ShowCreateVec();
	void ShowDistance();

	void ShowOperatorAddWithAnotherVec();
	void ShowOperatorMinusWithAnotherVec();
	void ShowOperatorTimesWithAnotherVec();
	void ShowOperatorDevideWithAnotherVec();
	void ShowOperatorModuloWithAnotherVec();
	void ShowOperatorAddEquelWithAnotherVec();
	void ShowOperatorMinusEquelWithAnotherVec();
	void ShowOperatorTimesEquelWithAnotherVec();
	void ShowOperatorDevideEquelWithAnotherVec();
	void ShowOperatorModuloEquelWithAnotherVec();

	void ShowOperatorAddWithAnotherNumber();
	void ShowOperatorMinusWithAnotherNumber();
	void ShowOperatorTimesWithAnotherNumber();
	void ShowOperatorDevideWithAnotherNumber();
	void ShowOperatorModuloWithAnotherNumber();
	void ShowOperatorAddEquelWithAnotherNumber();
	void ShowOperatorMinusEquelWithAnotherNumber();
	void ShowOperatorTimesEquelWithAnotherNumber();
	void ShowOperatorDevideEquelWithAnotherNumber();
	void ShowOperatorModuloEquelWithAnotherNumber();

	void ShowCompare();
};