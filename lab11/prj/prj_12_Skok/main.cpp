#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <Windows.h>
#include "../struct_type_project_12.h"
#include"../Module_Skok.h"
#include"../ModulesKucher.h"
#include"../ModulesPylypenko.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout<<"����i�� ��'� �����, � ����� ����������� �������\n";
    string filename;
    cin>>filename;
    filename = filename+".txt";
    vector <Benefits> note;
    Benefits notes;
    ifstream file(filename);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            stringstream ss(line);
            string item;
            getline(ss, item, ',');
            notes.code_ben = stoi(item);
            getline(ss, notes.content_ben, ',');
            getline(ss, notes.document_ben, ',');
            getline(ss, notes.num_doc_ben, ',');
            getline(ss, notes.date_doc_ben, ',');
            getline(ss, notes.date_start_ben, ',');
            getline(ss, notes.date_end_ben, ',');
            getline(ss, notes.destination_sign_ben, ',');
            getline(ss, notes.coment_ben, ',');
            note.push_back(notes);
        }
        file.close();
    } else
    {
        cout << "���� �� ��������.\n";
        return 1;
    }
    int num;
    int i = 1;
    do
    {
        cout << "������ �����:\n";
        cout << "1. ����� �� ���� �����\n";
        cout << "2. ��������� ������ ��������\n";
        cout << "3. ��������� ������ ������ � �������\n";
        cout << "4. ��������� ������ � ��������\n";
        cout << "5. ���������� ������ �� ����� ����� � ����\n";
        cin >> num;
        switch (num)
    {
            case 1:
                cout<<"����i�� ��� �i����\n";
                int code;
                cin>>code;
                poshuk_kod(note,code);
                system("PAUSE");
                system("cls");
                break;
            case 2:
                    cout<<"���� �� ������ �������� ���� ������� � ����, �� ������ 0, � ���� ������ ������� ���� �� ����� ������ 1\n";
                    int button;
                    cin>>button;
                    if(button == 0)
                    {
                        cout<<"����i�� ��'� ����, � ���� ������ �������� �������\n";
                        cin>>filename;
                        filename = filename+".txt";
                        File(note,filename);
                    }
                    else if(button == 1)
                    {
                        Screen(note);
                    }
                    system("PAUSE");
                    system("cls");
                break;
            case 3:
                add_new_data(note, filename);
                system("PAUSE");
                system("cls");
                break;
            case 4:
                delete_data(note,filename);
                system("PAUSE");
                system("cls");
                break;
            case 5:
                    cout<<"������ ����, ����� �� �����t �������� ���\n";
                    cin>>filename;
                    filename = filename+".txt";
                    end_file(note, filename);
                    i = 0;
                    break;
            default:
                cout << "�� ��������� ������ ������";
                break;
        }
    } while (i == 1);

    return 0;
}
