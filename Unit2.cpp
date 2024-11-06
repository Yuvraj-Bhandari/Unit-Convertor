#include <iostream>
using namespace std;

// Length Conversions
double metersToKilometers(double meters) { return meters / 1000; }
double kilometersToMeters(double kilometers) { return kilometers * 1000; }
double centimetersToMeters(double cm) { return cm / 100; }
double inchesToCentimeters(double inches) { return inches * 2.54; }
double feetToMeters(double feet) { return feet * 0.3048; }

// Temperature Conversions
double celsiusToFahrenheit(double celsius) { return (celsius * 9 / 5) + 32; }
double fahrenheitToCelsius(double fahrenheit) { return (fahrenheit - 32) * 5 / 9; }
double celsiusToKelvin(double celsius) { return celsius + 273.15; }
double kelvinToCelsius(double kelvin) { return kelvin - 273.15; }

// Weight/Mass Conversions
double kilogramsToPounds(double kg) { return kg * 2.20462; }
double poundsToKilograms(double lbs) { return lbs / 2.20462; }
double gramsToKilograms(double grams) { return grams / 1000; }
double ouncesToGrams(double ounces) { return ounces * 28.3495; }

// Volume Conversions
double litersToMilliliters(double liters) { return liters * 1000; }
double millilitersToLiters(double ml) { return ml / 1000; }
double cubicMetersToLiters(double m3) { return m3 * 1000; }
double gallonsToLiters(double gallons) { return gallons * 3.78541; }

// Speed Conversions
double kphToMph(double kph) { return kph * 0.621371; }
double mphToKph(double mph) { return mph * 1.60934; }
double mpsToKph(double mps) { return mps * 3.6; }

// Area Conversions
double squareMetersToSquareKilometers(double m2) { return m2 / 1000000.0; }
double squareKilometersToSquareMeters(double km2) { return km2 * 1000000.0; }
double acresToSquareMeters(double acres) { return acres * 4046.86; }

// Time Conversions
double minutesToHours(double minutes) { return minutes / 60; }
double hoursToSeconds(double hours) { return hours * 3600; }
double daysToHours(double days) { return days * 24; }

int main() {
    int choice;
    double value, result;

    do {
        cout << "Unit Converter Menu:\n";
        cout << "1. Meters to Kilometers\n";
        cout << "2. Kilometers to Meters\n";
        cout << "3. Centimeters to Meters\n";
        cout << "4. Inches to Centimeters\n";
        cout << "5. Feet to Meters\n";
        cout << "6. Celsius to Fahrenheit\n";
        cout << "7. Fahrenheit to Celsius\n";
        cout << "8. Celsius to Kelvin\n";
        cout << "9. Kelvin to Celsius\n";
        cout << "10. Kilograms to Pounds\n";
        cout << "11. Pounds to Kilograms\n";
        cout << "12. Grams to Kilograms\n";
        cout << "13. Ounces to Grams\n";
        cout << "14. Liters to Milliliters\n";
        cout << "15. Milliliters to Liters\n";
        cout << "16. Cubic Meters to Liters\n";
        cout << "17. Gallons (US) to Liters\n";
        cout << "18. Kilometers per Hour to Miles per Hour\n";
        cout << "19. Miles per Hour to Kilometers per Hour\n";
        cout << "20. Meters per Second to Kilometers per Hour\n";
        cout << "21. Square Meters to Square Kilometers\n";
        cout << "22. Square Kilometers to Square Meters\n";
        cout << "23. Acres to Square Meters\n";
        cout << "24. Minutes to Hours\n";
        cout << "25. Hours to Seconds\n";
        cout << "26. Days to Hours\n";
        cout << "27. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 27) {
            cout << "Exiting the program.\n";
            break;
        }

        cout << "Enter the value to convert: ";
        cin >> value;

        switch (choice) {
            case 1: result = metersToKilometers(value); cout << value << " meters is " << result << " kilometers.\n"; break;
            case 2: result = kilometersToMeters(value); cout << value << " kilometers is " << result << " meters.\n"; break;
            case 3: result = centimetersToMeters(value); cout << value << " centimeters is " << result << " meters.\n"; break;
            case 4: result = inchesToCentimeters(value); cout << value << " inches is " << result << " centimeters.\n"; break;
            case 5: result = feetToMeters(value); cout << value << " feet is " << result << " meters.\n"; break;
            case 6: result = celsiusToFahrenheit(value); cout << value << " Celsius is " << result << " Fahrenheit.\n"; break;
            case 7: result = fahrenheitToCelsius(value); cout << value << " Fahrenheit is " << result << " Celsius.\n"; break;
            case 8: result = celsiusToKelvin(value); cout << value << " Celsius is " << result << " Kelvin.\n"; break;
            case 9: result = kelvinToCelsius(value); cout << value << " Kelvin is " << result << " Celsius.\n"; break;
            case 10: result = kilogramsToPounds(value); cout << value << " kilograms is " << result << " pounds.\n"; break;
            case 11: result = poundsToKilograms(value); cout << value << " pounds is " << result << " kilograms.\n"; break;
            case 12: result = gramsToKilograms(value); cout << value << " grams is " << result << " kilograms.\n"; break;
            case 13: result = ouncesToGrams(value); cout << value << " ounces is " << result << " grams.\n"; break;
            case 14: result = litersToMilliliters(value); cout << value << " liters is " << result << " milliliters.\n"; break;
            case 15: result = millilitersToLiters(value); cout << value << " milliliters is " << result << " liters.\n"; break;
            case 16: result = cubicMetersToLiters(value); cout << value << " cubic meters is " << result << " liters.\n"; break;
            case 17: result = gallonsToLiters(value); cout << value << " gallons is " << result << " liters.\n"; break;
            case 18: result = kphToMph(value); cout << value << " kph is " << result << " mph.\n"; break;
            case 19: result = mphToKph(value); cout << value << " mph is " << result << " kph.\n"; break;
            case 20: result = mpsToKph(value); cout << value << " m/s is " << result << " kph.\n"; break;
            case 21: result = squareMetersToSquareKilometers(value); cout << value << " square meters is " << result << " square kilometers.\n"; break;
            case 22: result = squareKilometersToSquareMeters(value); cout << value << " square kilometers is " << result << " square meters.\n"; break;
            case 23: result = acresToSquareMeters(value); cout << value << " acres is " << result << " square meters.\n"; break;
            case 24: result = minutesToHours(value); cout << value << " minutes is " << result << " hours.\n"; break;
            case 25: result = hoursToSeconds(value); cout << value << " hours is " << result << " seconds.\n"; break;
            case 26: result = daysToHours(value); cout << value << " days is " << result << " hours.\n"; break;
            default: cout << "Invalid choice, please try again.\n"; break;
        }
        cout << endl;
    } while (true);

    return 0;
}
