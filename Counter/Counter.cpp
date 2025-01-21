// Counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>

class Counter {
private:
    int a;
public:
    Counter(int a_Count)// конструктор класса
    {
        setCounter(a_Count);
    }


  void  setCounter(int a_Count)
    {
        a = a_Count;// инициализация
    }
 


    void setInit(int b)
    {
       
        this->a = b;
    }

    void setAdd(int a)
    {
      
        this->a += a;
        
    }

    void setSubtract(int a)
    {
       
        this->a -= a;

    }

    void getPrint()
    {
        std::cout  << a << std::endl;
    }

};



int main()
{
    setlocale(LC_ALL, "rus");
    static int a{ 1 };
    int b{};
    bool exit{ true };
    bool exit1{ true };
    char choice{};
    std::string in{};
    Counter counter(1);
   
    do
    {
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no:";
    std::cin >> in;
   
    


         if ("yes" == in) {
            std::cout << "Введите начальное значение счётчика:";
            std::cin >> b;
            counter.setInit(b);
            counter.getPrint();
            break;

        }
         else if ( "no" == in)
         {
             exit1 = 0;
         }

         else if ("yes" || "no" != in)
        {
            std::cout << "Неверный ввод, повторите!" << std::endl;
            continue;
           
        }
        

    }
    while (exit1);

    while (exit) {
       
        

        std::cout << "Введите команду ('+', '-', '=' или 'x'):";
        std::cin >> choice;
        //std::cout << "Ввод :" << choice<< std::endl;
        switch (choice)
        {
        case '+':
        counter.setAdd(a);
        break;
        case '=':
        counter.getPrint();
        break;
        case '-':
            counter.setSubtract(a);
            break;
       
      
        case 'x':
            std::cout << "До свидания!" << std::endl;
            exit = false;
            break;
        default :
            std::cout << "Неверный ввод, повторите!" << std::endl;
            break;
      
        }
      
    }
  
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
