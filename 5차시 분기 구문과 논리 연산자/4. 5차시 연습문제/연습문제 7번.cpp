// 연습문제 7번.cpp
#include <iostream>
using namespace std;
int main(void) {
	char ch[50];
	cin.get(ch, 50);
	int i;
	int count1 = 0;
	int j = 0;
	for (i=0; ch[i]!='\0'; i++) {
		cout << ch[i];
		if (ch[i]==' '){
			if (ch[j]=='a' || ch[j]=='i' || ch[j]=='o' || ch[j]=='u' || ch[j]=='e')
				count1+=1;
			cout << endl;
			j = i+1;
			continue;
		}
	}
	cout << endl << count1 << endl;
	return 0;
}