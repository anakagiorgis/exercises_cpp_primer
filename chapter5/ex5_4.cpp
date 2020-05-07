#include <iostream>
using std::cin; using std::cout; using std::endl;
int main()
{
char ch;
unsigned aCnt=0, oCnt=0, uCnt=0, eCnt=0, iCnt=0;
while (cin >> ch)
{
	switch (ch)
	{
		case 'a':
			++aCnt;
			break;
		case 'A':
			++aCnt;
			break;
		case 'o':
			++oCnt;
			break;
		case 'O':
			++oCnt;
			break;
		case 'u':
			++uCnt;
			break;
		case 'U':
			++uCnt;
			break;
		case 'e':
			++eCnt;
			break;
		case 'E':
			++eCnt;
			break;
		case 'i':
			++iCnt;
			break;
		case 'I':
			++iCnt;
			break;
	}
	if (ch == '0')
	{
		break;
	}
}
cout << "The vowel 'a' appears \t" << aCnt << "\t times." << endl;
cout << "The vowel 'o' appears \t" << oCnt << "\t times." << endl;
cout << "The vowel 'e' appears \t" << eCnt << "\t times." << endl;
cout << "The vowel 'i' appears \t" << iCnt << "\t times." << endl;
cout << "The vowel 'u' appears \t" << uCnt << "\t times." << endl;
return 0;
}
