#include "Lab2.h"


/**
* LAB2 INSTRUCTIONS:
* Below are description of problems in vector arithmetic. Each problem has
* at least one or two functions associated with it (functions - not methods.
* there is not a class). There is a function call in the main for each one
* of the problems. For each problem, write the necessary code to solve it.
* All console output should be labeled. Do NOT simply print a number. Make
* sure there is text that indicates what the number is and possibly its
* significance.
*
* You may find it helpful to have the chapter 2 lecture notes handy as you
* work through the problems. As you are moving from problem to problem, you
* may want to comment out some of the function calls in the main so that you
* easily see the output for the current problem. Uncomment all function calls
* before turning in the lab. BasicIncludesAndDefines includes definitions of
* simple functions for printing vec2, vec3, and vec4 objects to the console.
*
* When you have completed all the problems, complete the following turning
* instructions:
*
*	1.	Copy the folder containing your solution to the desktop.
*	2.	Change the name of the folder to CSE287LabOne followed by your unique
*		identifier. For instance “CSE287LabOneBachmaer.”
*	3.	Open the solution. Make sure it still runs.
*	4.	Clean the solution by selecting Build->Clean Solution. (The will delete
*		all the intermediate temporary files that are part of your project and
*		reduce the size of your submission.)
*	5.	Zip up the solution folder using the standard windows compression tool.
*		(No 7zips, rars, etc.)
*	6.	Submit your zip archive of the solution through canvas.

*/


// Suppose x equals 45 degrees. Write a statement (without glm) that does the necessary 
// calculation to convert this value to radians. Print out the resulting 
// value. Write another statement that uses the correct glm function
// to convert x to radians. Print out the resulting value.
void problem1()
{
	std::cout << "Problem 1" << std::endl;

	double x = 45.0;
	// 0.0174533 is pi / 180 for the conversion
	x = x * .0174533;
	std::cout << "User result: " << x << std::endl;

	double y = 45.0;
	y = glm::radians(y);
	std::cout << "glm result: " << y << std::endl;
} // end Problem1

// Suppose x equals 2.0943951 radians. Write a statement (without glm) that does the 
// necessary calculation to convert this value to degrees. Print out the
// resulting value. Write another statement that uses the correct glm 
// function to convert x to degrees. Print out the resulting value.
// This website can be used to check calculations for this and the next few
// problems: http://www.rapidtables.com/calc/math/index.htm
void problem2()
{
	std::cout << "Problem 2" << std::endl;
	double x = 2.0943951;
	// 57.2958 is 180 / pi for the conversion 
	x = x * 57.2958;
	std::cout << "User result: " << x << std::endl;

	double y = 2.0943951;
	y = glm::degrees(y);
	std::cout << "glm result: " << y << std::endl;
} // end Problem2

// Suppose the cosine of an angle theta is 0.34202014332566873304409961468226.
// Use a trigometric function to determine theta. Print out the angle in 
// both degrees and radians.
void problem3()
{
	std::cout << "Problem 3" << std::endl;

	double cosTheta = 0.34202014332566873304409961468226;

} // end Problem3

// Suppose the vector v = [4 3]. Use the atan2 function
// to determine the angle that this vector makes with the x axis. Print 
// out the angle in degrees. Use the single argument atan function to 
// perform the same calculation. Print out this result as well.
void problem4()
{
	std::cout << "Problem 4" << std::endl;

	glm::vec2 v(4, 3);

} // end Problem4

// Suppose the vector v = [-4 -3]. Use the atan2 function
// to determine the angle that this vector makes with the x axis. Print 
// out the angle in degrees. Use the two argument atan function to 
// perform the same calculation. Print out this result as well. Is the
// result given by the single argument atan correct? Include a print
// statement stating either "correct" or "not correct."
void problem5()
{
	std::cout << "Problem 5" << std::endl;

	glm::vec2 v(-4, -3);

} // end Problem5

// Write a function that will calculate and return the area of a triangle
// when passed the lengths of the three sides. Call the function and print
// out the area for a triangle with side lengths of 7, 10, and 5.
// (To check your method, call triangleArea1 on 3, 4, 5. The result 
// should be 6.)
double triangleArea1(double a, double b, double c)
{

	return 0.0;

} // end triangleArea1

void problem6()
{
	std::cout << "Problem 6" << std::endl;

} // end Problem6

// Find the polar coordinates for the point p = (-4, 3) and print them out. (Hint: Calculate the
// length of the vector and use the atan2 function.)
// (If you want to check your calculations, try the same calculations on the point (5, -6).
// The result should be (7.81025, -0.876058).
void problem7()
{
	std::cout << "Problem 7" << std::endl;

	glm::vec2 p(-4, 3);

} // end Problem7

// Suppose the vector v = [4 -6 7]. Create three vectors: 
// 1. p, which is twice as long as v and points in the same direction as v
// 2. q, which has the same length as v and points in the opposite direction of v 
// 3. r, which is three quarters the length of v and points in the same direction as v
// Print out the results of each vector calculation.
void problem8()
{
	std::cout << "Problem 8" << std::endl;

	glm::vec3 v(4, -6, 7);

} // end Problem8

// Write a function that compares two vec3s for equality by comparing 
// individual components. It should return true if the vectors are equal 
// and false otherwise. Check for correctness by using equal and unequal
// vec3s. Print out the results. Vertify that the same results are obtained
// when using the overloaded '==' operator. Print out the results.
bool vectorEquality(const glm::vec3 & v, const glm::vec3 & w)
{

	return true;

} // end vectorEquality

void problem9()
{
	std::cout << "Problem 9" << std::endl;


} // end Problem9

// Write a function that calculates and returns the length of a vector. 
// Call the function on the vector v = [2 3 4]. Perform this same calculation
// using the glm length function. Print out the results of both calculations.
double myLength(const glm::vec3 & v)
{

	return 0.0;

} // end myLength

void problem10()
{
	std::cout << "Problem 10" << std::endl;

	glm::vec3 v(2, 3, 4);

} // end Problem10

// Write a function that calculates and returns the unit length version of a vec3
// that is received as an argument. Call the function on the vector v = [2 3 4]. 
// Perform this same calculation using the glm normalize function. Print out
// the results of both calculations.
glm::vec3 myUnitVector(const glm::vec3 & v)
{

	return glm::vec3(0, 0, 0);

} // end myUnitVector

void problem11()
{
	std::cout << "Problem 11" << std::endl;

	glm::vec3 v(2, 3, 4);

} // end Problem8

// Suppose the vector v = [-4 2 -3]. Create three vectors:
// 1. p, which points in the same direction, but has a length of one
// 2. q, which points in the same direction, but has a length of three
// 3. r, which points in the opposite direction and has a length of five
// Print out the results of each vector calculation.
// (Feel free to use the glm normalize function for this problem.)
void problem12()
{
	std::cout << "Problem 12" << std::endl;

	glm::vec3 v(-4, 2, -3);

} // end Problem12

// Suppose the vector v = [2 -6 3] and the vector w = [-4 3 10]
// Add the two vectors together using the overloaded glm addition operator. 
// Print the resulting sum.
void problem13()
{
	std::cout << "Problem 13" << std::endl;

	glm::vec3 v(2, -6, 3);
	glm::vec3 w(-4, 3, 10);

} // end Problem13

// Suppose someone walks three miles north and then seven miles west. 
// Assume they started at position (0,0). Assume the X axis points north.
// Use vector arithmetic to determine the coordinates of their finishing 
// point. Print the result. Also print a result that shows that is does 
// not matter whether they walk north or west first. You will want to use separate
// vectors to represent each walking direction.
void problem14()
{
	std::cout << "Problem 14" << std::endl;

	glm::vec2 position(0, 0);

} // end Problem14

// Suppose the person in the previous quesion starts at (3,4). What would
// their finishing point be? Print the result.
void problem15()
{
	std::cout << "Problem 15" << std::endl;

	glm::vec2 position(3, 4);

} // end Problem15

// Use two vectors to show that vector subtraction is not communitive.
// Print the vectors and the values that indicate the fact.
void problem16()
{
	std::cout << "Problem 16" << std::endl;


} // end Problem16

// Write a function that calculates the dot product of two vec3s and returns
// this scalar value as a double. Use the vectors v = [2 6 3] and w = [-4 3 10] 
// to show that your function produces the same value as the glm dot function.
// Print the results.
double myDot(const glm::vec3 a, const glm::vec3 b)
{

	return 0.0;

} // end myDot

void problem17()
{
	std::cout << "Problem 17" << std::endl;

	glm::vec3 v(2, 6, 3);
	glm::vec3 w(-4, 3, 10);

} // end Problem17

// Use the dot product to find the cosines of the angles that the vector 
// v = [-2 1 3] makes with each of the following vectors. Print out the
// values. 
//   x = [2 6 3] (result should be 0.419982)
//   w = [-4 3 10]
//   q = [3 0 0]
void problem18()
{
	std::cout << "Problem 18" << std::endl;

	glm::vec3 v(-2, 1, 3);

	glm::vec3 x(2, 6, 3);
	glm::vec3 w(-4, 3, 10);
	glm::vec3 q(3, 0, 0);

} // end Problem18

// Write a function that compares two vec3s. If they are: 
//   within 90 degrees of each other, return 1
//   perpendicular, return 0
//   more than 90 degrees apart, return -1 
// Do not use any trigometric functions.
// Use the following vectors to demonstrate that your
// function works:
//   v = [0 10 0]
//   w = [10 0 0]
//   x = [-1 9 0]
// v and w are perpendicular, v and x are within 90 degrees, and 
// w and x are more than 90 degrees apart.
// Print your results.
int vectorCompare(glm::vec3 a, glm::vec3 b)
{

	return 0;

}
void problem19()
{
	std::cout << "Problem 19" << std::endl;

	glm::vec3 v(0, 10, 0);
	glm::vec3 w(10, 0, 0);
	glm::vec3 x(-1, 9, 0);

} // end Problem19

// Write a function that finds the projection of one vector onto another and 
// returns it as a double. Use it to find the projection of v = [2 6 3] onto 
// w = [-4 3 10]. Print the result.
// (To check your method, call project for the values [3 4 5] onto [2 -2 3].
// The result should be 3.152963.)
double project(glm::vec3 from, glm::vec3 onto)
{

	return 0.0;

}
void problem20()
{
	std::cout << "Problem 20" << std::endl;

	glm::vec3 v(2, 6, 3);
	glm::vec3 w(-4, 3, 10);

} // end Problem20

// Take the cross product of the vectors v = [2 6 3] and w = [-4 3 10]. Use the glm cross
// product function. Print the result. Use the dot product to verify that the resulting
// product is perpendicular to each of the multiplicands. Print the result.
void problem21()
{
	std::cout << "Problem 21" << std::endl;

	glm::vec3 v(2, 6, 3);
	glm::vec3 w(-4, 3, 10);

} // end Problem21

// Calculate the cross product v x w and then w x v. Use the vectors v = [2 6 3] 
// and w = [-4 3 10]. Print each of the products. Verify that cross product is not
// commutitative by checking for equality or by adding the two products together 
// and checking the sum. Print the result.
void problem22()
{
	std::cout << "Problem 22" << std::endl;

	glm::vec3 v(2, 6, 3);
	glm::vec3 w(-4, 3, 10);

} // end Problem22

// Write a function that has three vec3 parameters. The parameters should give 
// three corners of a parallelogram in counter-clockwise order. In the function
// use the cross product to calculate the area of the parallelogram. Test the
// function with the following vertices: x = [0 2 0], y = [0 0 0], and z = [4 0 0]. Print the 
// result. Then test the function with another three vertices of your choosing.
// Print out this area as well. The returned areas should be positive for 
// vertices in counter clockwise order.
// (To check your method, call areaOfParallelogram with the values [0 3 0], [0 0 0], 
// and [3 0 0]. The result should be 9.)
double areaOfParallelogram(glm::vec3 a, glm::vec3 b, glm::vec3 c)
{

	return 0.0f;

}

void problem23()
{
	std::cout << "Problem 23" << std::endl;

	glm::vec3 x(0, 2, 0);
	glm::vec3 y(0, 0, 0);
	glm::vec3 z(4, 0, 0);

} // end Problem23

// Write a function that has three vec3 parameters. The parameters should give 
// three corners of a triangle in counter-clockwise order. In the function
// use the cross product to either calculate the area of the triangle, or call the 
// function you wrote for the previous quesion and multiply the returned area
// by one half. Test the function with the following vertices: x = [0 2 0],
// y = [0 0 0], and z = [4 0 0]. Print the result. Then test the function with another
// three vertices of your choosing. Print out this area as well. The returned 
// areas should be positive for vertices in counter clockwise order.
double triangleArea2(glm::vec3 a, glm::vec3 b, glm::vec3 c)
{

	return 0.0;

} // end triangleArea2

void problem24()
{
	std::cout << "Problem 24" << std::endl;

	glm::vec3 x(0, 2, 0);
	glm::vec3 y(0, 0, 0);
	glm::vec3 z(4, 0, 0);

} // end Problem24

// Write a function that has two vec3 parameters. The function should find and 
// return a unit length vector that points from the position described by 
// the first vec3 to the position described by the second vec3. Test the 
// function with the following vectors: x = [0 4 0] and y = [4 0 0]. Print the 
// result.
glm::vec3 findPointingVector(glm::vec3 first, glm::vec3 second)
{

	return glm::vec3(0, 0, 0);

} // end findPointingVector

void problem25()
{
	std::cout << "Problem 25" << std::endl;

	glm::vec3 x(0, 4, 0);
	glm::vec3 y(4, 0, 0);

} // end Problem25


int main(int argc, char** argv)
{
	// To keep the console open on shutdown, start the project with Ctrl+F5 instead of just F5.

	problem1();
	problem2();
	problem3();
	problem4();
	problem5();
	problem6();
	problem7();
	problem8();
	problem9();
	problem10();
	problem11();
	problem12();
	problem13();
	problem14();
	problem15();
	problem16();
	problem17();
	problem18();
	problem19();
	problem20();
	problem21();
	problem22();
	problem23();
	problem24();
	problem25();

	return 0;

} // end main