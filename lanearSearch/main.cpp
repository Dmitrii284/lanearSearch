#include <iostream>
//Вывод массива в консоль Шаблонная функция.
template <typename T>
void print_arr(T arr[], const int length){// Т Это тип везде И главное чтобы он передавался в параметры ()
   std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
//Линейный поиск первого!! вхождения!!! элемента в массиве
template <typename T>
int search_index(T arr[],const int length, T value, int begin = 0) {// Тут мы ищем value// И 0 назаначаем begin
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	 return -1;// Если функция не отрабатывает то функция возвравщает нам этот знак(Число) -1
}

//Линейный поиск Поиск последнего вхождения элемента в массив
template <typename T>
int search_last_index(T arr[], const int length, T value) {// Чтобы найти последний элемент повторения Ищем с Коца!!
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//Линейный поиск Поиск с определенной позиции (С права на лево)  вхождения элемента в массив и до последнего эл Начиная с конца
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {// Чтобы найти последний элемент повторения Ищем с Коца!!
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

	//const int size = 10; // Создаем универсальный массив
	//int arr[size]{ 7, 15, 105, -3, 15, 60, 8, 60, 15, -3 };
	//             //0  1    2    3  4   5   6   7   8   9


	//std::cout << "Массив ";
	//print_arr(arr, size);
	//int index;
	//std::cout << "Введите число -> ";
	//std::cin >> n;
	//						// n Поиск первого эл // 2 Второго эл + добавляем begin в функции = 0 	
	////index = search_index(arr, size, n, 2);// Тут мы находим value // А тут 2 это вторая цифра которая дублируется в массиве!!!

	//// Поиск последнего вхождения элемента в массив
	////index = search_last_index(arr, size, n);

	////Линейный поиск Поиск с определенной позиции (С права на лево)  вхождения элемента в массив и до последнего эл Начиная с конца
	//index = search_last_index(arr, size, n, 5); // С пятого элемента считаем с начала. До 0 В обратную сторону. При передаче 

	//if(index != -1)
	//	std::cout << "Индекс: " << index << '\n'; // Тут мы выводим value в виде index
	//else
	//	std::cout << "Числа в масиве нет!!! "<< '\n';//Если нет числа в массиве но выводит Это!!


	std::cout << "Слово: \n";
	const int word_size = 8;
	char word[word_size]{
		'f', 'u', 'n', 'c','t', 'i', 'o', 'n'
	};
	for (int i = 0; i < word_size; i++)
		std::cout << word[i];
	std::cout << "\nВведите символ-> ";
	char sym;
	std::cin >> sym;
	std::cout << "Подслово:   ";
	subword(word, word_size, sym);

	
	

	
	return 0;
}