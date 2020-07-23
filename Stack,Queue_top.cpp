//https://programmers.co.kr/learn/courses/30/lessons/42588?language=cpp

#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    stack<int> S;
    for(int i=0; i<heights.size(); i++){
        S.push(heights.at(i));
        for(int j=i-1; j>=0; j--){
            S.push(heights.at(j));
            if(S.top()>heights.at(i)){
                answer.push_back(j+1);
                S.pop();
                break;
            }
            else
                S.pop();
        }
        S.pop();
        if(answer.size()!=i+1)
            answer.push_back(0);
    }
    return answer;
}

