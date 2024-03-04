/*
Q) Write a C++ function that takes 3 structures as parameters.
Consider the following structure definitions:

struct std{
int id;
char dept_code;
};

struct grade{
int id;
int mathgrade, compgrade;
float cgpa;
};

struct std_all{
int id;
char dept_code;
int mathgrade, compgrade;
float cgpa;
};

The function should get 3 arrays of the structures std,
grade and std_all. Then, by looking at the id's, it should merge the
information in the structures std and grade into std_all. Assume equal sizes.
*/

void std_allgrades(struct std a[], struct grade b[], struct std_all c[], int size)
{

}
