//#include<iostream>
//#include<vector>
//using namespace std;
//void max(int** p)
//{
//	vector<int>K;
//	int value = p[0][1];int id = 1;int temp = 0;
//	for (int i = 1;i < 5;i++)
//	{
//		if (p[i][1] > value)
//		{
//			value = p[i][1];id = i + 1;
//		}
//	}
//	for (int i = 0;i < 5;i++)
//	{
//		if (p[i][1] == value)
//		{
//			temp++;K.push_back(i + 1);
//		}
//	}
//	cout << "��߷���" << temp << "λ���ֱ���";
//	for (int i = 0;i < temp;i++)
//	{
//		cout << "ѧ��" << K[i] << "������" << value;
//	}
//}
//int main()
//{
//	int** p = new int* [5];
//	for (int i = 0;i < 5;i++)
//	{
//		p[i] = new int[2];
//		p[i][0] = i + 1;
//		cout << "������ɼ�" << endl;
//		cin>>p[i][1];
//		cout << "ѧ��" << p[i][0] << "�ĳɼ���" << p[i][1] << endl;
//	}
//	max(p);
//	return 0;
//}