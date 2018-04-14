#include<cstdio>
#include<cstring>
#include<cstdlib>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
using namespace std;
int num, ask;
int map[10][10];

int Judge(int x, int y, int t)
{
	int k = map[x][y];
	map[x][y] = t;
	int ans = 1;
	int cha[10];

	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int k = map[i][j];
			cha[k]++;
		}
		for (int i = 1; i <= 9; i++)
		{
			if (cha[i] == 2)ans = 0;
		}
		if (ans == 0)break;
		memset(cha, 0, sizeof(cha));
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
		for (int i = 1; i <= 9; i++)
		{
			if (cha[i] == 2)ans = 0;
		}
		if (ans == 0)break;
		memset(cha, 0, sizeof(cha));
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 4; i <= 6; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 4; i <= 6; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 4; i <= 6; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 7; i <= 9; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 7; i <= 9; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 7; i <= 9; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			int k = map[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[x][y] = k;
		return 0;
	}
	map[x][y] = k;

	return 1;


}
void Search(int x, int y)
{
	int k = 0;
	if (num >= ask)
		return;
	if (x > 9)
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				cout << map[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		num++;
		return;
	}
	int x_next ;
	int y_next;
	if (y == 9)
	{
		 x_next = x + 1;
		 y_next = 1;
	}
	else
	{
		 x_next = x;
		 y_next = y + 1;
	}
	for ( k = 1; k <= 9; k++)
	{
		if (num >= ask)return;
		if (Judge(x, y, k) == 1)
		{
			map[x][y] = k;
			
			Search(x_next, y_next);
			map[x][y] = 0;
		}

	}


	map[x][y] = 0; return;
}
int main()
{

	cin >> ask;
	memset(map, 0, sizeof(map));
	map[1][1] = 2;
	Search(1, 2);
	system("pause");
	return 0;
}