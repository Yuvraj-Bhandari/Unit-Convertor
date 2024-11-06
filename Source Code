#include <iostream>
using namespace std;

class UnitConverter {
public:
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
    double squareMetersToSquareKilometers(double m2) { return m2 / 1000000; }
    double squareKilometersToSquareMeters(double km2) { return km2 * 1000000; }
    double acresToSquareMeters(double acres) { return acres * 4046.86; }

    // Time Conversions
    double minutesToHours(double minutes) { return minutes / 60; }
    double hoursToSeconds(double hours) { return hours * 3600; }
    double daysToHours(double days) { return days * 24; }
};

int main() {
    UnitConverter converter; // Create an instance of UnitConverter class
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
        cout << "Enter your choice (1-26 to select conversion, 27 to exit, if Greater value entered value will be erased): ";
        cin >> choice;

        // Validate the choice input
        if (choice < 1 || choice > 27) {
            cout << "Invalid choice. Please enter a number between 1 and 26, or 27 to exit.\n";
            continue;
        }

        if (choice == 27) {
            cout << "Exiting the program.\n";
            break;
        }

        // Display prompt based on user choice
        switch (choice) {
            case 1: cout << "Enter the value in meters to convert to kilometers: "; break;
            case 2: cout << "Enter the value in kilometers to convert to meters: "; break;
            case 3: cout << "Enter the value in centimeters to convert to meters: "; break;
            case 4: cout << "Enter the value in inches to convert to centimeters: "; break;
            case 5: cout << "Enter the value in feet to convert to meters: "; break;
            case 6: cout << "Enter the value in Celsius to convert to Fahrenheit: "; break;
            case 7: cout << "Enter the value in Fahrenheit to convert to Celsius: "; break;
            case 8: cout << "Enter the value in Celsius to convert to Kelvin: "; break;
            case 9: cout << "Enter the value in Kelvin to convert to Celsius: "; break;
            case 10: cout << "Enter the value in kilograms to convert to pounds: "; break;
            case 11: cout << "Enter the value in pounds to convert to kilograms: "; break;
            case 12: cout << "Enter the value in grams to convert to kilograms: "; break;
            case 13: cout << "Enter the value in ounces to convert to grams: "; break;
            case 14: cout << "Enter the value in liters to convert to milliliters: "; break;
            case 15: cout << "Enter the value in milliliters to convert to liters: "; break;
            case 16: cout << "Enter the value in cubic meters to convert to liters: "; break;
            case 17: cout << "Enter the value in gallons to convert to liters: "; break;
            case 18: cout << "Enter the value in kilometers per hour to convert to miles per hour: "; break;
            case 19: cout << "Enter the value in miles per hour to convert to kilometers per hour: "; break;
            case 20: cout << "Enter the value in meters per second to convert to kilometers per hour: "; break;
            case 21: cout << "Enter the value in square meters to convert to square kilometers: "; break;
            case 22: cout << "Enter the value in square kilometers to convert to square meters: "; break;
            case 23: cout << "Enter the value in acres to convert to square meters: "; break;
            case 24: cout << "Enter the value in minutes to convert to hours: "; break;
            case 25: cout << "Enter the value in hours to convert to seconds: "; break;
            case 26: cout << "Enter the value in days to convert to hours: "; break;
        }

        // Get the value from user
        cin >> value;

        // Check for negative values where negative input is not logical
        if (value < 0 && (choice != 7 && choice != 6 && choice != 9 && choice != 8)) { // Exclude temperature conversions
            cout << "Negative values are not allowed for this conversion. Please enter a positive value.\n";
            continue;
        }

        // Perform the conversion and display result
        switch (choice) {
            case 1: result = converter.metersToKilometers(value); cout << value << " meters is " << result << " kilometers.\n"; break;
            case 2: result = converter.kilometersToMeters(value); cout << value << " kilometers is " << result << " meters.\n"; break;
            case 3: result = converter.centimetersToMeters(value); cout << value << " centimeters is " << result << " meters.\n"; break;
            case 4: result = converter.inchesToCentimeters(value); cout << value << " inches is " << result << " centimeters.\n"; break;
            case 5: result = converter.feetToMeters(value); cout << value << " feet is " << result << " meters.\n"; break;
            case 6: result = converter.celsiusToFahrenheit(value); cout << value << " Celsius is " << result << " Fahrenheit.\n"; break;
            case 7: result = converter.fahrenheitToCelsius(value); cout << value << " Fahrenheit is " << result << " Celsius.\n"; break;
            case 8: result = converter.celsiusToKelvin(value); cout << value << " Celsius is " << result << " Kelvin.\n"; break;
            case 9: result = converter.kelvinToCelsius(value); cout << value << " Kelvin is " << result << " Celsius.\n"; break;
            case 10: result = converter.kilogramsToPounds(value); cout << value << " kilograms is " << result << " pounds.\n"; break;
            case 11: result = converter.poundsToKilograms(value); cout << value << " pounds is " << result << " kilograms.\n"; break;
            case 12: result = converter.gramsToKilograms(value); cout << value << " grams is " << result << " kilograms.\n"; break;
            case 13: result = converter.ouncesToGrams(value); cout << value << " ounces is " << result << " grams.\n"; break;
            case 14: result = converter.litersToMilliliters(value); cout << value << " liters is " << result << " milliliters.\n"; break;
            case 15: result = converter.millilitersToLiters(value); cout << value << " milliliters is " << result << " liters.\n"; break;
            case 16: result = converter.cubicMetersToLiters(value); cout << value << " cubic meters is " << result << " liters.\n"; break;
            case 17: result = converter.gallonsToLiters(value); cout << value << " gallons is " << result << " liters.\n"; break;
            case 18: result = converter.kphToMph(value); cout << value << " kph is " << result << " mph.\n"; break;
            case 19: result = converter.mphToKph(value); cout << value << " mph is " << result << " kph.\n"; break;
            case 20: result = converter.mpsToKph(value); cout << value << " mps is " << result << " kph.\n"; break;
            case 21: result = converter.squareMetersToSquareKilometers(value); cout << value << " square meters is " << result << " square kilometers.\n"; break;
            case 22: result = converter.squareKilometersToSquareMeters(value); cout << value << " square kilometers is " << result << " square meters.\n"; break;
            case 23: result = converter.acresToSquareMeters(value); cout << value << " acres is " << result << " square meters.\n"; break;
            case 24: result = converter.minutesToHours(value); cout << value << " minutes is " << result << " hours.\n"; break;
            case 25: result = converter.hoursToSeconds(value); cout << value << " hours is " << result << " seconds.\n"; break;
            case 26: result = converter.daysToHours(value); cout << value << " days is " << result << " hours.\n"; break;
        }

    } while (true);

    return 0;
}
