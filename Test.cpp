#include "Test.h"

int main() {
	WorkingTest TestProgram = WorkingTest();
	TestProgram.ShowAll();

	return 0;
}

void WorkingTest::ShowAll()
{
	ShowCreateVec();
	ShowDistance();
	ShowAllCompare();
	ShowAllOperators();
}

void WorkingTest::ShowAllOperators()
{
	ShowOperatorWithAnotherVec();
	ShowOperatorWithAnotherNumber();
}

void WorkingTest::ShowAllCompare()
{
	ShowCompareVectors();
	ShowCompareWithNumber();
}

void WorkingTest::ShowOperatorWithAnotherVec()
{
	std::cout << "\n----------------- Operators With Vectors ----------------\n";
	ShowOperatorAddWithAnotherVec();
	ShowOperatorMinusWithAnotherVec();
	ShowOperatorTimesWithAnotherVec();
	ShowOperatorDevideWithAnotherVec();
	ShowOperatorModuloWithAnotherVec();
	ShowOperatorAddEquelWithAnotherVec();
	ShowOperatorMinusEquelWithAnotherVec();
	ShowOperatorTimesEquelWithAnotherVec();
	ShowOperatorDevideEquelWithAnotherVec();
	ShowOperatorModuloEquelWithAnotherVec();
}

void WorkingTest::ShowOperatorWithAnotherNumber()
{
	std::cout << "\n----------------- Operators With Numbers ----------------\n";
	ShowOperatorAddWithAnotherNumber();
	ShowOperatorMinusWithAnotherNumber();
	ShowOperatorTimesWithAnotherNumber();
	ShowOperatorDevideWithAnotherNumber();
	ShowOperatorModuloWithAnotherNumber();
	ShowOperatorAddEquelWithAnotherNumber();
	ShowOperatorMinusEquelWithAnotherNumber();
	ShowOperatorTimesEquelWithAnotherNumber();
	ShowOperatorDevideEquelWithAnotherNumber();
	ShowOperatorModuloEquelWithAnotherNumber();
}

void WorkingTest::ShowCreateVec() {
	std::cout << "\n----------------- Create ----------------\n";
	std::cout << Vec2.str() << "\n";
	std::cout << Vec3.str() << "\n";
	std::cout << Vec4.str() << "\n";
}

void WorkingTest::ShowDistance()
{
	std::cout << "\n----------------- Distance ----------------\n";
	std::cout << Vec2.str() + ".Distance(); = " << Vec2.Distance() << "\n";
	std::cout << Vec3.str() + ".Distance(); = " << Vec3.Distance() << "\n";
	std::cout << Vec4.str() + ".Distance(); = " << Vec4.Distance() << "\n";
	std::cout << Vec2.str() + ".Distance" + Vec2B.str() + "; = " << Vec2.Distance(Vec2B) << "\n";
	std::cout << Vec3.str() + ".Distance" + Vec3B.str() + "; = " << Vec3.Distance(Vec3B) << "\n";
	std::cout << Vec4.str() + ".Distance" + Vec4B.str() + "; = " << Vec4.Distance(Vec4B) << "\n";
}

void WorkingTest::ShowOperatorAddWithAnotherVec() {
	std::cout << "\n----------------------------- Operator Add With Another Vec ----------------------------\n";
	std::cout << Vec2.str() << " + " << Vec2B.str() << " = " + (Vec2 + Vec2B).str() + "\n";
	std::cout << Vec3.str() << " + " << Vec3B.str() << " = " + (Vec3 + Vec3B).str() + "\n";
	std::cout << Vec4.str() << " + " << Vec4B.str() << " = " + (Vec4 + Vec4B).str() + "\n";
}

void WorkingTest::ShowOperatorMinusWithAnotherVec() {
	std::cout << "\n----------------------------- Operator Minus With Another Vec ----------------------------\n";
	std::cout << Vec2.str() << " - " << Vec2B.str() << " = " + (Vec2 - Vec2B).str() + "\n";
	std::cout << Vec3.str() << " - " << Vec3B.str() << " = " + (Vec3 - Vec3B).str() + "\n";
	std::cout << Vec4.str() << " - " << Vec4B.str() << " = " + (Vec4 - Vec4B).str() + "\n";
}

void WorkingTest::ShowOperatorTimesWithAnotherVec()
{
	std::cout << "\n----------------------------- Operator Times With Another Vec ----------------------------\n";
	std::cout << Vec2.str() << " * " << Vec2B.str() << " = " + (Vec2 * Vec2B).str() + "\n";
	std::cout << Vec3.str() << " * " << Vec3B.str() << " = " + (Vec3 * Vec3B).str() + "\n";
	std::cout << Vec4.str() << " * " << Vec4B.str() << " = " + (Vec4 * Vec4B).str() + "\n";
}

void WorkingTest::ShowOperatorDevideWithAnotherVec()
{
	std::cout << "\n----------------------------- Operator Devide With Another Vec ----------------------------\n";
	std::cout << Vec2.str() << " / " << Vec2B.str() << " = " + (Vec2 / Vec2B).str() + "\n";
	std::cout << Vec3.str() << " / " << Vec3B.str() << " = " + (Vec3 / Vec3B).str() + "\n";
	std::cout << Vec4.str() << " / " << Vec4B.str() << " = " + (Vec4 / Vec4B).str() + "\n";
}

void WorkingTest::ShowOperatorModuloWithAnotherVec()
{
	std::cout << "\n----------------------------- Operator Modulo With Another Vec ----------------------------\n";
	std::cout << Vec2.str() << " % " << Vec2B.str() << " = " + (Vec2 % Vec2B).str() + "\n";
	std::cout << Vec3.str() << " % " << Vec3B.str() << " = " + (Vec3 % Vec3B).str() + "\n";
	std::cout << Vec4.str() << " % " << Vec4B.str() << " = " + (Vec4 % Vec4B).str() + "\n";
}

void WorkingTest::ShowOperatorAddEquelWithAnotherVec()
{
	std::cout << "\n----------------------------- Operator Add Equel With Another Vec ----------------------------\n";
	std::cout << Vec2.str() << " += " << Vec2B.str() << " = ";
	Vec2 += Vec2B;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() << " += " << Vec3B.str() << " = ";
	Vec3 += Vec3B;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() << " += " << Vec4B.str() << " = ";
	Vec4 += Vec4B;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowOperatorMinusEquelWithAnotherVec()
{
	std::cout << "\n-------------------- Operator Minus Equel With Another Vec --------------------\n";
	std::cout << Vec2.str() << " -= " << Vec2B.str() << " = ";
	Vec2 -= Vec2B;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() << " -= " << Vec3B.str() << " = ";
	Vec3 -= Vec3B;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() << " -= " << Vec4B.str() << " = ";
	Vec4 -= Vec4B;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowOperatorTimesEquelWithAnotherVec()
{
	std::cout << "\n-------------------- Operator Times Equel With Another Vec --------------------\n";
	std::cout << Vec2.str() << " *= " << Vec2B.str() << " = ";
	Vec2 *= Vec2B;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() << " *= " << Vec3B.str() << " = ";
	Vec3 *= Vec3B;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() << " *= " << Vec4B.str() << " = ";
	Vec4 *= Vec4B;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowOperatorDevideEquelWithAnotherVec()
{
	std::cout << "\n-------------------- Operator Devide Equel With Another Vec --------------------\n";
	std::cout << Vec2.str() << " /= " << Vec2B.str() << " = ";
	Vec2 /= Vec2B;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() << " /= " << Vec3B.str() << " = ";
	Vec3 /= Vec3B;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() << " /= " << Vec4B.str() << " = ";
	Vec4 /= Vec4B;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowOperatorModuloEquelWithAnotherVec()
{
	std::cout << "\n-------------------- Operator Modulo Equel With Another Vec --------------------\n";
	std::cout << Vec2.str() << " %= " << Vec2B.str() << " = ";
	Vec2 %= Vec2B;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() << " %= " << Vec3B.str() << " = ";
	Vec3 %= Vec3B;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() << " %= " << Vec4B.str() << " = ";
	Vec4 %= Vec4B;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowOperatorAddWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Add With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " + " + std::to_string(Num) + " = " + (Vec2 + Num).str() + "\n";
	std::cout << Vec3.str() + " + " + std::to_string(Num) + " = " + (Vec3 + Num).str() + "\n";
	std::cout << Vec4.str() + " + " + std::to_string(Num) + " = " + (Vec4 + Num).str() + "\n";
}

void WorkingTest::ShowOperatorMinusWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Minus With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " - " + std::to_string(Num) + " = " + (Vec2 - Num).str() + "\n";
	std::cout << Vec3.str() + " - " + std::to_string(Num) + " = " + (Vec3 - Num).str() + "\n";
	std::cout << Vec4.str() + " - " + std::to_string(Num) + " = " + (Vec4 - Num).str() + "\n";
}

void WorkingTest::ShowOperatorTimesWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Times With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " * " + std::to_string(Num) + " = " + (Vec2 * Num).str() + "\n";
	std::cout << Vec3.str() + " * " + std::to_string(Num) + " = " + (Vec3 * Num).str() + "\n";
	std::cout << Vec4.str() + " * " + std::to_string(Num) + " = " + (Vec4 * Num).str() + "\n";
}

void WorkingTest::ShowOperatorDevideWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Devide With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " / " + std::to_string(Num) + " = " + (Vec2 / Num).str() + "\n";
	std::cout << Vec3.str() + " / " + std::to_string(Num) + " = " + (Vec3 / Num).str() + "\n";
	std::cout << Vec4.str() + " / " + std::to_string(Num) + " = " + (Vec4 / Num).str() + "\n";
}

void WorkingTest::ShowOperatorModuloWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Modulo With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " % " + std::to_string(Num) + " = " + (Vec2 % Num).str() + "\n";
	std::cout << Vec3.str() + " % " + std::to_string(Num) + " = " + (Vec3 % Num).str() + "\n";
	std::cout << Vec4.str() + " % " + std::to_string(Num) + " = " + (Vec4 % Num).str() + "\n";
}

void WorkingTest::ShowOperatorAddEquelWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Add Equel With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " += " + std::to_string(Num) + " = ";
	Vec2 += Num;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() + " += " + std::to_string(Num) + " = ";
	Vec3 += Num;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() + " += " + std::to_string(Num) + " = ";
	Vec4 += Num;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowOperatorMinusEquelWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Minus Equel With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " -= " + std::to_string(Num) + " = ";
	Vec2 -= Num;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() + " -= " + std::to_string(Num) + " = ";
	Vec3 -= Num;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() + " -= " + std::to_string(Num) + " = ";
	Vec4 -= Num;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowOperatorTimesEquelWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Times Equel With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " *= " + std::to_string(Num) + " = ";
	Vec2 *= Num;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() + " *= " + std::to_string(Num) + " = ";
	Vec3 *= Num;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() + " *= " + std::to_string(Num) + " = ";
	Vec4 *= Num;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowOperatorDevideEquelWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Devide Equel With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " /= " + std::to_string(Num) + " = ";
	Vec2 /= Num;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() + " /= " + std::to_string(Num) + " = ";
	Vec3 /= Num;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() + " /= " + std::to_string(Num) + " = ";
	Vec4 /= Num;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowOperatorModuloEquelWithAnotherNumber()
{
	std::cout << "\n----------------------------- Operator Modulo Equel With Another Number ----------------------------\n";
	std::cout << Vec2.str() + " %= " + std::to_string(Num) + " = ";
	Vec2 %= Num;
	std::cout << Vec2.str() + "\n";

	std::cout << Vec3.str() + " %= " + std::to_string(Num) + " = ";
	Vec3 %= Num;
	std::cout << Vec3.str() + "\n";

	std::cout << Vec4.str() + " %= " + std::to_string(Num) + " = ";
	Vec4 %= Num;
	std::cout << Vec4.str() + "\n";
}

void WorkingTest::ShowCompareVectors()
{
	std::cout << "\n----------------------------- Compare Vectors ----------------------------\n";
	std::cout << Vec2.str() + " == " + Vec2B.str() + " = " + std::to_string(Vec2 == Vec2B) + "\n";
	std::cout << Vec2.str() + " != " + Vec2B.str() + " = " + std::to_string(Vec2 != Vec2B) + "\n";
	std::cout << Vec2.Distance() << " > " << Vec2B.Distance() << " = " + std::to_string(Vec2 > Vec2B) + "\n";
	std::cout << Vec2.Distance() << " >= " << Vec2B.Distance() << " = " + std::to_string(Vec2 >= Vec2B) + "\n";
	std::cout << Vec2.Distance() << " < " << Vec2B.Distance() << " = " + std::to_string(Vec2 < Vec2B) + "\n";
	std::cout << Vec2.Distance() << " <= " << Vec2B.Distance() << " = " + std::to_string(Vec2 <= Vec2B) + "\n";

	std::cout << Vec3.str() + " == " + Vec3B.str() + " = " + std::to_string(Vec3 == Vec3B) + "\n";
	std::cout << Vec3.str() + " != " + Vec3B.str() + " = " + std::to_string(Vec3 != Vec3B) + "\n";
	std::cout << Vec3.Distance() << " > " << Vec2B.Distance() << " = " + std::to_string(Vec3 > Vec3B) + "\n";
	std::cout << Vec3.Distance() << " >= " << Vec2B.Distance() << " = " + std::to_string(Vec3 >= Vec3B) + "\n";
	std::cout << Vec3.Distance() << " < " << Vec2B.Distance() << " = " + std::to_string(Vec3 < Vec3B) + "\n";
	std::cout << Vec3.Distance() << " <= " << Vec2B.Distance() << " = " + std::to_string(Vec3 <= Vec3B) + "\n";

	std::cout << Vec4.str() + " == " + Vec4B.str() + " = " + std::to_string(Vec4 == Vec4B) + "\n";
	std::cout << Vec4.str() + " != " + Vec4B.str() + " = " + std::to_string(Vec4 != Vec4B) + "\n";
	std::cout << Vec4.Distance() << " > " << Vec4B.Distance() << " = " + std::to_string(Vec4 > Vec4B) + "\n";
	std::cout << Vec4.Distance() << " >= " << Vec4B.Distance() << " = " + std::to_string(Vec4 >= Vec4B) + "\n";
	std::cout << Vec4.Distance() << " < " << Vec4B.Distance() << " = " + std::to_string(Vec4 < Vec4B) + "\n";
	std::cout << Vec4.Distance() << " <= " << Vec4B.Distance() << " = " + std::to_string(Vec4 <= Vec4B) + "\n";
}

void WorkingTest::ShowCompareWithNumber()
{
	std::cout << "\n----------------------------- Compare with Number ----------------------------\n";
	std::cout << Vec2.str() + " == " << Num << " = " + std::to_string(Vec2 == Num) + "\n";
	std::cout << Vec2.str() + " != " << Num << " = " + std::to_string(Vec2 != Num) + "\n";
	std::cout << Vec2.Distance() << " > " << Num << " = " + std::to_string(Vec2 > Num) + "\n";
	std::cout << Vec2.Distance() << " >= " << Num << " = " + std::to_string(Vec2 >= Num) + "\n";
	std::cout << Vec2.Distance() << " < " << Num << " = " + std::to_string(Vec2 < Num) + "\n";
	std::cout << Vec2.Distance() << " <= " << Num << " = " + std::to_string(Vec2 <= Num) + "\n";

	std::cout << Vec3.str() + " == " << Num << " = " + std::to_string(Vec3 == Num) + "\n";
	std::cout << Vec3.str() + " != " << Num << " = " + std::to_string(Vec3 != Num) + "\n";
	std::cout << Vec3.Distance() << " > " << Num << " = " + std::to_string(Vec3 > Vec3B) + "\n";
	std::cout << Vec3.Distance() << " >= " << Num << " = " + std::to_string(Vec3 >= Vec3B) + "\n";
	std::cout << Vec3.Distance() << " < " << Num << " = " + std::to_string(Vec3 < Vec3B) + "\n";
	std::cout << Vec3.Distance() << " <= " << Num << " = " + std::to_string(Vec3 <= Vec3B) + "\n";

	std::cout << Vec4.str() + " == " << Num << " = " + std::to_string(Vec4 == Num) + "\n";
	std::cout << Vec4.str() + " != " << Num << " = " + std::to_string(Vec4 != Num) + "\n";
	std::cout << Vec4.Distance() << " > " << Num << " = " + std::to_string(Vec4 > Num) + "\n";
	std::cout << Vec4.Distance() << " >= " << Num << " = " + std::to_string(Vec4 >= Num) + "\n";
	std::cout << Vec4.Distance() << " < " << Num << " = " + std::to_string(Vec4 < Num) + "\n";
	std::cout << Vec4.Distance() << " <= " << Num << " = " + std::to_string(Vec4 <= Num) + "\n";
}