#include <iostream>

template <typename T>
void functionAddOne(T num)
{
	num += 33;
}

template <typename T, size_t N>
void print_array(T (& array)[N], size_t length, void (*func)(T &))
{
	size_t i = 0;
	while(i < length)
	{
		func(array[i]);
		std::cout << array[i] << std::endl;
		i++;
	}
}

int main(void)
{
	int num[5] = {1,2,3,4,5};
	std::string teste[3] = {
		"boas",
		"ola",
		"icaldas"
	};
	print_array(num,5,functionAddOne);
	print_array(teste,3,functionAddOne);
}

// #include <iostream>

// // Função de exemplo que recebe um parâmetro de função e a aplica
// template<typename T>
// void aplicarFuncao(T valor, void (*funcao)(T)) {
//     funcao(valor);
// }

// // Função de exemplo que imprime o valor passado para ela
// template<typename T>
// void imprimirValor(T valor) {
//     std::cout << "Valor: " << valor << std::endl;
// }

// int main() {
//     // Usando a função de aplicação com a função de impressão
//     aplicarFuncao(5.5, imprimirValor);

//     return 0;
// }
