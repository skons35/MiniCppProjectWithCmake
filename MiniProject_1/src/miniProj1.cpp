// miniProj1.cpp : Defines the entry point for the application.
//

//
// add OpenCV headers you need here
//

#include "pseudoFunctions.h"

using namespace std;

int main()
{
	cout << "miniproj1 started." << endl;
	
	// add your OpenCV's dependant call here, .... 
	
	// let's call our pseudo library function :
	bool testRet = pseudoFunction();
	
	cout << "miniproj1 pseudoFunction() returns : "<< testRet << endl;
	
	return 0;
}
