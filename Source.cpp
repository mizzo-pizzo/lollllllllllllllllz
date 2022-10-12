#include <iostream>
using namespace std;
int main() {
	/*//for1
	int n, k;
	cout << "n:";
	cin >> "k:";
	cin >> n;
	cout << k;
	for (int i = 0; i < n; ++i) {
		cout << k << endl;
	}*/
	/*//For2. Даны два целых числа A и B (A < B). Вывести в порядке возрастания все
	//целые числа, расположенные между A и B(включая сами числа A и B), а
		//также количество N этих чисел.	int a, b;
	int n = 0;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	for (int i = a; i <= b; i = i + 1) {
		cout << i << " ";
		n++;
	}
	cout << "qty = " << n << endl;*/
	/*//For3. Даны два целых числа A и B (A < B). Вывести в порядке убывания все
	//целые числа, расположенные между A и B(не включая числа A и B), а
		//также количество N этих чисел.
	int a, b;
	int n = 0;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	for (int i = b-1; i >= a; i = i - 1) {
		cout << i << " ";
		n++;
	}
	cout << "qty = " << n << endl;*/
	/*//for4
	double price;
	cout << "input price: ";
	cin >> price;
	for (int weight = 1; weight <= 10; weight++) {
		cout << weight  << " kg costs " << weight  * price << " s" << endl;
	}*/
	/*//For5◦
	//. Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
	//	0.2, . . ., 1 кг конфет.
	double  c, m;
	cout << "price 1kg candy:";
	cin >> c;
	cout << "price candy" << endl;
	for (m = 0.1; m < 1.1; m += 0.1) {
		cout << m << " kg = " << c * m << endl;
	}*/
	/*//For6. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1.2,
	//1.4, . . ., 2 кг конфет
    double c, m;
	cin >> c >> m;
	for (m = 1.2; m < 2.1; m += 0.1) {
		cout << c * m << endl;
	}*/

	/*//For7. Даны два целых числа A и B (A < B). Найти сумму всех целых чисел
	//от A до B включительно.
	int a, b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	for (int i = a; i <= b; ++i) {
		cout << i << " sum";
	}
	cout << "sum= " << endl;*/
	/*//For8. Даны два целых числа A и B (A < B). Найти произведение всех целых
	//чисел от A до B включительно.
	int a, b;
	cout << "a: ";
	cin >> a;
	cout << "b:";
	cin >> b;
	for (int i = a; i <= b; i++) {
		cout << i << " " << endl;
	}*/
	 
	/*//For9. Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых
	//чисел от A до B включительно.
	int a, b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	int sum = 0;
	for (int i = a; i <= b; ++i) {
		cout << i << "sum  " << endl;
	}*/
	/*//For10. Дано целое число N (> 0). Найти сумму
	//1 + 1 / 2 + 1 / 3 + . . . + 1 / N
	//(вещественное число).	int n;	cout << "n= ";	cin >> n;	int sum = 0;	for (int i = 1; i <= n; i++) {	}	cout << "sum=" << sum;	*/
} 