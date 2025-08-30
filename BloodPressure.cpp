#include<iostream>
using namespace std;
enum class BloodPressureCategory {
    Normal,
    Elevated,
    Stage1Hypertension,
    Stage2Hypertension,
    HypertensiveCrisis
};
BloodPressureCategory categorizeBP(int systolic, int diastolic){
    if(systolic<120 && diastolic <80){
        return BloodPressureCategory :: Normal;
    }
        else if ( systolic>=120 && systolic<130 && diastolic < 80){
            return BloodPressureCategory ::Elevated;
        }
         else if (( systolic>=130 && systolic<140)||(diastolic >= 80 && diastolic < 90)){
            return BloodPressureCategory ::Stage1Hypertension;
        }
          else if ( systolic>=140|| diastolic>=90){
            if(systolic>180 || diastolic >120){
            return BloodPressureCategory ::HypertensiveCrisis;
        }else{
            return BloodPressureCategory ::Stage2Hypertension;
        }
}
}
void printBPCategory(BloodPressureCategory category){ 
    switch (category){
        case BloodPressureCategory :: Normal:
        cout<<"Normal";
        break;
    case BloodPressureCategory ::Elevated:
    cout<<"Elevated";
    break;
    case BloodPressureCategory ::Stage1Hypertension:
    cout<<"Stage 1 Hypertension";
    break;
    case BloodPressureCategory ::Stage2Hypertension:
    cout<<"Stage 2 Hypertension";
    break;
    case BloodPressureCategory ::HypertensiveCrisis:
    cout<<" Hypertension Crisis";
    break;
}
}
int main ( ) {
    int systolic, diastolic;
    cout<<"Enter systolic blood pressure : ";
    cin>>systolic;
    cout<<"Enter diastolic blood pressure : ";
    cin>>diastolic;

    BloodPressureCategory category = categorizeBP(systolic, diastolic);
    cout<<" Blood Pressure Category : ";
    printBPCategory(category);
    cout<<endl;
    return 0;
}