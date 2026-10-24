#include <iostream>
using namespace std;
struct student

{
 int roll;
 char name[20];
 float marks[3];
 float avg;
};
int main()

{
 int n;
cout << "enter the number of students::" <<
endl;
 cin >> n;
 student s[n];
 for (int i = 0; i < n; i++)
 {
cout <<"enter the roll number of student"<< i + 1 << "::" << endl;
 cin >> s[i].roll;
cout << "enter the name of student" << i
+ 1 << "::" << endl;
 cin >> s[i].name;
 cout << "enter the marks of 3 subjects of student" << i + 1 << "::" <<
endl;
for (int j = 0; j < 3; j++)
{
cin >> s[i].marks[j];
}
}
for (int i = 0; i < n; i++)
{ 
s[i].avg = (s[i].marks[0] +
s[i].marks[1] +
s[i].marks[2]) / 3;
} 
for(int i = 0; i < n; i++)
{
cout << "the average marks of " << s[i].name << " is " << s[i].avg << endl;
}
return 0;}