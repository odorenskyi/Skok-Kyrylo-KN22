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
            // Вивід
            cout << "Пільга знайдена:\n";
            cout << "Код пільги: " << notes.code_ben << "\n";
            cout << "Зміст пільги: " << notes.content_ben << "\n";
            cout << "Документ пільги: " << notes.document_ben << "\n";
            cout << "Номер документа: " << notes.num_doc_ben << "\n";
            cout << "Дата документа: " << notes.date_doc_ben << "\n";
            cout << "Дата початку: " << notes.date_start_ben << "\n";
            cout << "Дата кінця дії: " << notes.date_end_ben << "\n";
            cout << "Ознака змісту: " << notes.destination_sign_ben << "\n";
            cout << "Коментарій: " << notes.coment_ben << "\n";
            return;
        }
    }
    cout << "Пільга з таким кодом " << code << " не знайдена.\n";
}

#endif // MODULESKUCHER_H_INCLUDED
