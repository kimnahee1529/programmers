https://programmers.co.kr/learn/courses/30/lessons/42840#qna
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <array>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int max=0;
    int s1=0,s2=0,s3=0;
    array<int, 5> n1={1,2,3,4,5};
    array<int, 8> n2={2,1,2,3,2,4,2,5};
    array<int, 10> n3={3,3,1,1,2,2,4,4,5,5};
    for(int a=0,i=0; i<answers.size(); a++,i++){
        if(n1.size()>=a+1){
            if(n1[a]==answers.at(i)){
                s1++;
            }
        }else{
            a=0;
            if(n1[a]==answers.at(i)){
                s1++;
            }
        }
    }
     for(int b=0,i=0; i<answers.size(); b++,i++) {     
        if(n2.size()>=b+1){
            if(n2[b]==answers.at(i)){
                s2++;
            }
        }else{
            b=0;
            if(n2[b]==answers.at(i)){
                s2++;
            }
        }
     }
    for(int c=0,i=0; i<answers.size(); c++,i++){
       if(n3.size()>=c+1){
            if(n3[c]==answers.at(i)){
                s3++;
            }
        }else{
            c=0;
            if(n3[c]==answers.at(i)){
                s3++;
            }
        }
    }
    
    if(s1>s2){
        if(s1>s3){
            answer.push_back(1);
        }
        else if(s1==s3){
            answer.push_back(1);
            answer.push_back(3);
        }
        else
            answer.push_back(3);
    }
    else if(s2>s1){
        if(s2>s3)
            answer.push_back(2);
        else if(s2==s3){
            answer.push_back(2);
            answer.push_back(3);
        }
        else
            answer.push_back(3);
    }
    else if(s1==s2){
        if(s2==s3){
            answer.push_back(1);
            answer.push_back(2);
            answer.push_back(3);
        }
        else if(s1>s3){
            answer.push_back(1);
            answer.push_back(2);
        }
        else
            answer.push_back(3);
    }
    sort(answer.begin(),answer.end());
    cout<<"수포자1은 문제를 "<<s1<<" 개 맞췄습니다."<<endl;
    cout<<"수포자2은 문제를 "<<s2<<" 개 맞췄습니다."<<endl;
    cout<<"수포자3은 문제를 "<<s3<<" 개 맞췄습니다."<<endl;
   
    if(answer.size()<4){    
        int a=3;
        if(answer.size()<3){
            a=2;
            if(answer.size()<2){
                a=1;
            }
            cout<<"가장 문제를 많이 맞힌 사람은 ";
            for(int i=0; i<a; i++){
            cout<<"수포자 "<<answer.at(i)<<" ";
            }
        }
        if(s1==s2 && s2==s3){
            cout<<"모든 사람이 "<<s1<<"문제씩을 맞췄습니다.";
        }
    }
    return answer;
}
