#include <iostream>
#define max 15

using namespace std; 
int n, x, y;		
int a[8]= {2,1,-1,-2,-2,-1,1,2};
int b[8]= {1,2,2,1,-1,-2,-2,-1};
int flag[max+1][max+1];
	
void nhap()
{
	cout << "Nhap vao kich thuoc ban co n: ";
	cin >> n;
	cout <<"Nhap vao vi tri xuat phat (x, y): ";
	cin >> x >> y;
    
		//Khoitao
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
        			flag[i][j] = 0;
    		flag[x][y] = 1;
}

void xuat()
{	
    		for(int i = 1; i <= n; i++)
    		{
    			for(int j = 1; j <= n; j++)
					cout << flag[i][j] << "\t";
    			cout << "\n";
    		}	
}
int  quaylui(int i, int x, int y)
{
    		for(int j = 0; j < 8; j++)
    		{
        int u, v;
        u = x + a[j];
        v = y + b[j];
        if ((u > 0 && u <= n) && (v > 0 && v <= n) && flag[u][v] == 0)
        {
        	flag[u][v] = i;
        	if (i == (n * n))
        	{
        		xuat();
        		exit(0);
        	}
        	else
        	{
        		quaylui(i + 1, u, v);
        		flag[u][v] = 0;
           	}
        }
    }
    return 0;
}
int main()
{
    		nhap();
    		quaylui(2, x, y);     
    		return 0;
}

