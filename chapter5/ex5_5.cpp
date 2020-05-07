#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
char ch;
string buffer;
unsigned aCnt=0, oCnt=0, uCnt=0, iCnt=0, eCnt=0, ffCnt=0, flCnt=0, fiCnt=0;
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
			if (buffer == "f")
			{
				buffer += ch;
				++fiCnt;
				buffer = "";
			}
			break;
		case 'I':
			++iCnt;
			break;
		case 'f':
			if (buffer == "f")
			{
				buffer += ch;
				++ffCnt;
				buffer = "";
			}
			else if (buffer.size() == 0)
			{
				buffer += ch;
			}
			break;
		case 'l':
			if (buffer == "f")
			{
				buffer += ch;
				++flCnt;
				buffer = "";
			}
			break;
	}
	if (ch == '0')
	{
		break;
	}
}
cout << "'a' appears \t" << aCnt << "\t times" << endl;
cout << "'o' appears \t" << oCnt << "\t times" << endl;
cout << "'u' appears \t" << uCnt << "\t times" << endl;
cout << "'e' appears \t" << eCnt << "\t times" << endl;
cout << "'i' appears \t" << iCnt << "\t times" << endl;
cout << "'ff' appears \t" << ffCnt << "\t times" << endl;
cout << "'fl' appears \t" << flCnt << "\t times" << endl;
cout << "'fi' appears \t" << fiCnt << "\t times" << endl;
return 0;
}
