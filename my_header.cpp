#include "my_header.h"
bool state1 = false; 
bool state2 = false;
bool state3 = false;
My_class::My_class():QWidget()
{
    button_1 = new QPushButton("Button1");
    button_2 = new QPushButton("Button2");
    button_3 = new QPushButton("Button3");
    lblBtnState_1  = new QLabel("GPIO in Default state"); // instatiate labels
    lblBtnState_2  = new QLabel("GPIO in Default state"); // instatiate labels
    lblBtnState_3  = new QLabel("GPIO in Default state"); // instatiate labels

    lblInputPinState = new QLabel("Input pin value is : ?? ");
    
    layout = new QFormLayout();
    layout->addRow(button_1,  lblBtnState_1);
    layout->addRow(button_2,  lblBtnState_2);
    layout->addRow(button_3,  lblBtnState_3);    

    this->setLayout(layout);
    this->setWindowTitle("GUI for GPIO Toggling");   // Set window title 

    connect(button_1, SIGNAL(clicked()),this, SLOT(btnStatus_1()));//connect offBtn's clicked() signal to the btnOFF() slot method
    connect(button_2, SIGNAL(clicked()),this, SLOT(btnStatus_2()));//connect offBtn's clicked() signal to the btnOFF() slot method
    connect(button_3, SIGNAL(clicked()),this, SLOT(btnStatus_3()));//connect offBtn's clicked() signal to the btnOFF() slot method

    
}

/**********************************************************************************************
 * Destructor - Since all references to Qt based controls/widgets are 'parented' either through 
 *              the layout manager or through pasing the  'this' pointer to their constructor
 *              we do not need to worry about deallocating their heap memory when they're done. 
 *              We do however need to worry about the memory of the rpiGpio object which is not 
 *              Qt based and not 'parented'
 * *******************************************************************************************/
My_class::~My_class(){
}

/********************************************************************************************
 * btnON() - slot method called whenever the onBtn button is pressed (see connect() 
 *           call in constructor). It sets GPIO4 to high..turning on the LED as well 
 *           as updating the text displayed by the lblBtnState_1 label
 *******************************************************************************************/

void My_class::btnStatus_1(void){

      
     state1 = !state1;   
     if (state1)
     {
         lblBtnState_1->setText("ON");
     }
     else
     { 
         lblBtnState_1->setText("OFF");
     }
}

void My_class::btnStatus_2(void){


     state1 = !state1;
     if (state1)
     {
         lblBtnState_2->setText("ON");
     }
     else
     {
         lblBtnState_2->setText("OFF");
     }
}

void My_class::btnStatus_3(void){


     state1 = !state1;
     if (state1)
     {
         lblBtnState_3->setText("ON");
     }
     else
     {
         lblBtnState_3->setText("OFF");
     }
}

