#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("abha");
    q.push("sobha");
    q.push("mabha");

    int size = q.size();
    cout << size << endl;


    cout << q.front() << endl;
}