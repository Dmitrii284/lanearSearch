#include <iostream>
//����� ������� � ������� ��������� �������.
template <typename T>
void print_arr(T arr[], const int length){// � ��� ��� ����� � ������� ����� �� ����������� � ��������� ()
   std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
//�������� ����� �������!! ���������!!! �������� � �������
template <typename T>
int search_index(T arr[],const int length, T value, int begin = 0) {// ��� �� ���� value// � 0 ���������� begin
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	 return -1;// ���� ������� �� ������������ �� ������� ����������� ��� ���� ����(�����) -1
}

//�������� ����� ����� ���������� ��������� �������� � ������
template <typename T>
int search_last_index(T arr[], const int length, T value) {// ����� ����� ��������� ������� ���������� ���� � ����!!
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//�������� ����� ����� � ������������ ������� (� ����� �� ����)  ��������� �������� � ������ � �� ���������� �� ������� � �����
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {// ����� ����� ��������� ������� ���������� ���� � ����!!
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

void subword(char word[], const int length, char sym) {
	int index = search_index(word, length, sym);
	if (index != -1) {
		for (int i = index; i < length; i++)
			std::cout << word[i];
		std::cout << std::endl;
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n;

	//const int size = 10; // ������� ������������� ������
	//int arr[size]{ 7, 15, 105, -3, 15, 60, 8, 60, 15, -3 };
	//             //0  1    2    3  4   5   6   7   8   9


	//std::cout << "������ ";
	//print_arr(arr, size);
	//int index;
	//std::cout << "������� ����� -> ";
	//std::cin >> n;
	//						// n ����� ������� �� // 2 ������� �� + ��������� begin � ������� = 0 	
	////index = search_index(arr, size, n, 2);// ��� �� ������� value // � ��� 2 ��� ������ ����� ������� ����������� � �������!!!

	//// ����� ���������� ��������� �������� � ������
	////index = search_last_index(arr, size, n);

	////�������� ����� ����� � ������������ ������� (� ����� �� ����)  ��������� �������� � ������ � �� ���������� �� ������� � �����
	//index = search_last_index(arr, size, n, 5); // � ������ �������� ������� � ������. �� 0 � �������� �������. ��� �������� 

	//if(index != -1)
	//	std::cout << "������: " << index << '\n'; // ��� �� ������� value � ���� index
	//else
	//	std::cout << "����� � ������ ���!!! "<< '\n';//���� ��� ����� � ������� �� ������� ���!!


	std::cout << "�����: \n";
	const int word_size = 8;
	char word[word_size]{
		'f', 'u', 'n', 'c','t', 'i', 'o', 'n'
	};
	for (int i = 0; i < word_size; i++)
		std::cout << word[i];
	std::cout << "\n������� ������-> ";
	char sym;
	std::cin >> sym;
	std::cout << "��������:   ";
	subword(word, word_size, sym);

	
	

	
	return 0;
}