#include <bits/stdc++.h>
using namespace std;
 
void RandomStringGenerator(char* code, int codeLength)
{
	char* box = "0123456789";
	int boxLength = strlen(box);
	
	for (int i = 0; i < codeLength; i++)
	{
		code[i] = box[rand() % boxLength];
	}
	code[codeLength] = '\0';
}
 
int main()
{
	ofstream fi ("test.inp");
	srand(time(0));
	int length2 = 100;
	char* code2 = new char[length2 + 1];
	RandomStringGenerator(code2, length2);
	fi << code2;
	delete[]code2;
 
	return 0;
}
