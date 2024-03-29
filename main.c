#include <stdio.h>

void bmiCalc();
void bloodPressure();
void riskScore();



int main() {    
    // BMI (Body Mass Index) calculation, blood pressure assessment, or cardiac risk score assessment
    int input;

    printf("--------------------Menu--------------------\n");
    printf("Press 1 for BMI Calculation\n");
    printf("Press 2 for Blood Pressure Assessment\n");
    printf("Press 3 for Cardiac Risk Score Assessment\n");
    printf("--------------------------------------------\n");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        bmiCalc();    
        break;
    case 2:
        bloodPressure();
        break;
    case 3:
        printf("test 3");
        break;
    default:
        break;
    }




    return 0;
}

void bmiCalc(){

    // This option allows the user to input their weight and height, and the program calculates their BMI using the formula: 
    // BMI = weight (kg) / height (m)^2.
    double bmi, weight, height ;

    printf("Please input you height in centimeters:\n");
    scanf("%lf", &height );
    height = height / 100;
    printf("Please input you weight in kilograms:\n");
    scanf("%lf", &weight );

    bmi = weight / (height * height);
    /*
    Underweight: BMI less than 18.5
    Normal weight: BMI between 18.5 and 24.9
    Overweight: BMI between 25 and 29.9
    Obesity: BMI 30 or greater
    */
    printf("Your BMI is %.1lf \n", bmi);

    if(bmi<18.5){
        printf("Your Underweight\n");
    }
    else if(bmi >=18.5 && bmi <= 24.9){
        printf("Your Normal Weight\n");
    }
    else if(bmi >=25 && bmi <= 29.9){
        printf("Your Overweigth\n");
    } 
    else{
        printf("Your Obsese\n");
    }

    main();
}

void bloodPressure(){
    int systolic[5], diastolic[5];
    double avgSys = 0, avgDia = 0;

    for (int i = 0; i < 5; i++){
        printf("Enter blood pressure reading %d (Enter systolic then diastolic): \n", i+1);
        scanf("%d %d", &systolic[i], &diastolic[i]);

        avgSys += systolic[i];
        avgDia += diastolic[i];

    }

    avgSys /= 5;
    avgDia /= 5;

    printf("Average Systolic: %.2lf \n Average Diastolic: %.2lf\n", avgSys, avgDia);

    // Determine blood pressure category
    if (avgSys <= 90 && avgDia <= 60) {
        printf("You may have low blood pressure\n");
    } 
    else if (avgSys <= 120 && avgDia <= 80) {
        printf("You have ideal blood pressure\n");
    } 
    else if ((avgSys <= 140 && avgDia <= 90) ) {
        printf("You have pre-high blood pressure\n");
    } 
    else {
        printf("You may have high blood pressure\n");
    } 
    
}

void riskScore(){
    int age, sbp, smoker, diabetic, gender, score = 0;
    double cholesterol;
    

    printf("What is your age?\n");
    scanf("%d", &age);

    printf("What is your SBP (Whole Number)?\n");
    scanf("%d", &sbp);

    printf("What is your Chrolesterol level?\n");
    scanf("%lf", &cholesterol);

    printf("Are you Male or Female? (1 = Male | 2 = Female \n");
    scanf("%d", &gender);

    printf("Are you a Smoker? (1 = Yes | 2 = No \n");
    scanf("%d", &smoker);

    printf("Are you a Diabetic? (1 = Yes | 2 = No \n");
    scanf("%d", &diabetic);



    if (age <= 39 || gender == 2 && age <=49 ){

    }
    else if(age <= 49){
        if (diabetic == 2)
        {
            if(smoker == 2){
                printf("Your ERICE risk score category is Low");
            }
            else{
                if(sbp){

                }
            }
        }

    }


   
    
    else if (age >= 80){
        printf("Your ERICE risk score category is Very High");
    } 



        
    



    
}
