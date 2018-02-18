/*
Chef has obtained the results of a past Cook-Off. He wants to estimate the skill level of each contestant. The contestants can be classified with high probability (w.h.p.) based on the number of solved problems:

A contestant that solved exactly 0 problems is a beginner.
A contestant that solved exactly 1 problem is a junior developer.
A contestant that solved exactly 2 problems is a middle developer.
A contestant that solved exactly 3 problems is a senior developer.
A contestant that solved exactly 4 problems is a hacker.
A contestant that solved all five problems is Jeff Dean.
Please help Chef to identify the programming level of each participant.

Input
The first line of the input contains a single integer N denoting the number of competitors.
N lines follow. The i-th of these lines contains five space-separated integers Ai, 1, Ai, 2, Ai, 3, Ai, 4, Ai, 5. The j-th of these integers (1 ≤ j ≤ 5) is 1 if the i-th contestant solved the j-th problem and 0 otherwise.
Output
For each participant, print a single line containing one string denoting Chef's classification of that contestant — one of the strings "Beginner", "Junior Developer", "Middle Developer", "Senior Developer", "Hacker", "Jeff Dean" (without quotes).

Constraints
1 ≤ N ≤ 5000
0 ≤ Ai, j ≤ 1 for each valid i, j
Example
Input:

7
0 0 0 0 0
0 1 0 1 0
0 0 1 0 0
1 1 1 1 1
0 1 1 1 0
0 1 1 1 1
1 1 1 1 0

Output:

Beginner
Middle Developer
Junior Developer
Jeff Dean
Senior Developer
Hacker
Hacker
Explanation
The first contestant has no solved problems, therefore he is a beginner. The second contestant solved 2 problems (the second and fourth problem), therefore he has the skills of a middle developer. The third contestant solved 1 problem, therefore he's at the expected level of a junior developer. The fourth contestant solved 5 problems — we can guess it was Jeff Dean. The fifth contestant solved 3 problems, so he is a senior developer. And the last two contestants should be hackers because they solved exactly 4 problems each.
*/

#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
// print from index 1 to n
int main() {
	int t;
	cin >> t;
	while (t--) {
		int q=0;
		bool t;
		for(int i=0;i<5;i++){
			cin>>t;
			if(t==1)q++;
		}
		switch(q){
			case 0:cout<<"Beginner";break;
			case 1:cout<<"Junior Developer";break;
			case 2:cout<<"Middle Developer";break;
			case 3:cout<<"Senior Developer";break;
			case 4:cout<<"Hacker";break;
			default:cout<<"Jeff Dean";break;
		}
		cout << "\n";

	}
}
