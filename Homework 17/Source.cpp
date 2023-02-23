#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
//Task 1
double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}
//Task2
double mean_arr(int arr[],int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	return (double)sum / length;
}
//Task 3
void powers(int N,int  M) {
	int tmp = 1;
	std::cout << N << "^" << 0 <<" = "<< 1 << "\n";
	for (int i = 1; i <= M; i++) {
		tmp *= N;
		std::cout << N << "^" << i << " = " << tmp <<"\n";
	}
}
//Task 4
void positive_arr(int arr[], const int length) {
	std::cout << "\nChanged array:\n";
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			arr[i] = arr[i] * -1;
			std::cout << arr[i] << " ";
		}
		else
			std::cout << arr[i] << " ";
		
	}
	
}
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	//Task 1
	
	int n, m;
	std::cout << "Task 1\nEnter two numbers ->";
	std::cin >> n >> m;
	std::cout <<"Arithmetical mean of "<<n <<" and "<< m<<" = "<< mean(n, m)<<"\n\n";
	
	//Task 2
	
	
	const int length1 = 5;
	int arr1[length1];
	std::cout << "Task 2.\nArray:\n";
	for (int i = 0; i < length1; i++) {
		arr1[i] = rand() % 11;
		std::cout << arr1[i] << ' ';
	}
	std::cout << "\nA.Mean of arrays elements = " << mean_arr(arr1, length1)<<"\n\n";
	
	//Task 3
	
	std::cout << "\nTask 3\nEnter two numbers ->";
	int a, b;
	std::cin >> a >> b;
	powers(a, b);
	std::cout <<"\n\n";
	
	//Task 4
	std::cout << "Task 4\nArray:\n";
	const int length2 = 6;
	int arr2[length2];
	for (int i = 0; i < length2; i++) {
		arr2[i] = rand() % (11 + 10) - 10;
		std::cout << arr2[i] << " ";
	}
	std::cout << "\n";
	positive_arr(arr2, length2);

	return 0;
}