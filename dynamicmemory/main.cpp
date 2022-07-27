#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include <regex>

using namespace std;

struct SALESREC
{
    char     date[11];
    char     region[11];
    char     rep[11];
    char     item[11];
    int      units;
    float    unitCost;
    float    Total;
};

void simpleSortTotal(SALESREC *salesArr[40], int c);

int main()
{
    ifstream infile;
    int i=0;
    int *ptr;
    ptr = (int*) malloc(sizeof(int));
    malloc(sizeof(char));
    char cNum[11];
    malloc(sizeof(SALESREC));
    SALESREC salesArr[40];
    malloc(sizeof(int));
    int salesArrayCount;
    SALESREC* s[40];

    infile.open ("SalesDataDyn.csv", ifstream::in);
    if (infile.is_open())
    {
        int   c=0;
        while (infile.good())
        {
            infile.getline(salesArr[c].date, 256, ',');
            infile.getline(salesArr[c].region, 256, ',');
            infile.getline(salesArr[c].rep, 256, ',');
            infile.getline(salesArr[c].item, 256, ',');

            infile.getline(cNum, 256, ',');
            salesArr[c].units = atoi(cNum);
            infile.getline(cNum, 256, '\n');
            salesArr[c].unitCost = atof(cNum);
            salesArr[c].Total = ((float) salesArr[c].units) * salesArr[c].unitCost;

            i++ ;
            c++;
        }
        salesArrayCount = c-1;
        infile.close();
    }
    else
    {
        cout << "Error opening file";
    }

    // Initialize the sort array pointers
    for (int i=0; i < salesArrayCount; i++)
        s[i] = &salesArr[i];

    simpleSortTotal (s, salesArrayCount);

    //cout << "Record: OrderDate, Region, Rep, Item, 0, 0, 0" << endl;

    for (int i=0; i < salesArrayCount; i++) {
        stringstream ugh1;
        stringstream region;
        stringstream rep;
        stringstream item;
        string reg;
        string repp;
        string ite;

        region << s[i]->region;
        reg = region.str();
        //reg = regex_replace(reg, regex("^ +| +$|( ) +"), "$1");

        rep << s[i]->rep;
        repp = rep.str();
        //repp = regex_replace(repp, regex("^ +| +$|( ) +"), "$1");

        item << s[i]->item;
        ite = item.str();
        //ite = regex_replace(ite, regex("^ +| +$|( ) +"), "$1");

        ugh1 << s[i]->date <<"," << reg << "," << repp << "," << ite << ", " << s[i]->units << ", " << s[i]->unitCost << ", " << s[i]->Total << endl;
        string ihatejava = ugh1.str();
        //ihatejava = regex_replace(ihatejava, regex("^ +| +$|( ) +"), "$1");

        cout << "Record: " << ihatejava;
    }


}

void simpleSortTotal( SALESREC *salesArr[40] , int c)
{
    SALESREC* temp[1];
    for (int i=0; i < c; i++)
        for (int j=i; j < c; j++)
            if (salesArr[i]->Total > salesArr[j]->Total)
            {
                temp[0] = salesArr[i];
                salesArr[i] = salesArr[j];
                salesArr[j] = temp[0];
            }
}