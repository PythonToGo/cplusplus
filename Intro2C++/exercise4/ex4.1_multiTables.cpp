
// Create a tableau that displays the multiplication tables.
// Output the tableau with the function void printTable().

// Output:

// 1   	2	3	4	5	6	7	8	9	10
// 2	4	6	8	10	12	14	16	18	20
// 3	6	9	12	15	18	21	24	27	30
// 4	8	12	16	20	24	28	32	36	40
// 5	10	15	20	25	30	35	40	45	50
// 6	12	18	24	30	36	42	48	54	60
// 7	14	21	28	35	42	49	56	63	70
// 8	16	24	32	40	48	56	64	72	80
// 9	18	27	36	45	54	63	72	81	90
// 10	20	30	40	50	60	70	80	90	100

// Tip: 
// -	Call the function printTableFor() in the main function.
// -	This task requires a nested for loop.
// -	To create the tabulator, use �\t�.

// Then create the same output with a while and a do-while loop, each of which is called with a new function.

#include <iostream>
#include <stdlib.h>
using namespace std;;

void printTableFor(void);
void printTableWhile(void);
void printTableDoWhile(void);

void printTableDoWhile(void){
    int fir = 1;
    int sec = 1;

    do{
        do{
            cout << fir * sec << "\t";
            sec++;
        }
        while (sec <= 10);
        cout << endl;
        fir++;
        sec = 1;
    }
    while (fir <= 10);
};


void printTableWhile(void){
    int fir = 1;
    int sec = 1;

    while(fir<=10){
        while(sec<=10){
            
            cout << fir * sec << "\t";
            sec++;
        }
        cout << endl;
        sec = 1;
        fir++;
    }
};

void printTableFor(void){
    int firNum=1;
    int secNum=1;
    int k = 1;
            for (firNum=1; firNum<=10; firNum++) {
                for(secNum=1; secNum<=10; secNum++){
                cout << firNum * secNum << "\t";
                }
            cout << endl;
            //cout << firNum << " and " << secNum << endl;
            }   
};

int main(){
    cout << "Output with For " << endl << endl; 
    printTableFor();
    cout << endl;
    cout << "Output with While " << endl << endl;
    printTableWhile();
    cout << endl;
    cout << "Output with Do-While " << endl << endl;
    printTableDoWhile();
    cout << endl;
};