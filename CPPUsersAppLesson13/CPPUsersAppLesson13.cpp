// CPPUsersAppLesson13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
    ////Task1
    //FILE* fileWords;
    //FILE* fileText;
    //FILE* fileResult;
    //
    //int counterBadWordsString = 0;
    //fopen_s(&fileWords, "D:\\task13_11.txt", "r");

    //while (!feof(fileWords))
    //{
    //    fgets(new char[128], 127, fileWords);
    //    counterBadWordsString++;
    //}    
    //fclose(fileWords);

    //string* badWords = new string[counterBadWordsString];
    //string word;
    //counterBadWordsString = 0;
    //fopen_s(&fileWords, "D:\\task13_11.txt", "r");
    //while (!feof(fileWords))
    //{
    //    word = fgets(new char[128], 127, fileWords);
    //    badWords[counterBadWordsString] = word.substr(0, word.length() - 1);
    //    counterBadWordsString++;
    //}
    //fclose(fileWords);

    //string str = "";
    //std::size_t found;
    //fopen_s(&fileText, "D:\\task13_1.txt", "r");
    //fopen_s(&fileResult, "D:\\task13_1result.txt", "w");
    //while (!feof(fileText))
    //{
    //    str = fgets(new char[128], 127, fileText);        
    //    for (int i = 0; i < counterBadWordsString; i++)
    //    {
    //        found = str.find(badWords[i]);
    //        if (found != std::string::npos)
    //        {
    //            str.replace(found,badWords[i].length(),"");
    //        }
    //    }
    //    fputs(str.c_str(), fileResult);
    //}

   /* Задание 2. Написать программу транслитерации с русского
        на английский и наоборот.Данные для транслитерации
        берутся из файла и записываются в другой файл.Направление перевода определяется через меню пользователя.*/

    return 0;
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
