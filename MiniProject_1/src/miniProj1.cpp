// miniProj1.cpp : Defines the entry point for the application.
//

#include "pseudoFunctions.h"

using namespace std;

int main()
{
	cout << "miniproj1 started." << endl;
	
	bool testRet = pseudoFunction();
	
	cout << "miniproj1 pseudoFunction() returns : "<< testRet << endl;
	
	return 0;
}
