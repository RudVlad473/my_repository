#include <iostream>
//#include <cstdio> 
using namespace std;


struct OperSistem
{
    char Name[10];
    char SUBD[10];
    int outmem;
    int minRam;
    int cost;
};
/*--------------------------------------------*/

void vvodIzapis(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix)
{
    FILE* f;

    fopen_s(&f, "file.txt", "w");
    fseek(f, 0, SEEK_SET);
    if (f == NULL) {
        puts("Ошибка открытия файла на запись"); 
        exit(0);
    }
    cout << "\t\tВведите информацию для записи в файл:\n\n";

    /*------ Для OS/2-----------*/
    cout << "Введите следующие значения с клавиатуры: " << endl;

    cout << "\tИмя ОС: ";
    cin >> OS2.Name;
    fwrite(&OS2.Name,sizeof(OperSistem),1,f); fputs("\n", f);
    cout << endl;

    cout << "\tСУБД: ";
    cin >> OS2.SUBD;
    fwrite(&OS2.SUBD, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl;

    cout << "\tМин.объем внешней памяти (MB): ";
    cin >> OS2.outmem;
    fwrite(&OS2.outmem, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl;

    cout << "\tМин.объем оперативной памяти (MB): ";
    cin >> OS2.minRam;
    fwrite(&OS2.minRam, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl;

    cout << "\tПриблизительная цена ($): ";
    cin >> OS2.cost;
    fwrite(&OS2.cost, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl << endl << endl;
    /*--------------------*/

    /*------ Для WindowsNT-----------*/
    cout << "Введите следующие значения с клавиатуры: " << endl;

    cout << "\tИмя ОС: ";
    cin >> WindowsNT.Name;
    fwrite(&WindowsNT.Name, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl;

    cout << "\tСУБД: ";
    cin >> WindowsNT.SUBD;
    fwrite(&WindowsNT.Name, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl;

    cout << "\tМин.объем внешней памяти (MB): ";
    cin >> WindowsNT.outmem;
    fwrite(&WindowsNT.outmem, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl;

    cout << "\tМин.объем оперативной памяти (MB): ";
    cin >> WindowsNT.minRam;
    fwrite(&WindowsNT.minRam, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl;

    cout << "\tПриблизительная цена ($): ";
    cin >> WindowsNT.cost;
    fwrite(&WindowsNT.cost, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl << endl << endl;
    /*--------------------*/

    /*------ Для SCOUnix-----------*/
    cout << "Введите следующие значения с клавиатуры: " << endl;

    cout << "\tИмя ОС: ";
    cin >> SCOUnix.Name;
    fwrite(&SCOUnix.Name, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << endl;

    cout << "\tСУБД: ";
    cin >> SCOUnix.SUBD;
    fwrite(&SCOUnix.SUBD, sizeof(OperSistem), 1, f);  fputs("\n", f);
    cout << endl;

    cout << "\tМин.объем внешней памяти (MB): ";
    cin >> SCOUnix.outmem;
    fwrite(&SCOUnix.outmem, sizeof(OperSistem), 1, f);  fputs("\n", f);
    cout << endl;

    cout << "\tМин.объем оперативной памяти (MB): ";
    cin >> SCOUnix.minRam;
    fwrite(&SCOUnix.minRam, sizeof(OperSistem), 1, f);  fputs("\n", f);
    cout << endl;

    cout << "\tПриблизительная цена ($): ";
    cin >> SCOUnix.cost;
    fwrite(&SCOUnix.cost, sizeof(OperSistem), 1, f);  fputs("\n", f);
    cout << endl << endl << endl;
    /*--------------------*/

    
    fclose(f);
}

void randomly(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix)
{

    FILE* f;

    fopen_s(&f, "file.txt", "w");
    
    if (f == NULL) {			//!f
        puts("Ошибка открытия файла.");
        exit(0);
    }
    
    char Array[][11] = { 
        {"OS/2"},
        {"Windows/NT"},
        {"SCO/Unix"} };
    char Array2[][10] = 
    {   "DB2", 
        "SQLServer", 
        "Oracle" };
  
    /*--------------------------*/
    
    for (int i = 0; i < 4; i++)
    {
        OS2.Name[i] = Array[0][i];
    }
    //fwrite(&OS2.Name, sizeof(OperSistem), 1, f);  fputs("\n", f);
    cout << endl << "Имя ОС: " << OS2.Name << endl;
    
    for (int i = 0; i < 3; i++)
    {
        OS2.SUBD[i] = Array2[0][i];
    }
    //fwrite(&OS2.SUBD, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << "СУБД: " << OS2.SUBD << endl;

    OS2.outmem = 1;//rand() %101+150;   
    //fwrite(&OS2.outmem, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << "Мин.объем внешней памяти (MB): " << OS2.outmem << endl;

    OS2.minRam = rand() % 25+25;
    //fwrite(&OS2.minRam, sizeof(OperSistem), 1, f);fputs("\n", f);
    cout << "Мин.объем оперативной памяти (MB): " << OS2.minRam << endl;

    OS2.cost = rand() % 2000+2000;
    //fwrite(&OS2.cost, sizeof(OperSistem), 1, f); fputs("\n", f);
    cout << "Приблизительная цена ($): " << OS2.cost << endl;
    fwrite(&OS2, sizeof(OperSistem), 1, f);
    /*----------------------------------------*/

    ///*--------------------------*/
    //for (int i = 0; i < 10; i++)
    //{
    //    WindowsNT.Name[i] = Array[1][i];
    //}
    //fwrite(&WindowsNT.Name, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << endl << "Имя ОС: " << WindowsNT.Name << endl;

    //for (int i = 0; i < 9; i++)
    //{
    //    WindowsNT.SUBD[i] = Array2[1][i];
    //}
    //fwrite(&WindowsNT.SUBD, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << "СУБД: " << WindowsNT.SUBD << endl;

    //WindowsNT.outmem = rand() %101+150;
    //fwrite(&WindowsNT.outmem, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << "Мин.объем внешней памяти (MB): " << WindowsNT.outmem << endl;

    //WindowsNT.minRam = rand() % 25+25;
    //fwrite(&WindowsNT.minRam, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << "Мин.объем оперативной памяти (MB): " << WindowsNT.minRam << endl;

    //WindowsNT.cost = rand() % 2000+2000;
    //fwrite(&WindowsNT.cost, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << "Приблизительная цена ($): " << WindowsNT.cost << endl;
    ///*----------------------------------------*/

    ///*--------------------------*/
    //for (int i = 0; i < 8; i++)
    //{
    //    SCOUnix.Name[i] = Array[2][i];
    //}
    //fwrite(&SCOUnix.Name, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << endl << "Имя ОС: " << SCOUnix.Name << endl;

    //for (int i = 0; i < 6; i++)
    //{
    //    SCOUnix.SUBD[i] = Array2[2][i];
    //}
    //fwrite(&SCOUnix.SUBD, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << "СУБД: " << SCOUnix.SUBD << endl;

    //SCOUnix.outmem = rand() % 100+150;
    //fwrite(&SCOUnix.outmem, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << "Мин.объем внешней памяти (MB): " << SCOUnix.outmem << endl;

    //SCOUnix.minRam = rand() % 25+25;
    //fwrite(&SCOUnix.minRam, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << "Мин.объем оперативной памяти (MB): " << SCOUnix.minRam << endl;

    //SCOUnix.cost = rand() % 2000+2000;
    //fwrite(&SCOUnix.cost, sizeof(OperSistem), 1, f); fputs("\n", f);
    //cout << "Приблизительная цена ($): " << SCOUnix.cost << endl;
    ///*----------------------------------------*/
    fclose(f);
    
}

void vnachalo(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix)
{
    FILE* f;
    fopen_s(&f, "file.txt", "r+t");
    fseek(f, 0, SEEK_SET);
    if (f == 0) 
    {			
        puts("Ошибка открытия файла1.");
        exit(0);
    }

    FILE* ft;
    fopen_s(&ft, "tempfile1", "wb+t");
    if (ft == 0)
    {
        puts("Ошибка открытия файла2.");
        exit(0);
    }
    cout << "Выберите, какую структуру вы хотите добавить в файл: \n";
    cout << "1 - OS/2\n";
    cout << "2 - WindowsNT\n";
    cout << "3 - SCO/Unix\n";
    cout << "--->";
    short choice = 0;
    cin >> choice;
    if (choice == 1)
    {
        cout << "\nВведите следующие значения с клавиатуры: " << endl;

        cout << "\tИмя ОС: ";
        cin >> OS2.Name;
        fwrite(&OS2.Name, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl;

        cout << "\tСУБД: ";
        cin >> OS2.SUBD;
        fwrite(&OS2.SUBD, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl;

        cout << "\tМин.объем внешней памяти (MB): ";
        cin >> OS2.outmem;
        fwrite(&OS2.outmem, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl;

        cout << "\tМин.объем оперативной памяти (MB): ";
        cin >> OS2.minRam;
        fwrite(&OS2.minRam, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl;

        cout << "\tПриблизительная цена ($): ";
        cin >> OS2.cost;
        fwrite(&OS2.cost, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl << endl << endl;
    }
    else if(choice == 2)
    {
        cout << "\nВведите следующие значения с клавиатуры: " << endl;

        cout << "\tИмя ОС: ";
        cin >> WindowsNT.Name;
        fwrite(&WindowsNT.Name, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl;

        cout << "\tСУБД: ";
        cin >> WindowsNT.SUBD;
        fwrite(&WindowsNT.SUBD, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl;

        cout << "\tМин.объем внешней памяти (MB): ";
        cin >> WindowsNT.outmem;
        fwrite(&WindowsNT.outmem, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl;

        cout << "\tМин.объем оперативной памяти (MB): ";
        cin >> WindowsNT.minRam;
        fwrite(&WindowsNT.minRam, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl;

        cout << "\tПриблизительная цена ($): ";
        cin >> WindowsNT.cost;
        fwrite(&WindowsNT.cost, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl << endl << endl;
    }
    else if (choice == 3)
    {
        cout << "\nВведите следующие значения с клавиатуры: " << endl;

        cout << "\tИмя ОС: ";
        cin >> SCOUnix.Name;
        fwrite(&SCOUnix.Name, sizeof(OperSistem), 1, f); fputs("\n", f);
        cout << endl;

        cout << "\tСУБД: ";
        cin >> SCOUnix.SUBD;
        fwrite(&SCOUnix.SUBD, sizeof(OperSistem), 1, f);  fputs("\n", f);
        cout << endl;

        cout << "\tМин.объем внешней памяти (MB): ";
        cin >> SCOUnix.outmem;
        fwrite(&SCOUnix.outmem, sizeof(OperSistem), 1, f);  fputs("\n", f);
        cout << endl;

        cout << "\tМин.объем оперативной памяти (MB): ";
        cin >> SCOUnix.minRam;
        fwrite(&SCOUnix.minRam, sizeof(OperSistem), 1, f);  fputs("\n", f);
        cout << endl;

        cout << "\tПриблизительная цена ($): ";
        cin >> SCOUnix.cost;
        fwrite(&SCOUnix.cost, sizeof(OperSistem), 1, f);  fputs("\n", f);
        cout << endl << endl << endl;
    }
    else
    {
        cout << "\nError";
        
    }

    
    

    
    
    
    /*Дописывание старой записи в конец*/
    while (!feof(f))
    {
        OperSistem temp;
        fread(&temp, sizeof(OperSistem), 1, f);
        fwrite(&temp, sizeof(OperSistem), 1, ft);
    }
    /*--------------------------*/
    fclose(f);
    remove("file");
    fclose(ft);
    int d =rename("tempfile1", "file");
    if (d == 1)
    {
        cout << "\nОшибка переименования файла\n";
        exit(0);
    }

    
    
}

void vkonec(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix)
{
    char Array[][11] = {
       {"OS/2"},
       {"Windows/NT"},
       {"SCO/Unix"} };
    char Array2[][10] =
    { "DB2",
        "SQLServer",
        "Oracle" };
  

    FILE* f;
    
    fopen_s(&f, "file.txt", "a+b");
    
    if (f == NULL) 
    {			
        puts("Ошибка открытия файла.");
        exit(0);
    }
    fseek(f, 0, SEEK_SET);
    

    /*--------------------------*/
    for (int i = 0; i < 4; i++)
    {
        OS2.Name[i] = Array[0][i];
    }
    fputs(OS2.Name, f); fputs("\n", f);
    cout << endl << "Имя ОС: " << OS2.Name << endl;

    for (int i = 0; i < 3; i++)
    {
        OS2.SUBD[i] = Array2[0][i];
    }
    fputs(OS2.SUBD, f); fputs("\n", f);
    cout << "СУБД: " << OS2.SUBD << endl;

    OS2.outmem = rand() % 250;
    fprintf(f, "%d", OS2.outmem); fputs("\n", f);
    cout << "Мин.объем внешней памяти (MB): " << OS2.outmem << endl;

    OS2.minRam = rand() % 50;
    fprintf(f, "%d", SCOUnix.minRam); fputs("\n", f);
    cout << "Мин.объем оперативной памяти (MB): " << OS2.minRam << endl;

    OS2.cost = rand() % 4000;
    fprintf(f, "%d", OS2.cost); fputs("\n", f);
    cout << "Приблизительная цена ($): " << OS2.cost << endl;
    /*----------------------------------------*/

    /*--------------------------*/
    for (int i = 0; i < 10; i++)
    {
        WindowsNT.Name[i] = Array[1][i];
    }
    fputs(WindowsNT.Name, f); fputs("\n", f);
    cout << endl << "Имя ОС: " << WindowsNT.Name << endl;

    for (int i = 0; i < 9; i++)
    {
        WindowsNT.SUBD[i] = Array2[1][i];
    }
    fputs(WindowsNT.SUBD, f); fputs("\n", f);
    cout << "СУБД: " << WindowsNT.SUBD << endl;

    WindowsNT.outmem = rand() % 250;
    fprintf(f, "%d", WindowsNT.outmem); fputs("\n", f);
    cout << "Мин.объем внешней памяти (MB): " << WindowsNT.outmem << endl;

    WindowsNT.minRam = rand() % 50;
    fprintf(f, "%d", WindowsNT.minRam); fputs("\n", f);
    cout << "Мин.объем оперативной памяти (MB): " << WindowsNT.minRam << endl;

    WindowsNT.cost = rand() % 4000;
    fprintf(f, "%d", WindowsNT.cost); fputs("\n", f);
    cout << "Приблизительная цена ($): " << WindowsNT.cost << endl;
    /*----------------------------------------*/

    /*--------------------------*/
    for (int i = 0; i < 8; i++)
    {
        SCOUnix.Name[i] = Array[2][i];
    }
    fputs(SCOUnix.Name, f); fputs("\n", f);
    cout << endl << "Имя ОС: " << SCOUnix.Name << endl;

    for (int i = 0; i < 6; i++)
    {
        SCOUnix.SUBD[i] = Array2[2][i];
    }
    fputs(SCOUnix.SUBD, f); fputs("\n", f);
    cout << "СУБД: " << SCOUnix.SUBD << endl;

    SCOUnix.outmem = rand() % 250;
    fprintf(f, "%d", SCOUnix.outmem); fputs("\n", f);
    cout << "Мин.объем внешней памяти (MB): " << SCOUnix.outmem << endl;

    SCOUnix.minRam = rand() % 50;
    fprintf(f, "%d", SCOUnix.minRam); fputs("\n", f);
    cout << "Мин.объем оперативной памяти (MB): " << SCOUnix.minRam << endl;

    SCOUnix.cost = rand() % 4000;
    fprintf(f, "%d", SCOUnix.cost); fputs("\n", f);
    cout << "Приблизительная цена ($): " << SCOUnix.cost << endl;
    /*----------------------------------------*/

    
    fclose(f);
}

void ponomery(int temp)
{
    FILE* f;

    fopen_s(&f, "file.txt", "r");
    
    if (f == NULL) 
    {		
        puts("Ошибка открытия файла.");
        exit(0);
    }
    fseek(f, temp*sizeof(OperSistem), SEEK_SET);
    OperSistem tempor{};
    fread(&tempor, sizeof(OperSistem), 1, f);
    cout << "Запись по номеру: \n";
    cout << tempor.Name << "\t" << tempor.SUBD << "\t" << tempor.outmem << "\t" << tempor.minRam << "\t" << tempor.cost << endl;
    
    
    
    fclose(f);
}

void vse()
{
    FILE* f;

    fopen_s(&f, "file.txt", "r");
    if (f == NULL)
    {
        puts("Ошибка открытия файла.");
        exit(0);
    }
    fseek(f, 0, SEEK_SET);
    while (true)
    {
        
        OperSistem tempor{};
        fread(&tempor, sizeof(OperSistem), 1, f);
        if (feof(f))
        {
            break;
        }
        cout << tempor.Name << "\t" << tempor.SUBD << "\t" << tempor.outmem << "\t" << tempor.minRam << "\t" << tempor.cost << endl;
    }
    fclose(f);
}



/*-------------------------------------------*/
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    /*-----------------*/


    OperSistem OS2{}, WindowsNT{}, SCOUnix{};



    /*---------------------*/
    cout << "\tВыберите действие:\n";
    cout << "1 - Ввод с экрана и запись в файл.\n";
    cout << "2 - Ввод случайным образом и запись в файл.\n";
    cout << "3 - Добавить запись в начало файла.\n";
    cout << "4 - Добавить запись в конец файла.\n";
    cout << "5 - Печать одной записи из файла по номеру.\n";
    cout << "6 - Печать всех записей из файла.\n";
    cout << "7 - Выход из программы.\n\n";
    while (true)
    {
        int a;
        cout << "Введите опцию: ";
        cin >> a;
      
        if (a == 1)
        {
            vvodIzapis(OS2, WindowsNT, SCOUnix);
        }
        else if (a == 2)
        {
            randomly(OS2, WindowsNT, SCOUnix);
            
        }
        else if (a == 3)
        {
            vnachalo(OS2, WindowsNT, SCOUnix);
        }
        else if (a == 4)
        {
            vkonec(OS2, WindowsNT, SCOUnix);
        }
        else if (a == 5)
        {
            int temp=0;
            cout << "Введите номер записи, которую хотите увидеть: ";
            cin >> temp;
            ponomery(temp);  
        }
        else if (a == 6)
        {
            vse();
        }
        else if (a == 7)
        {
            exit(0);
        }
        
        cout << endl << endl;
    }
}

