#include <iostream>
#include <math.h>
#include <iomanip>


void AddTwoNumber(int szam1, int szam2);
void SubstractTwoNumber(int szam1, int szam2);
void MultiplyTwoNumber(int szam1, int szam2);
void DivideTwoNumber(int szam1, int szam2);
void hatvanyozas(int szam1, int szam2);

int osszeadas(int szam1, int szam2);
int kivonas(int szam1, int szam2);
int szorzas(int szam1, int szam2);
double osztas(double szam1, double szam2);
int hatvanyozas_muvelet(int szam1, int szam2);

void ListOperations();
void CalculateResult(char option, int szam1, int szam2);

char option_check(char option);
int szam_check();



int main()
{
    int szam1;
    int szam2;
    char option;

    do {
        ListOperations();
        std::cin >> option;
        if (option == 'x' || option == 'X') {
            std::cout << "viszlat" << std::endl;
            return 0;
        }
        option = option_check(option);

        std::cout << "irj be egy szamot" << std::endl;
        szam1 = szam_check();
        std::cout << "irj be meg egy szamot" << std::endl;
        szam2 = szam_check();

        CalculateResult(option, szam1, szam2);

    } while (option != 'x' && option != 'X');

    return 0;
}

void AddTwoNumber(int szam1, int szam2) {
    // osszeadas kiiras
    std::cout << szam1 << " + " << szam2 << " = " << osszeadas( szam1, szam2) << std::endl;
}

void SubstractTwoNumber(int szam1, int szam2) {
    // kivonas kiiras
    std::cout << szam1 << " - " << szam2 << " = " << kivonas(szam1, szam2) << std::endl;
}

void MultiplyTwoNumber(int szam1, int szam2) {
    // szorzas kiiras
    std::cout << szam1 << " * " << szam2 << " = " << szorzas(szam1, szam2) << std::endl;
}

void DivideTwoNumber(int szam1, int szam2) {
    //osztas kiiras
    std::cout << szam1 << " / " << szam2 << " = " << osztas(szam1, szam2) << std::endl;
}

void hatvanyozas(int szam1, int szam2) {
    //hatvanyozas kiiras
    std::cout << hatvanyozas_muvelet(szam1, szam2) << std::endl;
}

int osszeadas(int szam1, int szam2) {
    //osszeadas muvelet
    return szam1 + szam2;
    
}

int kivonas(int szam1, int szam2) {
    //kivonas muvelet
    return szam1 - szam2;
    
}

int szorzas(int szam1, int szam2) {
    //szorzas muvelet
    return szam1* szam2;
    
}

double osztas(double szam1, double szam2) {
    //osztas muvelet
    return szam1 / szam2;
    
}

int hatvanyozas_muvelet(int szam1, int szam2) {
    //hatvanyozas muvelet
    return pow(szam1, szam2);
}

void ListOperations() {
    std::cout << "Muvelet kivalasztasahoz usd be a megfelelo betut! " << std::endl;
    std::cout << "valaszthato muveletek:" << std::endl;
    std::cout << "\t a) osszeadas" << std::endl;
    std::cout << "\t b) Kivonas" << std::endl;
    std::cout << "\t c) Szorzas" << std::endl;
    std::cout << "\t d) Osztas" << std::endl;
    std::cout << "\t e) Hatvanyozas" << std::endl;
    std::cout << "\t x) kilepes" << std::endl;
    
}

void CalculateResult(char option, int szam1, int szam2) {
    if (option == 'a') {
        AddTwoNumber(szam1, szam2);
    }
    else if (option == 'b') {
        SubstractTwoNumber(szam1, szam2);
    }
    else if (option == 'c') {
        MultiplyTwoNumber(szam1, szam2);
    }
    else if (option == 'd') {
        DivideTwoNumber(szam1, szam2);
    }
    else if (option == 'e') {
        hatvanyozas(szam1, szam2);
    }
}

char option_check(char option) {
    while(!(option == 'a' || option == 'b' || option == 'c' || option == 'd' || option == 'e')){
        std::cout << "nem jo betut irtal be, probald ujra" << std::endl;
        std::cin >> option;
    }
    return option;
    
}

int szam_check() {
    int szam;
    std::cin >> szam;
    while (std::cin.fail()) {
        std::cout << "nem jo szamot irtal be, probald ujra" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> szam;
    }


    return szam;
}
    