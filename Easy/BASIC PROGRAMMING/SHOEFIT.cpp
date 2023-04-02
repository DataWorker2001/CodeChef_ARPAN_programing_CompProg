#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) 
	{
	    int A, B, C;
	    cin>>A>>B>>C;
	    int S = A+B+C;
	    if(S>0 && S<3)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	
	return 0;
}

//   (L and R) 0 and 1 must fmin=1
   
//   0 0 0 = 0
   
//   0 1 0 = 1
   
//       0<S<3 --> 1- High Signal (Yes-T-1)
//           else ->0 -Low (N0-F-0)
//         1, 2
//   0 1 1 = 2
   
//   1 1 1 = 3