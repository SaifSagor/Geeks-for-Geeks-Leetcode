/*						                                                Goal Parser Interpretation

You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.

Example 1:

Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".

Example 2:

Input: command = "G()()()()(al)"
Output: "Gooooal"

Example 3:

Input: command = "(al)G(al)()()G"
Output: "alGalooG"
 
Constraints:

1 <= command.length <= 100
command consists of "G", "()", and/or "(al)" in some order.

*/


//CODE

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	cin >> str;
	string ans = "";

	for(int i = 0; i <= str.size(); i++){

		if(str[i] == 'G'){
			ans.push_back('G');
		}
		else if(str[i] == '(' && str[i+1] == ')'){
			ans.push_back('o');
		}
		else if(str[i] == '(' && str[i+1] == 'a'){
			ans.push_back('a');
			ans.push_back('l');
		}
	}

	cout << ans << endl;

	return 0;
}
