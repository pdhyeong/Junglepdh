#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
map<string,pair<string,string> > mymap;
void preorder(string root){
    if(root == "."){
        return;
    }
    cout << root;
    preorder(mymap[root].first);
    preorder(mymap[root].second);
}
void inorder(string root){
    if(root == "."){
        return;
    }
    inorder(mymap[root].first);
    cout << root;
    inorder(mymap[root].second);
}
void postorder(string root){
    if(root == "."){
        return;
    }
    postorder(mymap[root].first);
    postorder(mymap[root].second);
    cout << root;
}
int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        string root, left,right;
        cin >> root >> left >> right;
        mymap[root] = make_pair(left,right);
    }
    preorder("A");
    cout << '\n';
    inorder("A");
    cout << '\n';
    postorder("A");
    return 0;
}