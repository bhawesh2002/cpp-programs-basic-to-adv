#include<iostream>
#include<cmath>
class Complex
{
float real;
float imaginary;

public:
Complex ();
Complex (float,float);
Complex operator+ (const Complex&);
Complex operator- (const Complex&);
Complex operator* (const Complex&);
Complex operator/ (const Complex&);
friend std::ostream &operator<<(std::ostream &, const Complex&);
void display ();// another method to display complex number
};
Complex::Complex()
{
this->real=0;
this->imaginary=0;
}
Complex::Complex(float _real,float _imaginary)
{
this->real=_real;
this->imaginary=_imaginary;
}
Complex Complex::operator+(const Complex&c)
{
return Complex (this->real+c.real, this->imaginary+c.imaginary);
}
Complex Complex::operator-(const Complex&c)
{
return Complex (this->real-c.real, this->imaginary-c.imaginary);
}
Complex Complex::operator*(const Complex&c)
{
float real = this->real*c.real - this->imaginary*c.imaginary;
float imaginary = this->real*c.imaginary + c.real*this->imaginary;
return Complex (real,imaginary);
}
Complex Complex::operator/(const Complex &c)
{
float denominator =c.real *c.real + c.imaginary *c.imaginary;
float real = (this->real*c.real+this->imaginary * c.imaginary)/ denominator;
float imaginary = (-this->real*c.imaginary + this->imaginary* c.real)/denominator;
return Complex (real,imaginary);
}
std::ostream &operator<<(std::ostream& output,const Complex &c)
{
             output <<c.real <<(c.imaginary<0 ? "-i":"+i")<< abs(c.imaginary);
             return output;
}
void Complex::display()
{
    std::cout<<this->real<<(this->imaginary <0? "-i" : "+i")  <<abs(this->imaginary)<<
    std::endl;
}
int main()
{
    Complex c1(1,1);
    std::cout<<c1<<std::endl;
    Complex c2(3,6);
    std::cout<<c2<<std::endl;
    Complex sum = c1 + c2;
    std::cout<<"Addition result:"<<sum<<std::endl;
    Complex sub = c2-c1;
    std::cout<<"Subtracation result"<<sub<<std::endl;
    Complex mul =c1*c2;
    std::cout<<"Multiplication result"<<mul<<std::endl;
    Complex div =c2/c1;
    std::cout<<"Division result"<<div<<std::endl;
    return 0;
}
