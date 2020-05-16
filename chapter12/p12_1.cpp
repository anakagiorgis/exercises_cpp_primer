#include <string>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
  int n = 10; // number of strings to be created
  string *const p = new string[n]; // construct n empty strings
  // constant pointer to string is p. new allocates memory to string[n];
  // which creates n empty strings and allocates them to constant pointer
  // p.
  string s; // initialize empty string
  string *q = p; // q now points to the first string.
  // this is because q is a pointer to the const pointer p which is
  // is the const pointer to the first element of the allocated array
  // of n empty strings.
  while (cin >> s && q != p + n) // while new string inserted into console
  // and q points to the first, second, up to end element of allocated string
  // array of n empty strings
  {
    *q++ = s; // assign the new string to *q, i.e. dereferenced q puts
    // element new string to allocated n strings and we go forward by ++
  }
  const size_t size = q - p; // note how many strings we read
  // use the array
  for (int i=0; i!=size; ++i)
  {
    cout << p[i] << endl;
  }
  delete[] p; // p points to an array; must remember to delete.
  return 0;
}
