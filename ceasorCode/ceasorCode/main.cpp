#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
	string answer = "";
	for (char i : s)
	{
		int askii = int(i);
		if (askii != 32)
		{
			if ( askii>64 && askii < 91 && askii + n>90)
			{//A~Z 인데 오버되는 경우.
				askii -= 90;
				askii += 64;
				askii += n;
			}
			else if (askii + n > 122 && askii>96 && askii<123)
			{//a~z인데 오버되는 경우.
				askii -= 122;
				askii += 96;
				askii += n;
			}
			else askii += n;
		}
		else askii = 32;
		answer += (char)askii;
	}

	return answer;
}
//A=65, Z=90, a=97, z=122;