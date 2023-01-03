#include <stdio.h>

void menu();
void celcius();
void reamur();
void fahrenheit();
void kelvin();

int main()
{
    system("cls");
    int pilihan;

    do
    {
        menu();
        scanf("%d", &pilihan);
        getchar();

        switch(pilihan)
        {
            case 1:
                system("cls");
                celcius();
                break;
            case 2:
                system("cls");
                reamur();
                break;
            case 3:
                system("cls");
                fahrenheit();
                break;
            case 4:
                system("cls");
                kelvin();
                break;
            default:
                system("cls");
                printf("Input Salah, Coba Lagi!!!\n");
                break;
        }
        
    } while (pilihan != 5);

    system("cls");
    printf("Terima Kasih!!!");

    return 0;
}

void menu()
{
    printf("Konversi Suhu\n");
    printf("=============\n");
    printf("1. Celcius\n");
    printf("2. Reamur\n");
    printf("3. Fahrenheit\n");
    printf("4. Kelvin\n");
    printf("5. Exit\n");
    printf("=============\n");
    printf("Pilih menu: ");
}

void celcius()
{
    double suhu, hasilReamur, hasiFahrenheit, hasilKelvin;
    printf("Masukan Suhu Awal: ");
    scanf("%lf", &suhu);
    getchar();

    hasiFahrenheit = suhu * 9 / 5 + 32;
    hasilKelvin = suhu + 273.15;
    hasilReamur = 4 * suhu / 5;

    printf("\nFahrenheit = %.2lf", hasiFahrenheit);
    printf("\nKelvin = %.2lf", hasilKelvin);
    printf("\nReamur = %.2lf\n\n", hasilReamur);

    enter();
    system("cls");
}

void reamur()
{
    double suhu, hasilFahrenheit, hasilCelcius, hasilKelvin;
    printf("Masukan Suhu Awal: ");
    scanf("%lf", &suhu);
    getchar();

    hasilCelcius = suhu * 5 / 4;
    hasilFahrenheit = suhu * 9 / 4 + 32;
    hasilKelvin = suhu * 5 / 4 + 273.15;

    printf("\nCelcius = %.2lf", hasilCelcius);
    printf("\nFahrenheit = %.2lf", hasilFahrenheit);
    printf("\nKelvin = %.2lf\n\n", hasilKelvin);

    enter();
    system("cls");
}

void fahrenheit()
{
    double suhu, hasilReamur, hasilCelcius;
    printf("Masukan Suhu Awal: ");
    scanf("%lf", &suhu);
    getchar();

    hasilCelcius = (suhu - 32) * 5 / 9;
    hasilReamur = (suhu - 32) * 4 / 9;

    printf("\nCelcius = %.2lf", hasilCelcius);
    printf("\nReamur = %.2lf\n\n", hasilReamur);

    enter();
    system("cls");
}

void kelvin()
{
    double suhu, hasilReamur, hasilCelcius;
    printf("Masukan Suhu Awal: ");
    scanf("%lf", &suhu);
    getchar();

    hasilCelcius = suhu - 273.15;
    hasilReamur = (suhu - 273.15) * 4 / 5;

    printf("\nCelcius = %.2lf", hasilCelcius);
    printf("\nReamur = %.2lf\n\n", hasilReamur);

    enter();
    system("cls");
}

void enter()
{
    printf("Tekan Enter untuk melanjutkan");
    getchar();
}