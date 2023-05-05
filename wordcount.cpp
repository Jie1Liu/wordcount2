#include<bits/stdc++.h>
using namespace std;
string s;
string t;
void solve1()
{
	 ifstream file(s);
    string text;
    if (file.is_open()) {
      
        getline(file, text, '\0');
        
        regex pattern("\\w+");
        sregex_iterator it(text.begin(), text.end(), pattern);
        sregex_iterator end;
        vector<string> words;
        while (it != end) {
            words.push_back(it->str());
            ++it;
        }
       
        int word_count = words.size();
        cout << "单词数量为: " << word_count << endl;
    }
    file.close();
}
int main() {
	cin>>t;
	cin>>s;
   	if(t=="-w")
   	{
   		solve1();
	}
	else
	{
		 cout << "字符数量为: " << s.size() << endl;
	}
    return 0;
}

