

#include<iostream>

using namespace std;

class Camera{
    
    public: 
       void captureImage() {
           cout<< "capturing image....."<< endl;
           //simulated image capture code
       }
};
  
  //simulated intercom class
  class Intercom{
      public:
        void Speak(){
            cout<<"speaking to the person who's visiting...."<<endl;
            //simulated audio output code
        }
  };
  
  // Simulated mobile app class
  class MobileApp{
     public:
         void receiveNotification() {
        cout << "Received notification on the mobile app." <<endl;
        
        // Simulated notification code
         }
        
        void displayVideo() {
        cout << "Displaying live video on the mobile app." <<endl;
        
        // Simulated video display code
    }
    
    
       void sendAudio() {
        cout << "Sending audio from the mobile app...." << endl;
        
        // Simulated audio input code
    }
    
    
       void receiveAudio() {
        cout << "Receiving audio on the mobile app." << endl;
        
        // Simulated audio output code
    }
};

// Smart doorbell class
class SmartDoorbell {
       private:
        Camera camera;
        Intercom intercom;
        MobileApp mobileApp;
        
        public:
          void visitorPressedButton() {
              // Simulate visitor pressing the doorbell button
              cout << "Visitor pressed the doorbell button." <<endl;
              
               // Capture image from the camera
               camera.captureImage();
               
                // Notify the mobile app
                mobileApp.receiveNotification();
                
                // Communicate with the visitor
                 intercom.Speak();
                 mobileApp.receiveAudio();
                 intercom.Speak();
                 mobileApp.sendAudio();
                 
                 
                 // live video on the mobile app
                 mobileApp.displayVideo();
    }
};




int main()
{
     SmartDoorbell doorbell;
    doorbell.visitorPressedButton();
    return 0;
};
