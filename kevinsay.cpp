#include <iostream>
#include <string>
using namespace std;

void printKevin(string, int);
int main(int argc, char const *argv[])
{
	if (argc<2)
	{
		cerr<<"You have not given any argument!"<<'\n';
		return 1;
	}
	string kevinsay;
	for (int i=1; i<argc; i++){kevinsay+=argv[i]; if(i<(argc-1)){kevinsay+=" ";}};
	int length=kevinsay.size();
	printKevin(kevinsay, length);
	return 0;
}

void printKevin(string text, int n){
	cout<<' '<<string(n, '_')<<'\n';
	cout<<'('<<text<<')'<<'\n';
	cout<<' '<<string(n, '-')<<'\n';
	cout<<"    \\   ^__^"<<'\n';
    cout<<"     \\  (oo)\\_______"<<'\n';
    cout<<"        (__)\\       )\\/\\"<<'\n';
    cout<<"            ||----w |"<<'\n';
    cout<<"            ||     ||"<<'\n';
}