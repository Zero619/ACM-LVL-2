#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	string fix;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
			if (str[i + 1] == ' ')
				continue;


		   if (str[i] == ' ')
			{
				if (str[i + 1] == ',' || str[i + 1] == '.' || str[i + 1] == '!' || str[i + 1] == '?')
				{
					fix += str[i + 1];
					if(i!=str.size()-2)
						if(str[i+2]!=' ')
					fix += ' ';
					i++;
					continue;
				}
			}
		   if (str[i] == ',' || str[i] == '.' || str[i] == '!' || str[i] == '?')
		   {
			   fix += str[i];
			   if (i !=str.size() - 1)
				   if (str[i + 1] != ' ')
			   fix += ' ';
			   continue;
		   }



		  
				fix += str[i];
	}
	cout << fix << endl;
		

}