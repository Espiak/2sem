#include<iostream>
#include<string>

#include<set>
#include<unordered_set>

#include<map>
#include<unordered_map>

using std::string;

int main(int argc,char* argv[]){

    string test = argc[0];
    int num = std::stoi(argv[1]);

    string filename = "data.txt";
    string prefix = "ALG_";

    for ( i = 0; i < count; i++)
    {
        /* code */
    }
    


    queue<int> myQ;
    myQ.push(1);
    myQ.push(11);
    myQ.push(111);

    while (not myQ.empty())
    {
        cout << myStack.top() << "\n"
        myStack.pop();

    }
    set<char> mySet = {'1','a','q'}
    mySet.insert('n');
    mySet.insert('n');
    mySet.insert('a');
    for (const auto item : mySet)
    {
       cout << item << "";
    }
    cout << "\n";
    cout << mySet.count('a') << "" << mySet.count("\n")<<"\n";    
    map<string ,string> myDict = {
        {"dog","pes"}
        {"cat","macka"}
    }

    myDict["mouse"] ="mys";
    cout <<myDict["doga"] <<"\n";

    for (const auto& [key, value] : myDict)
    {
        cout << key << "->" << value << "\n"
    }
    



    return 0;
}