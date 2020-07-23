//https://programmers.co.kr/learn/courses/30/lessons/42748?language=cpp

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> n;
	for (int a = 0; a < commands.size(); a++) {
		for (int i = (commands[a].at(0)-1); i < commands[a].at(1);  i++) {
			n.push_back(array.at(i));
		}
		sort(n.begin(), n.end());
		answer.push_back(n.at((commands[a].at(2))-1));
        n.clear();
	}
	return answer;
}
