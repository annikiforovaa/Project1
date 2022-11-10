//task 7


double discriminant(double a, double b, double c) 
{
	double d = b * b - 4 * a * c; 
	double q = b >= 0 ? (-b - sqrt(d)) / 2 : (-b + sqrt(d)) / 2;
	double x1 = q / a;
	double x2 = c / q;
	return x1;
}

int main
{
	std::cout << discriminant(1,2,3);
	return 0;
}