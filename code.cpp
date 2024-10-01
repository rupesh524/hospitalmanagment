#include<iostream>
using namespace std;
#include<bits/stdc++.h>


// patient class
class patient{

    private:
       string name,gender,ailment;
       int id,age;
     

     public:
        patient(string name,int id,string gender , int age, string ailment)
        : name(name), id(id),gender(gender),age(age),ailment(ailment) {}

        void displaypatientinfo(){
            cout<<endl;
              cout<<"patient name :"<<name << "\n id :"<<id 
              << "\n gender :" << gender << "\n age :"<<age
              << "\n ailment : "<<ailment <<endl;
        }

};

// doctor class 
class doctor{
          private:
          string doctorname,specialisation;
          int id;

          public:
          doctor(string doctorname,int id,string specialisation):
          doctorname(doctorname),id(id),specialisation(specialisation) {}

          void displaydoctorinfo(){
            cout<<endl;
             cout<<"doctor name :"<<doctorname << "\n id : "<<id
             <<"\n specialisation : "<<specialisation<<endl;
          }

};


class appointment{
            private:
            int appointmentid,patientid,doctorid;
            string patientname , date , time;

            public:
      appointment(int appointmentid, string patientname,int patientid, int doctorid , string date, string time ):
      appointmentid(appointmentid),patientname(patientname),patientid(patientid),doctorid(doctorid),date(date),time(time){}
      
      void displayappointment(){
             cout<<endl;
              cout<<"appointment id :"<<appointmentid<<"\npatient name :"<<patientname<<"\n patient id : "<<patientid
              <<"\ndoctor id :"<<doctorid <<"\ndate :"<<date <<"\ntime :"<<endl;

      }


};

// display menu
void displaymenu(){
     cout << "Hospital Management System\n";
    cout << "1. Add Patient\n";
    cout << "2. Add Doctor\n";
    cout << "3. Schedule Appointment\n";
    cout << "4. Display Patients\n";
    cout << "5. Display Doctors\n";
    cout << "6. Display Appointments\n";
    cout << "7. Exit\n";
}



int main(){
      std:: vector<patient>patients;
      std:: vector<doctor>doctors;
      std:: vector<appointment>appointments;

      int choice;
      do{
           displaymenu();
           std::cout<<"enter your choice: ";
           std::cin>>choice;
           switch(choice){
                case 1:{
                    // need to add patients
                    std::string name,gender,ailment;
                     int id,age;
                    std::cout<<"Enter patient name : ";
                    std:: cin>>name;
                    std::cout<<"Enter id : ";
                    std:: cin>>id;
                     std::cout<<"Enter gender : ";
                    std:: cin>>gender;
                    std::cout<<"Enter age: ";
                    std:: cin>>age;
                     std::cout<<"Enter ailment: ";
                    std:: cin>>ailment;
                    patients.emplace_back(name,id,gender,age,ailment);
                    break;
                }
                case 2:{
                    string doctorname,specialisation;
                    int id;
                    cout<<"enter doctor name: ";
                    cin>>doctorname;
                    cout<<"enter id : ";
                    cin>>id;
                    cout<<"enter specialisation: ";
                    cin>>specialisation;
                     doctors.emplace_back(doctorname,id,specialisation);
                     break;
                }
                case 3 :{
                      int appointmentid, patientid,doctorid;
                      string patientname,date,time;
                      cout<<"enter appointment id :";
                      cin>>appointmentid;
                      cout<<"enter patient name : ";
                      cin>>patientname;
                      cout<<"enter patient id : ";
                      cin>>patientid;
                      cout<<"enter doctor id :";
                      cin>>doctorid;
                      cout<<"enter date (DD/MM/YYYY) :";
                      cin>>date;
                      cout<<"enter time (HH:MM) :";
                      cin>>time;
                      appointments.emplace_back(appointmentid,patientname,patientid,doctorid,date,time);

                }

               case 4:{
                      for(auto & patient : patients ){
                          patient.displaypatientinfo();
                      }
                      break;
               }
               case 5:{
                     for(auto& doctor : doctors){
                             doctor.displaydoctorinfo();
                     }
                     break;
               }
               case 6:{
                     for(auto & appoint : appointments){
                         appoint.displayappointment();
                     }
                     break;
               }

           }
      }while(choice != 7);
      return 0;
}