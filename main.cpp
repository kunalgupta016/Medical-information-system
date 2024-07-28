#include <iostream>
#include <string>
using namespace std;


// Patient class to store demographic and clinical data
class Patient {
public:
    string name;
    string age;
    string address;
    string contactInfo;
    string medicalHistory;
    string allergies;


};

// LabResult class to store lab results
class LabResult {
public:
    string testName;
    string result;
	string testDate;
	

};

// Payment class to handle payments
class Payment {
public:
    double amount;
    string paymentMethod;
    string paymentDate;



};





int main() {
	
	// declare some variables for blood and eye test
	string blood;
	int haemo;
	int chole;
	int sugar;
	char swelling;
	char hearing;
	char water;
    Patient p;
    
    // Personal information
    
    cout<<"Enter the name of patient "<<"\n";
	getline(cin,p.name);
	
	cout<<"Enter the age "<<"\n";
	getline(cin,p.age);
	
	cout<<"Enter the address"<<"\n";
	getline(cin,p.address);
	
	cout<<"Enter the Phone number "<<"\n";
	getline(cin,p.contactInfo);
	
	cout<<"Enter the early medical history "<<"\n";
	getline(cin,p.medicalHistory);
	
	cout<<"Enter the allergies "<<"\n";
	getline(cin,p.allergies);



// Lab information

    LabResult labResult;


	cout<<"Enter the  test name : Blood  group test (B), Eye test (E) "<<"\n";
	cin>>labResult.testName;
	
	if( labResult.testName == "B"){
	
		
		cout<<"Enter the blood group : A+ , A- , B+ , B- , AB+ , AB- , O+ ,O-"<<"\n";
		cin>>blood;
		
		cout<<"Enter the haemoglobin of patient (6-18) :-  "<<"\n";
		cin>>haemo;
		
		cout<<"Enter the cholestrol of patient (80 - 400 ) :- "<<"\n";
		cin>>chole;
		
		cout<<"Enter the sugar level (50 - 230 ) :- "<<"\n";
		cin>>sugar;
		
		if((haemo<13 || haemo>17) || (chole<130 || chole>200) || (sugar<70 || sugar>115)){
			
			labResult.result="NOT NORMAL   Normal Range:- Haemoglobin: 13-17 Cholestrol: 130-200 Sugar: 70-115";
		}
		else{
			
			labResult.result="NORMAL  Normal Range:- Haemoglobin: 13-17 Cholestrol: 130-200 Sugar: 70-115";
		}
		
	}
	
	else if( labResult.testName == "E"){
		cout<<" Enter symptoms :- "<<"\n";
		
		cout<<"Swelling true(T) or false(F) : "<<"\n";
		cin>>swelling;
		
		cout<<"Hearing properly true(T) or false(F) : "<<"\n";
		cin>>hearing;
		
		cout<<"Ever water gone into ear true(T) or false(F) "<<"\n";
		cin>>water;
		if(swelling=='T' || hearing=='T' || water=='T'){
			
			labResult.result="NOT NORMAL";
		}
		if(swelling=='F' || hearing=='F' || water=='F'){
		
			labResult.result="Normal";
		}
		
		
	}
	
	cout<<"Enter the test date : - "<<"\n";
	cin>>labResult.testDate;
	
	
	// Payment information
	
	
	
    Payment payment;

	cout<<"enter the payment ";
	cin>>payment.amount;
	
	cout<<"Enter the payment type: cash or online "<<"\n";
	cin>>payment.paymentMethod;
	
	cout<<"Enter the Payment date : - "<<"\n";
	cin>>payment.paymentDate;
	
	
//  Display Information and result of the test 
    	cout<<"-----------------------------------------------------------"<<"\n";
        cout <<  "\t"<<" * Name: " << p.name << endl;
        cout <<  "\t"<<" * Age: " << p.age << endl;
        cout <<  "\t"<<" * Address: " << p.address << endl;
        cout <<  "\t"<<" * Contact Info: " << p.contactInfo << endl;
        cout <<  "\t"<<" * Medical History: " << p.medicalHistory << endl;
        cout <<  "\t"<<" * Allergies: " << p.allergies << endl;
        cout << endl;
        
        
        
        cout <<  "\t"<<" * Test Name: " << labResult.testName << endl;
        cout <<  "\t"<<" * Result: " << labResult.result << endl;
        if(labResult.testName=="B"){
        	cout<< "\t"<<" * Your blood group is "<<blood<<"\n"<<"\t"<<" * Your haemoglobin is "<<haemo<<"\n"<<"\t"<<" * Your cholestrol is "<<chole<<"\n"<<"\t"<<" * Your sugar level is "<<sugar<<"\n";
		}
		else if(labResult.testName=="E"){
			cout<< "\t"<< " * Swelling "<<swelling<<"\n"<<"\t"<<" * Hearing "<<hearing<<"\n"<<"\t"<<" * water gone "<<water<<"\n";
		}
		
		
		cout <<  "\t"<<" * Test Date: " << labResult.testDate << endl;
        cout << endl;
        
        
        
        

        cout << "\t"<<" * Amount: " << payment.amount << endl;
        cout << "\t"<<" * Payment Method: " << payment.paymentMethod << endl;
        cout << "\t"<<" * Payment Date: " << payment.paymentDate << endl;
        cout<<"------------------------------------------------------------"<<"\n";
        cout << endl;



    return 0;
}
