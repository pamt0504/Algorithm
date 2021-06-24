#include <bits/stdc++.h>
using namespace std;
void RandomStringGenerator(char* code, int codeLength)
{
	char* box = "LR";
	int boxLength = strlen(box);
	
	for (int i = 0; i < codeLength; i++)
	{
		code[i] = box[rand() % boxLength];
	}
	code[codeLength] = '\0';
}
 
int main()
{
	srand(time(0));
	ofstream fi ("test10/ROBOT.INP");
	//ofstream fo ("test01/ROBOT.OUT");
	int length = 99999;
	char* code = new char[length + 1];
	RandomStringGenerator(code, length);
	fi << code;
	delete[]code;
	return 0;
}
