/*Оператор sizeof дает размер переменной или типа в байтах.
Результат имеет тип size_t.
Напечатать результат можно по формату %zd
sizeof(char) всегда 1.
В современных архитектурах char обычно размером 1 байт. Поэтому мы будем говорить, что "sizeof вычисляет размер в байтах".
Чему равен sizeof(int)? В стандарте языка об этом не говорится. Размер зависит от архитектуры компьютера, от операционный системы и компилятора.

Как правило в gcc int занимает 32 бита, long long int 64 бита. 
В других комиляторах int и/или long может быть 64 бита в зависимости от платформы, но gcc на linux использует x86-64 abi, в котором int и long имеет размер 4 байта (32 бита).*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;

	printf("%zd\n", sizeof x);      // 4 
	printf("%zd\n", sizeof(1 + 2)); // 4 
	printf("%zd\n", sizeof 3.5);    // 8 (тк 3.5конст - тип double(по стандарту 8б)), а если нужно float, то определяем как 3.5f
	printf("%zd\n", sizeof(char));  // 1 всегда
	return 0;
}