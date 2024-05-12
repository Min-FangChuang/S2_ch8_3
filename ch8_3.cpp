/*Programming: Min-Fang Chuang, An-Yi Lee, Vivian  Date: 2024/04/29
 *Instruction: Chow-Sing Lin     Class: Program Design
 *
 *define a class "Complex" and operators: + , - , == , * , >> , <<
 */
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

//define the class
class Complex {
public:
	Complex(double, double);
	Complex(double);
	Complex();
	double getReal() const { return real; }
	double getImaginary()const { return imaginary; }
	//define friend operators
	friend bool operator ==(const Complex&, const Complex&);
	friend const Complex operator +(const Complex&, const Complex&);
	friend const Complex operator -(const Complex&, const Complex&);
	friend const Complex operator -(const Complex&);
	friend const Complex operator *(const Complex&, const Complex&);
	friend ostream& operator <<(ostream& outputStream, Complex&);
	friend istream& operator >>(istream& inputStream, Complex&);
private:
	//complex number: real + imaginary*i
	double real;
	double imaginary;
};

int main() {
	const Complex i(0, 1);
	//declaration objects
	Complex Complex1, Complex2, answer;
	//input two complex numbers by operator '>>'


	//calculate the addition of two complex numbers and display the result by operator '<<'

	//calculate the subtraction of two complex numbers and display the result by operator '<<'

	//calculate the multiplication of two complex numbers and display the result by operator '<<'
	answer = Complex1 * Complex2;

	system("pause");
	return(0);
}

//constructors
Complex::Complex(double realPart, double imaginaryPart) :real(realPart), imaginary(imaginaryPart) {}
Complex::Complex(double realPart) :real(realPart), imaginary(0){}
Complex::Complex():real(0), imaginary(0) {}

//operator '=='
bool operator ==(const Complex& C1, const Complex& C2) {
	if (C1.real == C2.real && C1.imaginary == C2.imaginary) {
		return true;
	}
	else {
		return false;
	}
 }

//operator '+'
const Complex operator +(const Complex& C1, const Complex& C2) {

 }

//operator '-' (two parameter/ Subtraction)
const Complex operator -(const Complex& C1, const Complex& C2) {

 }

//operator '-' (one parameter/ negative)
const Complex operator -(const Complex& C1) {

}

//operator '*'
const Complex operator *(const Complex& C1, const Complex& C2) {
	double ansreal = 0, ansimaginary = 0;
	ansreal += C1.real * C2.real;
	ansreal -= C1.imaginary * C2.imaginary;
	ansimaginary += C1.real * C2.imaginary;
	ansimaginary += C1.imaginary * C2.real;
	return Complex(ansreal, ansimaginary);
 }

//operator '<<' output a complex number
ostream& operator <<(ostream& outputStream, Complex& C1) {

 }

//operator '>>' input a Complex number
istream& operator >>(istream& inputStream, Complex& C1) {

 }
