#ifndef MODULE_SKOK_H_INCLUDED
#define MODULE_SKOK_H_INCLUDED
#include<iostream>
#include<fstream>
#include "struct_type_project_12.h"
void one_benefit(const Benefits& benefit)
{
    cout<<"Code:"<<benefit.code_ben<<"\n";
    cout<<"Content:"<<benefit.content_ben<<"\n";
    cout<<"Document:"<<benefit.document_ben<<"\n";
    cout<<"Number Document:"<<benefit.num_doc_ben<<"\n";
    cout<<"Date document:"<<benefit.date_doc_ben<<"\n";
    cout<<"Date start:"<<benefit.date_start_ben<<"\n";
    cout<<"Date end:"<<benefit.date_end_ben<<"\n";
    cout<<"Destination sign:"<<benefit.destination_sign_ben<<"\n";
    cout<<"Coment:"<<benefit.coment_ben<<"\n";
}
void Screen(const vector<Benefits>& note)
{
    for (const Benefits& benefit : note)
        {
            one_benefit(benefit);
        }
}
void File(const vector<Benefits>& note,string filename)
{
    ofstream outFile(filename);
    if (outFile.is_open())
        {
            for (const Benefits& benefit : note)
            {
                outFile << "Code: " << benefit.code_ben << "\n";
                outFile << "Content: " << benefit.content_ben << "\n";
                outFile << "Document: " << benefit.document_ben << "\n";
                outFile << "Number Document: " << benefit.num_doc_ben << "\n";
                outFile << "Date document: " << benefit.date_doc_ben << "\n";
                outFile << "Date start: " << benefit.date_start_ben << "\n";
                outFile << "Date end: " << benefit.date_end_ben << "\n";
                outFile << "Destination sign: " << benefit.destination_sign_ben << "\n";
                outFile << "Comment: " << benefit.coment_ben << "\n\n";
            }
                outFile.close();
        }
        else
        {
            cout << "Помилка при відкриті файла.\n";
        }
}
void end_file(const vector<Benefits>& note,string filename)
{
    ofstream outFile(filename);
    if (outFile.is_open())
        {
            for (const Benefits& benefit : note)
            {
                outFile << "Code: " << benefit.code_ben << "\n";
                outFile << "Content: " << benefit.content_ben << "\n";
                outFile << "Document: " << benefit.document_ben << "\n";
                outFile << "Number Document: " << benefit.num_doc_ben << "\n";
                outFile << "Date document: " << benefit.date_doc_ben << "\n";
                outFile << "Date start: " << benefit.date_start_ben << "\n";
                outFile << "Date end: " << benefit.date_end_ben << "\n";
                outFile << "Destination sign: " << benefit.destination_sign_ben << "\n";
                outFile << "Comment: " << benefit.coment_ben << "\n\n";
            }
                outFile.close();
        }
        else
        {
            cout << "Помилка при відкриті файла.\n";
        }
}
#endif // MODULE_SKOK_H_INCLUDED
