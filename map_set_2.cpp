//#include<iostream>
//#include<string>
//#include<map>
//#include<fstream>
//#include<vector>
//using namespace std;
////������� �� �����, ������� ����������� ������� �� ���, ������� � ������ �����
//
//int main() {
//	map<string, int> vxodword;
//    
//	string s;
//	bool firstnum = true;
//	vector<string> res;
//
//	int firstnumber, firstcount = 0;
//
//	ifstream in("map_set_file2.txt");
//	if (in.is_open()) {
//		while (getline(in, s, ' ')) { //��������� ��������, ��������� ��������
//			try
//			{
//				int number = stoi(s);
//
//				if (firstnum) { //���� ������ ��������� �����
//					firstnumber = number;
//					firstnum = false;
//				}
//
//				if (number == firstnumber) {
//					firstcount++; //������������ ���-�� ��������� ������ �����
//				}
//			}
//			catch (...)
//			{
//				vxodword[s]++;
//			}
//				
//		}
//			
//	}
//	in.close();
//
//	cout << "words: ";
//	cout << endl;
//	for (const auto& i : vxodword) {
//		if (i.second == firstcount) {
//			res.push_back(i.first);
//		}
//	}
//	cout << "res = ";
//	for (string i : res) {
//		cout << i << " ";
//	}
//	cout << endl;
//
//	return 0;
//}