/*return the number of rooms required for the M no of boys and N number of girls f one room consists of K number of students provided girls and
boys cant stay in the same room */
#include <iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T>0)
	{
		int N,M,K;
		cin>>N>>M>>K;
		int rooms=0;
		int room_b=N/K;
		if(N%K!=0)
		{
			room_b++;
		}
		int room_g=M/K;
		if(M%K!=0)
		{
			room_g++;
		}
		rooms=room_b+room_g;
		cout<<rooms<<endl;
		T--;
	}
	return 0;
}
