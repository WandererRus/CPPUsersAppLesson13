// CPPUsersAppLesson13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
string russianAlphabet[33]{ "щ","ж","х","ц","ч","ш","ю","я","а","б","в","г","д","е","ё","з","и","й","к","л","м","н","о","п","р","с","т","у","ф","ъ","ы","ь","э" };
string russianTranslateAlphabet[33]{ "shch","zh","kh","tc","ch","sh","iu","ia","a","b","v","g","d","e","e","z","i","i","k","l","m","n","o","p","r","s","t","u","f","\"","y","'","e" };

string ToRussian(string text)
{
    int length = text.length();
    string translate = "";
    string fullchar = "";
    bool find = false;
    for (int i = 0; i < length; i++)
    {
        find = false;
        for (int j = 0; j < 33; j++)
        {
            if (russianTranslateAlphabet[j].length() > 1)
            { 
                fullchar = "";
                if (i + russianTranslateAlphabet[j].length()-1 < length)
                { 
                    for (int k = 0; k < russianTranslateAlphabet[j].length(); k++)
                    {
                        fullchar.push_back((char)tolower(text[i+k]));
                    }
                    if (russianTranslateAlphabet[j] == fullchar)
                    {
                        translate += russianAlphabet[j];
                        find = true;
                        i += russianTranslateAlphabet[j].length() - 1;
                        break;
                    }                                                         
                }
            }
            else
            {
                if (russianTranslateAlphabet[j].find((char)tolower(text[i])) == 0)
                {
                    translate += russianAlphabet[j];
                    find = true;
                    break;
                }
            }
            
        }
        if (!find)
        {
            translate.push_back(text[i]);
        }
    }
    return translate;
}
string ToEnglish(string text)
{
    int length = text.length();
    string translate = "";
    bool find = false;
    for (int i = 0; i < length; i++)
    {
        find = false;
        for (int j = 0; j < 33; j++)
        {
            if (russianAlphabet[j].find((char)tolower(text[i])) == 0)
            {
                translate += russianTranslateAlphabet[j];
                find = true;
                break;
            }            
        }
        if (!find)
        {
            translate.push_back(text[i]);
        }
    }

    return translate;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
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

   /* Задание 2. Данные для транслитерации
        берутся из файла и записываются в другой файл.Направление перевода определяется через меню пользователя.*/
    
    FILE* fileorigin;
    string s = "";
    fopen_s(&fileorigin, "D:\\task13_2.txt", "r");
    
    while (!feof(fileorigin))
    {
         s += fgets(new char[128],127, fileorigin);
    }
    fclose(fileorigin);
    
    cout << s << "\n";
    cout << "В какой язык переводить? \n На русский - r. На английский - e." << "\n";
    char direction = ' ';
    cin >> direction;
    string snew = "";
    if (direction = 'e')
    {
        snew = ToRussian(s);
    }
    if (direction = 'e')
    {
        snew = ToEnglish(s);
    }
    fopen_s(&fileorigin, "D:\\task13_2_result.txt", "w");
    fputs(snew.c_str(), fileorigin);
    fclose(fileorigin);
    cout << snew << "\n";
    
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
