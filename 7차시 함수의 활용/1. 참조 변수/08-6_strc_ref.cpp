// strc_ref.cpp
#include <iostream>
#include <string>
using namespace std;
struct free_throws {
	string name;
	int made;
	int attempts;
	float percent;
};
void display(const free_throws* ft);
void set_pc(free_throws& ft);
free_throws&accumulate(free_throws&target, const free_throws& source);
int main(void) {
	free_throws one = {"Ifelsa Branch", 13, 14};
	free_throws two = {"Andor Knott", 10, 16};
	free_throws three = {"Minnie Max", 7, 9};
	free_throws four = {"Whily Looper", 5, 9};
	free_throws five = {"Long Long", 6, 14};
	free_throws team = {"Throwgoods", 0, 0};

	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(teamp);
}