#ifndef MODULESPYLYPENKO_H_INCLUDED
#define MODULESPYLYPENKO_H_INCLUDED

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <Windows.h>
#include "struct_type_project_12.h"

void add_new_data(vector<Benefits>& note, const string& file_name) {
    Benefits new_data;
    cout << "������ ��� ������ ������:\n";
    cout << "��� �����: ";
    cin >> new_data.code_ben;
    cout << "���� �����: ";
    cin.ignore();  // Ignore the newline character
    getline(cin, new_data.content_ben);
    cout << "��� ���������: ";
    getline(cin, new_data.document_ben);
    cout << "����� ���������: ";
    getline(cin, new_data.num_doc_ben);
    cout << "���� ���������: ";
    getline(cin, new_data.date_doc_ben);
    cout << "���� ������� 䳿: ";
    getline(cin, new_data.date_start_ben);
    cout << "���� ��������� 䳿: ";
    getline(cin, new_data.date_end_ben);
    cout << "������ �������� �����������: ";
    getline(cin, new_data.destination_sign_ben);
    cout << "��������: ";
    getline(cin, new_data.coment_ben);
    note.push_back(new_data);

    // Add the new data to the file
    ofstream file("dividnuk.txt", ios::app);  // Open the file in append mode
    if (file.is_open()) {
        file << new_data.code_ben << ","
             << new_data.content_ben << ","
             << new_data.document_ben << ","
             << new_data.num_doc_ben << ","
             << new_data.date_doc_ben << ","
             << new_data.date_start_ben << ","
             << new_data.date_end_ben << ","
             << new_data.destination_sign_ben << ","
             << new_data.coment_ben << "\n";
        cout << "����� ����� ������ ������ �� ����� " << "dividnuk.txt" << ".\n";
        file.close();
    } else {
        cout << "������� ��� ������� ����� ��� ������.\n";
    }
}


void delete_data(vector<Benefits>& note, const string& file_name) {
    if (note.empty()) {
        cout << "���� ����� ��� ���������.\n";
        return;
    }

    cout << "������ ������:\n";
    for (size_t i = 0; i < note.size(); i++) {
        cout << i + 1 << ". " << note[i].code_ben << " - " << note[i].content_ben << "\n";
    }

    int choice;
    cout << "������� ����� ������ ��� ���������: ";
    cin >> choice;

    if (choice < 1 || choice > note.size()) {
        cout << "������� ����� ������.\n";
        return;
    }

    note.erase(note.begin() + choice - 1);
}

#endif MODULESPYLYPENKO_H_INCLUDED
