#include<bits/stdc++.h>
using namespace std;
long long int transfer_count=0;
void tower(int n,char frompeg,char topeg,char auxpeg)
{
    transfer_count++;
    if(n==1)
    {
    	//cout<<"Move Disk 1 frompeg "<<frompeg<<" to peg "<<topeg<<endl;
        return;
    }
	tower(n-1,frompeg,auxpeg,topeg);
	//cout<<"Move Disk "<<n<<" from peg "<<frompeg<<" to peg "<<topeg<<endl;
    tower(n-1,auxpeg,topeg,frompeg);
     
}
int main()
{
    int n;
	cout<<"\n Enter the number of disk : ";
    cin>>n;
	clock_t start,end;
	start = clock();
	tower(n,'A','C','B');
	end = clock();    
    cout<<"\n Number of Valid Disk Movements = "<<transfer_count<<endl;
    cout<<"\n  TIME OF EXECUTION  IS: "<<((double)end - (double)start)/CLOCKS_PER_SEC;
    return 0;
}
