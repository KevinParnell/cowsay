#include <iostream>
#include <string>
using namespace std;

void printCow(string, int);
int main(int argc, char const *argv[])
{
	if (argc<2)
	{
		cerr<<"You have not given any argument!"<<'\n';
		return 1;
	}
	string cowsay;
	for (int i=1; i<argc; i++){cowsay+=argv[i]; if(i<(argc-1)){cowsay+=" ";}};
	int length=cowsay.size();
	printCow(cowsay, length);
	return 0;
}

void printCow(string text, int n){
	cout<<' '<<string(n, '_')<<'\n';
	cout<<'('<<text<<')'<<'\n';
	cout<<' '<<string(n, '-')<<'\n';
	cout<<"    \\   ^__^"<<'\n';
    cout<<"     \\  (oo)\\_______"<<'\n';
    cout<<"        (__)\\       )\\/\\"<<'\n';
    cout<<"            ||----w |"<<'\n';
    cout<<"            ||     ||"<<'\n';
}