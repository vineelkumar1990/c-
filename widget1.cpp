#include<QApplication>
#include<QWidget>
#include<QBoxLayout>
#include<QPushButton>
#include<QLabel>
#include<QDebug>
#include<QObject>
#include<QTextEdit>
 
////------------------------------------------first example for texteditor------------------------------------/////
/*class mywindow:public QWidget
{
private:
QTextEdit *t1;
QHBoxLayout *h1;

public:

mywindow():QWidget()
{

qDebug()<<"MYWINDOW::MYWINDOW()"<<endl;
t1 = new QTextEdit();
h1= new QHBoxLayout();
h1->addWidget(t1);
this->setLayout(h1);
}

~mywindow()
{
qDebug()<<"~mywindow()::mywindow()"<<endl;
}
};

int main(int argc,char **argv)
{
QApplication app(argc,argv);
mywindow w1;
w1.show();

return app.exec();
}*/


////////----------------------------------------------second example-------------------------------------------------///////

/*class mywindow:public QWidget
{
private:
QTextEdit *t1;
QPushButton *p1;
QVBoxLayout *v1;

public slots:
void quit1(void);
public:

mywindow();

~mywindow();


};



mywindow::mywindow():QWidget()
{


 //QObject::connect(p1,SIGNAL(clicked()),this,SLOT(quit1()));
qDebug()<<"MYWINDOW::MYWINDOW()"<<endl;
	t1 = new QTextEdit();
        p1 = new QPushButton("QUIT");

	v1= new QVBoxLayout();
	v1->addWidget(t1);
  	v1->addWidget(p1);
	this->setLayout(v1);
        this->setWindowTitle("mywindow");
}


mywindow::~mywindow()
{
qDebug()<<"~mywindow()::mywindow()"<<endl;
}
void mywindow:: quit1(void)
{
qDebug()<<"----------------quit------------------------------"<<endl;
return exit(0);
}


int main(int argc,char **argv)
{
QApplication app(argc,argv);
mywindow w1;
w1.show();

return app.exec();
}
*/



/*class mywindow:QWidget
{
private:

QBoxLayout *b1;
QPushButton *p1,*p2,*p3;

public:

mywindow():QWidget()
{

qDebug()<<"MYWINDOW::MYWINDOW()"<<endl;
b1 = new QBoxLayout();
p1 = new QPushButton("button1");
p2 = new QPushButton("button2");
p3 = new QPushButton("button3");


b1->addWidget(p1);
b1->addWidget(p2);
b1->addWidget(p3);

this->setlayout(b1);
}

~mywindow()
{
qDebug()<<"~mywindow()::mywindow()"<<endl;
}
};

int main(int argc,char **argv)
{
QApplicatin app(argc,argv);
mywindow w1;
w1.show();

return app.exec();
}*/

#include <QtGui>
class  myMainWindow:public QMainWindow
 {
 public:
     myMainWindow():QMainWindow()
     {
 	//QPalette* palette = new QPalette();	
 	//palette->setBrush(QPalette::Background,*(new QBrush(*(new QPixmap("b.jpg")))));
 	//setPalette(*palette); 	
 	
 	//setWindowFlags(Qt::FramelessWindowHint); 	 
 	QWidget *centralWidget = new QWidget(this);
 	QGridLayout *layout = new QGridLayout();
 	
 	centralWidget->setLayout(layout);
 

 	layout->addWidget(new QPushButton("Button  1"),0,0);
 	layout->addWidget(new QPushButton("Button  2"),0,1);		
 	layout->addWidget(new QPushButton("Button  3"),0,2);		

 	
 	//setCentralWidget(centralWidget);
 
     };
     ~myMainWindow(){};

 };

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	myMainWindow *window = new myMainWindow();    

	
        window->resize(376, 301);	       
	window->show();
	return app.exec();
}


//#include <QtWidgets>

/*int main(int argc, char* argv[])
{
    QApplication app(argc,argv);      

    QLCDNumber lcdnumber;    
    QPalette palette;
    
    palette.setBrush(QPalette::Background,QBrush(QImage("stars.jpg")));    
    
    lcdnumber.setPalette(palette);    
    lcdnumber.setWindowTitle("QLcdnumber Background Color");    
    lcdnumber.resize(450,300);
    lcdnumber.setDigitCount(5);
    lcdnumber.display(12445);
    lcdnumber.show();
    
    app.exec();
}*/




