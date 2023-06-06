#ifndef MODULESKUCHER_H_INCLUDED
#define MODULESKUCHER_H_INCLUDED

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <Windows.h>
#include "struct_type_project_12.h"

using namespace std;

void poshuk_kod(const vector<Benefits>& note, int code) {
    for (const auto& notes : note) {
        if (notes.code_ben == code) {
            // ����
            cout << "ϳ���� ��������:\n";
            cout << "��� �����: " << notes.code_ben << "\n";
            cout << "���� �����: " << notes.content_ben << "\n";
            cout << "�������� �����: " << notes.document_ben << "\n";
            cout << "����� ���������: " << notes.num_doc_ben << "\n";
            cout << "���� ���������: " << notes.date_doc_ben << "\n";
            cout << "���� �������: " << notes.date_start_ben << "\n";
            cout << "���� ���� 䳿: " << notes.date_end_ben << "\n";
            cout << "������ �����: " << notes.destination_sign_ben << "\n";
            cout << "���������: " << notes.coment_ben << "\n";
            return;
        }
    }
    cout << "ϳ���� � ����� ����� " << code << " �� ��������.\n";
}

#endif // MODULESKUCHER_H_INCLUDED
