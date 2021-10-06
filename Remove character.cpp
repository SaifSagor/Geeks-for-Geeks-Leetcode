/*
							                                                          Remove character 

Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).
 

Example 1:

Input:
string1 = "computer"
string2 = "cat"

Output: "ompuer"

Explanation: After removing characters(c, a, t)
from string1 we get "ompuer".

Example 2:

Input:
string1 = "occurrence"
string2 = "car"

Output: "ouene"

Explanation: After removing characters
(c, a, r) from string1 we get "ouene".
 
Your Task:  
You dont need to read input or print anything. Complete the function removeChars() which takes string1 and string2 as input parameter and returns the result string after removing characters from string2  from string1.

Constraints:
1 <= |String1| , |String2| <= 50

*/


// CODE

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str1;
	string str2;
	string str;

	cin >> str1 >> str2;

	for(int i = 0; i < str1.size(); i++){

		bool flag = true;

		for(int j = 0; j < str2.size(); j++){

			if(str1[i] == str2[j]){
				flag = false;
			}
		}

		if(flag == true){
			str.push_back(str1[i]);
		}

	}

	cout << str << endl;

	return 0;
}
