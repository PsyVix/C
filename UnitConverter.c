#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void currency();
void lenght();
void area();
void vol();
void weight();
void temp();
void speed();
void pressure();
void power();
void main()
{
    int ch;
    while(1)
    {
        printf("*****************************************************\n");
        printf("*                                                   *\n");
        printf("*                      MENU                         *\n");
        printf("*                                                   *\n");
        printf("*****************************************************\n");
        printf("*                 1.Currency Conversion             *\n");
        printf("*                 2.Lenght Conversion               *\n");
        printf("*                 3.Area Conversion                 *\n");
        printf("*                 4.Volume Conversion               *\n");
        printf("*                 5.Weight Conversion               *\n");
        printf("*                 6.Temprature Conversion           *\n");
        printf("*                 7.Speed Conversion                *\n");
        printf("*                 8.Pressure Conversion             *\n");
        printf("*                 9.Power Conversion                *\n");
        printf("*                 10.Exit                           *\n");
        printf("*****************************************************\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);
        if (ch < 1 || ch >10 ) 
        {
            printf("Invalid Choice\n");
        return;
        }
        switch (ch)
        {
            case 1:currency();
                    break;
            case 2:lenght();
                    break;
            case 3:area();
                    break;
            case 4:vol();
                    break;
            case 5:weight();
                    break;
            case 6:temp();
                    break;
            case 7:speed();
                    break;
            case 8:pressure();
                    break;
            case 9:power();
                    break;
            case 10:exit(0);
                   break;
            default:printf("Invalid Choice");
            }        
    }
}
void currency()
{
    float in;
    int c;
    
    printf("\t***********************************************\n");
    printf("\t*                                             *\n");
    printf("\t*          Currency Converter                 *\n");
    printf("\t*                                             *\n");
    printf("\t***********************************************\n");
    printf("\t*         1. Indian Rupees To US Dollar       *\n");
    printf("\t*         2. US Dollar to Indian Rupees       *\n");
    printf("\t*         3. Indian Rupees To Euro            *\n");
    printf("\t*         4. Euro to Indian Rupees            *\n");
    printf("\t*         5. US Dollar to Euro                *\n");
    printf("\t*         6. Euro to US Dollar                *\n");
    printf("\t*         7. Exit                             *\n");
    printf("\t***********************************************\n");
    
    printf("Enter Your Choice: ");
    scanf("%d", &c);
    if (c < 1 || c > 7) 
    {
        printf("Invalid Choice\n");
        return;
    }
    switch (c)
    {
    case 1:
        printf("Enter Indian Rupees: ");
        scanf("%f", &in);
        printf("US Dollars is: %.3f\n", (in * 0.012));
        break;
    case 2:
        printf("Enter US Dollars: ");
        scanf("%f", &in);
        printf("Indian Rupees is: %.3f\n", (in * 84.33)); // Inverse of 1 USD to INR
        break;
    case 3:
        printf("Enter Indian Rupees: ");
        scanf("%f", &in);
        printf("Euros is: %.3f\n", (in * 0.011));
        break;
    case 4:
        printf("Enter Euros: ");
        scanf("%f", &in);
        printf("Indian Rupees is: %.3f\n", (in * 89.84)); // Inverse of 1 Euro to INR
        break;
    case 5:
        printf("Enter US Dollars: ");
        scanf("%f", &in);
        printf("Euros is: %.3f\n", (in * 0.94)); // Conversion rate from USD to Euro
        break;
    case 6:
        printf("Enter Euros: ");
        scanf("%f", &in);
        printf("US Dollars is: %.3f\n", (in * 1.07)); // Conversion rate from Euro to USD
        break;
    case 7:
        break;
    default:
        printf("Invalid Choice\n");
    }
}
void length()
{
    float in, out;
    int c;

    printf("\t***********************************************\n");
    printf("\t*                                             *\n");
    printf("\t*          Length Converter                   *\n");
    printf("\t*                                             *\n");
    printf("\t***********************************************\n");
    printf("\t*         1. Centi-meter To Meter             *\n");
    printf("\t*         2. Meter to Centi-meter             *\n");
    printf("\t*         3. Centi-meter To Kilo-meter        *\n");
    printf("\t*         4. Kilo-meter to Centi-meter        *\n");
    printf("\t*         5. Meter to Kilo-meter              *\n");
    printf("\t*         6. Kilo-meter to Meter              *\n");
    printf("\t*         7. Exit                             *\n");
    printf("\t***********************************************\n");

    printf("Enter Your Choice: ");
    scanf("%d", &c);
    if (c < 1 || c > 7) 
    {
        printf("Invalid Choice\n");
        return;
    }
    switch (c)
    {
    case 1:
        printf("Enter Centi-meter: ");
        scanf("%f", &in);
        out = in / 100; // Convert cm to meters
        printf("Meters is: %.3f\n", out);
        break;
    case 2:
        printf("Enter Meters: ");
        scanf("%f", &in);
        out = in * 100; // Convert meters to cm
        printf("Centi-meter is: %.3f\n", out);
        break;
    case 3:
        printf("Enter Centi-meter: ");
        scanf("%f", &in);
        out = in / 100000; // Convert cm to km
        printf("Kilo-meter is: %.6f\n", out);
        break;
    case 4:
        printf("Enter Kilo-meter: ");
        scanf("%f", &in);
        out = in * 100000; // Convert km to cm
        printf("Centi-meter is: %.3f\n", out);
        break;
    case 5:
        printf("Enter Meters: ");
        scanf("%f", &in);
        out = in / 1000; // Convert meters to km
        printf("Kilo-meter is: %.3f\n", out);
        break;
    case 6:
        printf("Enter Kilo-meter: ");
        scanf("%f", &in);
        out = in * 1000; // Convert km to meters
        printf("Meters is: %.3f\n", out);
        break;
    case 7:
        break;
    default:
        printf("Invalid Choice\n");
    }
}

void weight()
{
    float in, out;
    int c;

    printf("\t**********************************************\n");
    printf("\t*                                            *\n");
    printf("\t*          Weigth Converter                  *\n");
    printf("\t*                                            *\n");
    printf("\t**********************************************\n");
    printf("\t*         1. Grams(g) To Tonne(t)            *\n");
    printf("\t*         2. Tonne(t) to Grams(g)            *\n");
    printf("\t*         3. Grams(g) To Kilogram(kg)        *\n");
    printf("\t*         4. Kilogram(kg) to Grams(g)        *\n");
    printf("\t*         5. Tonne(t) to Kilogram(kg)        *\n");
    printf("\t*         6. Kilogram(kg) to Tonne(t)        *\n");
    printf("\t*         7. Exit                            *\n");
    printf("\t**********************************************\n");

    printf("Enter Your Choice: ");
    scanf("%d", &c);
    if (c < 1 || c > 7) 
    {
        printf("Invalid Choice\n");
        return;
    }
    switch (c)
    {
    case 1:
        printf("Enter Grams(g): ");
        scanf("%f", &in);
        out = in / 100000; // Convert cm to Tonne(t)s
        printf("Tonne(t)s is: %.4f\n", out);
        break;
    case 2:
        printf("Enter Tonne(t)s: ");
        scanf("%f", &in);
        out = in * 0.000001; // Convert Tonne(t)s to cm
        printf("Grams(g) is: %.3f\n", out);
        break;
    case 3:
        printf("Enter Grams(g): ");
        scanf("%f", &in);
        out = in / 1000; // Convert cm to km
        printf("Kilogram(kg) is: %.6f\n", out);
        break;
    case 4:
        printf("Enter Kilogram(kg): ");
        scanf("%f", &in);
        out = in * 0.001; // Convert km to cm
        printf("Grams(g) is: %.3f\n", out);
        break;
    case 5:
        printf("Enter Tonne(t)s: ");
        scanf("%f", &in);
        out = in / 0.001; // Convert Tonne(t)s to km
        printf("Kilogram(kg) is: %.3f\n", out);
        break;
    case 6:
        printf("Enter Kilogram(kg): ");
        scanf("%f", &in);
        out = in *1000; // Convert km to Tonne(t)s
        printf("Tonne(t)s is: %.3f\n", out);
        break;
    case 7:
        break;
    default:
        printf("Invalid Choice\n");
    }
}
void temp()
{
    float in, out;
    int c;

    printf("\t**********************************************\n");
    printf("\t*                                            *\n");
    printf("\t*          Temperature Converter             *\n");
    printf("\t*                                            *\n");
    printf("\t**********************************************\n");
    printf("\t*         1. Celcius(C) To Farhenhit(F)      *\n");
    printf("\t*         2. Farhenhit(F) to Celcius(C)      *\n");
    printf("\t*         3. Celcius(C) To Kelvin(K)        *\n");
    printf("\t*         4. Kelvin(K) to Celcius(C)        *\n");
    printf("\t*         5. Farhenhit(F) to Kelvin(K)      *\n");
    printf("\t*         6. Kelvin(K) to Farhenhit(F)      *\n");
    printf("\t*         7. Exit                           *\n");
    printf("\t**********************************************\n");

    printf("Enter Your Choice: ");
    scanf("%d", &c);
    if (c < 1 || c > 7) 
    {
        printf("Invalid Choice\n");
        return;
    }
    switch (c)
    {
    case 1:
        printf("Enter Celcius(C): ");
        scanf("%f", &in);
        out = (in * 9/5) + 32; // Convert cm to Farhenhit(F)s
        printf("Farhenhit(F)s is: %.4f\n", out);
        break;
    case 2:
        printf("Enter Farhenhit(F)s: ");
        scanf("%f", &in);
        out = (in- 32) * 5/9; // Convert Farhenhit(F)s to cm
        printf("Celcius(C) is: %.3f\n", out);
        break;
    case 3:
        printf("Enter Celcius(C): ");
        scanf("%f", &in);
        out = in + 273.15; // Convert cm to km
        printf("Kelvin(K) is: %.6f\n", out);
        break;
    case 4:
        printf("Enter Kelvin(K): ");
        scanf("%f", &in);
        out = in - 273.15; // Convert km to cm
        printf("Celcius(C) is: %.3f\n", out);
        break;
    case 5:
        printf("Enter Farhenhit(F)s: ");
        scanf("%f", &in);
        out = (in - 32) * 5/9 + 273.15; // Convert Farhenhit(F)s to km
        printf("Kelvin(K) is: %.3f\n", out);
        break;
    case 6:
        printf("Enter Kelvin(K): ");
        scanf("%f", &in);
        out = (in - 273.15) * 9/5 + 32; // Convert km to Farhenhit(F)s
        printf("Farhenhit(F)s is: %.3f\n", out);
        break;
    case 7:
        break;
    default:
        printf("Invalid Choice\n");
    }
}
void speed()
{
    float in, out;
    int c;

    printf("\t************************************************************************\n");
    printf("\t*                                                                      *\n");
    printf("\t*                         Speed Converter                              *\n");
    printf("\t*                                                                      *\n");
    printf("\t************************************************************************\n");
    printf("\t*         1. Meter per Second (m/s) To Kilometer per Hour(Km/h)        *\n");
    printf("\t*         2. Kilometer per Hour(Km/h) to Meter per Second (m/s)        *\n");
    printf("\t*         3. Meter per Second (m/s) To Feet per Second (ft/s)          *\n");
    printf("\t*         4. Feet per Second (ft/s) to Meter per Second (m/s)          *\n");
    printf("\t*         5. Kilometer per Hour(Km/h) to Feet per Second (ft/s)        *\n");
    printf("\t*         6. Feet per Second (ft/s) to Kilometer per Hour(Km/h)        *\n");
    printf("\t*         7. Exit                                                      *\n");
    printf("\t************************************************************************\n");

    printf("Enter Your Choice: ");
    scanf("%d", &c);
    if (c < 1 || c > 7) 
    {
        printf("Invalid Choice\n");
        return;
    }
    switch (c)
    {
    case 1:
        printf("Enter Meter per Second (m/s): ");
        scanf("%f", &in);
        out = in * 3.6; // Convert m/s to Km/h
        printf("Kilometer per Hour(Km/h) is: %.4f\n", out);
        break;
    case 2:
        printf("Enter Kilometer per Hour(Km/h): ");
        scanf("%f", &in);
        out = in / 0.277778; // Convert Km/h to m/s
        printf("Meter per Second (m/s) is: %.3f\n", out);
        break;
    case 3:
        printf("Enter Meter per Second (m/s): ");
        scanf("%f", &in);
        out = in * 3.28084; // Convert m/s to ft/s
        printf("Feet per Second (ft/s) is: %.6f\n", out);
        break;
    case 4:
        printf("Enter Feet per Second (ft/s): ");
        scanf("%f", &in);
        out = in * 0.3048; // Convert ft/s to m/s
        printf("Meter per Second (m/s) is: %.3f\n", out);
        break;
    case 5:
        printf("Enter Kilometer per Hour(Km/h): ");
        scanf("%f", &in);
        out = in * 0.911344; // Convert Km/h to ft/s
        printf("Feet per Second (ft/s) is: %.3f\n", out);
        break;
    case 6:
        printf("Enter Feet per Second (ft/s): ");
        scanf("%f", &in);
        out = in / 1.09728; // Convert ft/s to Km/h
        printf("Kilometer per Hour(Km/h) is: %.3f\n", out);
        break;
    case 7:
        break;
    default:
        printf("Invalid Choice\n");
    }
}
void pressure()
{
        float in, out;
    int c;

    printf("\t************************************************************************\n");
    printf("\t*                                                                      *\n");
    printf("\t*                          Unit Converter                              *\n");
    printf("\t*                                                                      *\n");
    printf("\t************************************************************************\n");
    printf("\t*         1. Pascals (Pa) To Atmospheres (atm)                         *\n");
    printf("\t*         2. Atmospheres (atm) to Pascals (Pa)                         *\n");
    printf("\t*         3. Pascals (Pa) To Pounds per square inch (psi)              *\n");
    printf("\t*         4. Pounds per square inch (psi) to Pascals (Pa)              *\n");
    printf("\t*         5. Atmospheres (atm) to Pounds per square inch(psi)          *\n");
    printf("\t*         6. Pounds per square inch (psi) to Atmospheres (atm)         *\n");
    printf("\t*         7. Exit                                                      *\n");
    printf("\t************************************************************************\n");

    printf("Enter Your Choice: ");
    scanf("%d", &c);
    if (c < 1 || c > 7) 
    {
        printf("Invalid Choice\n");
        return;
    }
    switch (c)
    {
    case 1:
        printf("Enter Pascals (Pa): ");
        scanf("%f", &in);
        out = in / 101325; // Convert cm to Atmospheres (atm)s
        printf("Atmospheres (atm)s is: %.4f\n", out);
        break;
    case 2:
        printf("Enter Atmospheres (atm)s: ");
        scanf("%f", &in);
        out = in* 101325; // Convert Atmospheres (atm)s to cm
        printf("Pascals (Pa) is: %.3f\n", out);
        break;
    case 3:
        printf("Enter Pascals (Pa): ");
        scanf("%f", &in);
        out = in/ 6894.76; // Convert cm to km
        printf("Pounds per square inch (psi) is: %.6f\n", out);
        break;
    case 4:
        printf("Enter Pounds per square inch (psi): ");
        scanf("%f", &in);
        out = in * 6894.76; // Convert km to cm
        printf("Pascals (Pa) is: %.3f\n", out);
        break;
    case 5:
        printf("Enter Atmospheres (atm)s: ");
        scanf("%f", &in);
        out = in * 14.696; // Convert Atmospheres (atm)s to km
        printf("Pounds per square inch (psi) is: %.3f\n", out);
        break;
    case 6:
        printf("Enter Pounds per square inch (psi): ");
        scanf("%f", &in);
        out = in / 14.696; // Convert km to Atmospheres (atm)s
        printf("Atmospheres (atm)s is: %.3f\n", out);
        break;
    case 7:
        break;
    default:
        printf("Invalid Choice\n");
    }
}

void power()
{
        float in, out;
    int c;

    printf("\t***************************************************************\n");
    printf("\t*                                                             *\n");
    printf("\t*                  Power Converter                            *\n");
    printf("\t*                                                             *\n");
    printf("\t**************************************************************\n");
    printf("\t*         1. Watts (W) To Horsepower (hp)                    *\n");
    printf("\t*         2. Horsepower (hp) to Watts (W)                    *\n");
    printf("\t*         3. Watts (W) To Kilowatts (kW)                     *\n");
    printf("\t*         4. Kilowatts (kW) to Watts (W)                     *\n");
    printf("\t*         5. Horsepower (hp) to Kilowatts (kW)               *\n");
    printf("\t*         6. Kilowatts (kW) to Horsepower (hp)               *\n");
    printf("\t*         7. Exit                                            *\n");
    printf("\t**************************************************************\n");

    printf("Enter Your Choice: ");
    scanf("%d", &c);
    if (c < 1 || c > 7) 
    {
        printf("Invalid Choice\n");
        return;
    }
    switch (c)
    {
    case 1:
        printf("Enter Watts (W): ");
        scanf("%f", &in);
        out = in *0.00134102 ; // Convert cm to Horsepower (hp)s
        printf("Horsepower (hp)s is: %.4f\n", out);
        break;
    case 2:
        printf("Enter Horsepower (hp)s: ");
        scanf("%f", &in);
        out = in* 745.699872; // Convert Horsepower (hp)s to cm
        printf("Watts (W) is: %.3f\n", out);
        break;
    case 3:
        printf("Enter Watts (W): ");
        scanf("%f", &in);
        out = in*1000; // Convert cm to km
        printf("Kilowatts (kW) is: %.6f\n", out);
        break;
    case 4:
        printf("Enter Kilowatts (kW): ");
        scanf("%f", &in);
        out = in *0.001 ; // Convert km to cm
        printf("Watts (W) is: %.3f\n", out);
        break;
    case 5:
        printf("Enter Horsepower (hp)s: ");
        scanf("%f", &in);
        out = in *0.7457; // Convert Horsepower (hp)s to km
        printf("Kilowatts (kW) is: %.3f\n", out);
        break;
    case 6:
        printf("Enter Kilowatts (kW): ");
        scanf("%f", &in);
        out = in *1.3410; // Convert km to Horsepower (hp)s
        printf("Horsepower (hp)s is: %.3f\n", out);
        break;
    case 7:
        break;
    default:
        printf("Invalid Choice\n");
    }
}

