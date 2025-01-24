// Counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>

class Counter {
private:
    int a;
public:
    Counter()// конструктор класса
    {
        a=0;
    }

    Counter(int b)// конструктор класса
    {
        this->a = b;
    }
     void setAdd()
    {
       a++;
    }

    void setSubtract()
    {
      a--;
    }

    void getPrint()
    {
        std::cout  << a << std::endl;
    }

};



int main()
{
    setlocale(LC_ALL, "rus");
   
    int b{};
   // int c{};
    bool exit{ true };
    bool exit1{ true };
    char choice{};
    std::string in{};
    Counter counter;// инициализация значениями по умолчанию
   
   
    do
    {
      std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no:";
      std::cin >> in;
   
     


         if (in=="yes"  )
         {
            std::cout << "Введите начальное значение счётчика:";
            std::cin >> b;
        counter = Counter (b);// меняем дефолтные значения 
          
            break;

        }
         else if (in=="no" )
         {
             exit1 = 0;
         }

         else if (in!="yes" || "no" )
        {
            std::cout << "Неверный ввод, повторите!" << std::endl;
            continue;
           
        }
        

    }
    while (exit1);

    while (exit) {
       
        

        std::cout << "Введите команду ('+', '-', '=' или 'x'):";
        std::cin >> choice;
        
        switch (choice)
        {
        case '+':
        counter.setAdd();
       
        break;
        case '=':
        counter.getPrint();
        break;
        case '-':
            counter.setSubtract();
          
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
    return 0;
}

