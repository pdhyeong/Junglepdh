#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<string> st;
unordered_map<string,int> mymap;
string check(int start){
    string s = "";
    for(int i = 0;i<5;i++){
        for(int j = start;j<3+start;j++){
            s += st[i][j];
        }
        s+='\n';
    }
    return s;
}
int main(){

    int m_length = 0;
    for(int i = 0;i<5;i++){
        string s;
        getline(cin,s);
        st.push_back(s);
        m_length = m_length > s.size() ? m_length : s.size();
    }

    /*

    ***
    * *
    * *
    * *
    ***


      *
      *
      *
      *
      *
    
    
    ***
      *
    ***
    *
    ***

    ***
      *
    ***
      *
    ***


    * *
    * *
    ***
      *
      * 
    
    ***
    *
    ***
      *
    ***


    ***
    *
    ***
    * *
    ***

    ***
      *
      * 
      * 
      * 
    

    ***
    * *
    ***
    * *
    ***

    ***
    * *
    ***
      *
    ***    
    */
   string total = "";
   bool flag = false;
    for(int i = 0;i<m_length;i+=4){
        string s = check(i);
        if(s == "***\n* *\n* *\n* *\n***\n"){
            total += "0";
        }
        else if(s == "  *\n  *\n  *\n  *\n  *\n"){
            total += "1";
        }
        else if(s == "***\n  *\n***\n*  \n***\n"){
            total += "2";
        }
        else if(s == "***\n  *\n***\n  *\n***\n"){
            total += "3";
        }
        else if(s == "* *\n* *\n***\n  *\n  *\n"){
            total += "4";
        }
        else if(s == "***\n*  \n***\n  *\n***\n"){
            total += "5";
        }
        else if(s == "***\n*  \n***\n* *\n***\n"){
            total += "6";
        }
        else if(s == "***\n  *\n  *\n  *\n  *\n"){
            total += "7";
        }
        else if(s == "***\n* *\n***\n* *\n***\n"){
            total += "8";
        }
        else if(s == "***\n* *\n***\n  *\n***\n"){
            total += "9";
        }
        else{
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "BOOM!!";
    }
    else{
        int k = stoi(total);
        if(k % 6 == 0){
            cout << "BEER!!";
        }else{
            cout << "BOOM!!";
        }
    }
    return 0;
}