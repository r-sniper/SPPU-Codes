/*
Write C/C++ program to store marks scored for first test of subject 'Data Structures and
Algorithms' for N students. Compute
I. The average score of class
ii. Highest score and lowest score of class
iii. Marks scored by most of the students
iv. list of students who were absent for the test
*/

#include <iostream>
using namespace std;

float average (int arr[], int len)
{
  int sum = 0;
  for (int i = 0; i < len; i++)
  {
    if (arr[i] >= 0)
      sum = sum + arr[i];
  }
  float ans = (float) (sum) / len;
  return ans;
}

int min (int arr[], int len)
{
  int minimum = 99999;
  for (int i = 0; i < len; i++)
  {
    if (minimum > arr[i] && arr[i] >= 0)
      minimum = arr[i];
  }
  return minimum;
}

int max (int arr[], int len)
{
  int maximum = 0;
  for (int i = 0; i < len; i++)
  {
    if (arr[maximum] < arr[i] && arr[i] >= 0)
      maximum = i;
  }
  return maximum;
}

int marksByMost (int arr[], int len)
{
  int ans = 0;
  int count[101] = { 0 };
  for (int i = 0; i < len; i++)
  {
    if (arr[i] >= 0)
      count[arr[i]]++;
  }
  return max (count, 101);
}

int main ()
{
  int n;
  cout << "Enter number of Students\n";
  cin >> n;
  int marks[n];
  cout << "Start Entering marks\n";
  for (int i = 0; i < n; i++)
  {
    cin >> marks[i];
  }
  cout << "Average is " << average (marks, n) << endl;
  cout << "Highest Score = " << max (marks,
                                     n) << " and Lowest Score = " <<
       min (marks, n) << endl;
  cout << "Marks scored by most of the students = " << marksByMost (marks, n);
  return 0;
}
