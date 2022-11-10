#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

//1.
//Declaring a function for calculating the area of the trapezoid
float s_trapezoid(float b1, float b2, float h)
{
	//declaring a variable where we make the necessary calculations
	int answer_1 = ((b1 + b2) / 2) * h;
	//Returning the value
	return answer_1;
}

//2.
int p_circle(int r) 
{
	return 2 * M_PI * r; //To count, using the value from the library 'math.h'
}
float s_circle(int r)
{
	return M_PI *(r * r);//To count, using the value from the library 'math.h'
}

//3. 
int s_triagle(int k1, int k2) 
{
	return k1 * k2 * 1 / 2;
};
int hypotenuse(int k1, int k2) 
{
	return sqrt(k1 * k1 + k2 * k2);
}
//4.
int add_f(int num) 
{
	int length_num = 4;
	int num_z = 0;
	int sum = 0;
	while(length_num != 0)
	{
		int num_z = num % 10;
		num /= 10;
		length_num--;
		sum = sum + num_z;
	}
	return sum;
}
//5.
float decToPolR(float x, float y)
{
	return sqrt(x * x + y * y);
}
float decToPolC(float x, float y)
{
	return atan(y / x);//corner
}
//6.
float polToDecX(float r2, float c2)
{
	return r2*cos(c2);
}
float polToDecY(float r2, float c2)
{
	return r2*sin(c2);//corner
}

int main() 
{
	//Task 1,setting the value of variables
	std::cout << "Task 1. Enter the bases and height of the trapezoid (using 'Enter'): ";
	float a1; //Declaring variables with information about the bases and height of the trapezoid
	float a2;
	float t;
	std::cin >> a1 >> a2 >> t;
	std::cout << "The square of trapezoid = " << s_trapezoid(a1, a2, t) << std::endl; 
	//Task 2
	std::cout << "Task 2. The perimeter of a circle with a radius of 5 = " << p_circle(5) << std::endl;
	std::cout << "The square of a circle with a radius of 5 = " << s_circle(5) << std::endl;
	// Task 3
	std::cout << "Task 3. The square of the right triagle with sides 4 and 5 = " << s_triagle(4, 5) << std::endl;
	std::cout << "The hypotenuse of the right triagle with sides 4 and 5 = " << hypotenuse(4, 5) << std::endl;
	//Task 4
	std::cout << "Task 4. Enter a four-digit number ";
	int num_f;
	std::cin >> num_f;
	std::cout << "Result of the task 4: " << add_f(num_f) << std::endl;
	//Task 5
	std::cout << "Task 5. The result of converting Cartesian coordinates (4,8) to polar coordinates:(" << decToPolC(4, 8) << "," << decToPolR(4,8)<< ")" << std::endl;
	//Task 6
	std::cout << "Task 6. The result of converting polar coordinates (45,1.04) to Cartesian coordinates:(" << polToDecX(45, 1.04) << "," << polToDecY(45, 1.04) << ")" << std::endl;

	return 0;
}