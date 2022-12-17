#include <iostream>

using namespace std;	
	
int main()
{
    int M, N;	
    cin >> M >> N;
         int a[M][N];
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j){
		  cout<<"["<<i<<" "<<j<<"]=";
            cin >> a[i][j];
}
    cout << "M?ng dã nh?p vào là: " << endl;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
            cout << a[i][j] << ' ';

        cout << endl;
    }
}
