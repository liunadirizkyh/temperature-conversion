#include <stdio.h>

void menu();
void celcius();
void reamur();
void fahrenheit();
void kelvin();

int main()
{
    system("cls");
    int option;

    printf("lopyu");
    do
    {
        menu();
        scanf("%d", &option);
        getchar();

        switch(option)
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
                printf("Wrong Input, Try Again!!!\n");
                break;
        }
        
    } while (option != 5);

    system("cls");
    printf("Thank you!!!");

    return 0;
}

void menu()
{
    printf("Temperature Conversion\n");
    printf("=============\n");
    printf("1. Celcius\n");
    printf("2. Reamur\n");
    printf("3. Fahrenheit\n");
    printf("4. Kelvin\n");
    printf("5. Exit\n");
    printf("=============\n");
    printf("Select Menu: ");
}

void celcius()
{
    double temperature, resReamur, resFahrenheit, resKelvin;
    printf("Input Temperature: ");
    scanf("%lf", &temperature);
    getchar();

    resFahrenheit = temperature * 9 / 5 + 32;
    resKelvin = temperature + 273.15;
    resReamur = 4 * temperature / 5;

    printf("\nFahrenheit = %.2lf", resFahrenheit);
    printf("\nKelvin = %.2lf", resKelvin);
    printf("\nReamur = %.2lf\n\n", resReamur);

    enter();
    system("cls");
}

void reamur()
{
    double temperature, resFahrenheit, resCelcius, resKelvin;
    printf("Input Temperature: ");
    scanf("%lf", &temperature);
    getchar();

    resCelcius = temperature * 5 / 4;
    resFahrenheit = temperature * 9 / 4 + 32;
    resKelvin = temperature * 5 / 4 + 273.15;

    printf("\nCelcius = %.2lf", resCelcius);
    printf("\nFahrenheit = %.2lf", resFahrenheit);
    printf("\nKelvin = %.2lf\n\n", resKelvin);

    enter();
    system("cls");
}

void fahrenheit()
{
    double temperature, resReamur, resCelcius;
    printf("Input Temperature: ");
    scanf("%lf", &temperature);
    getchar();

    resCelcius = (temperature - 32) * 5 / 9;
    resReamur = (temperature - 32) * 4 / 9;

    printf("\nCelcius = %.2lf", resCelcius);
    printf("\nReamur = %.2lf\n\n", resReamur);

    enter();
    system("cls");
}

void kelvin()
{
    double temperature, resReamur, resCelcius;
    printf("Input Temperature: ");
    scanf("%lf", &temperature);
    getchar();

    resCelcius = temperature - 273.15;
    resReamur = (temperature - 273.15) * 4 / 5;

    printf("\nCelcius = %.2lf", resCelcius);
    printf("\nReamur = %.2lf\n\n", resReamur);

    enter();
    system("cls");
}

void enter()
{
    printf("Press Enter to continue...");
    getchar();
}
