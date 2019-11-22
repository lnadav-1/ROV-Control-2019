
//Xbox controller code
//this code is all copy & pasted I dont know how it actaully works
  #ifndef _XBOX_CONTROLLER_H_
  #define _XBOX_CONTROLLER_H_
  
  //no MFC
  #define WIN32_LEAN_AND_MEAN
  
  // We need the Windows Header and the XInput Header
  #include <span class="code-keyword"><windows.h></span>
  #include <span class="code-keyword"><XInput.h></span>
  
  
  // Now, the XInput Library
  // NOTE: COMMENT THIS OUT IF YOU ARE NOT USING
  // A COMPILER THAT SUPPORTS THIS METHOD OF LINKING LIBRARIES
  #pragma comment(lib, "XInput.lib")
  
  //CONTROLLER CLASS DEFINITION 
  class CXBOXController
  {
  private:
      XINPUT_STATE _controllerState;
      int _controllerNum;
  public:
      CXBOXController(int playerNumber);
      XINPUT_STATE GetState();
      bool IsConnected();
      void Vibrate(int leftVal = 0, int rightVal = 0);
  };
  #endif

void setup() {
  // put your setup code here, to run once:

}
//Fucntion that checks what button are being pressed
void CheckCurrentInputs(){

    
}

//Loop function, try to minimise the number of code here to keep it clean
void loop() {
 

}
