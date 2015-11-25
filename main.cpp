#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;

  QVector<double> x1(10), y1(10) ;
//  QVector<double> x2(10), y2(10) ;

  QVector<QVector<double> > xplots;
  QVector<QVector<double> > yplots;



  for (int i=0; i<10; i++)
  {
    x1[i] = i;
    y1[10-i-1] = i;
  }

/*  for (int i=0; i<10; i++)
  {
    x2[i] = i+1;
    y2[10-i-1] = i+2;
  }
*/
  xplots.push_back(x1);
 // xplots.push_back(x2);
  yplots.push_back(y1);
//  yplots.push_back(y2);

  w.setGraphInput(xplots, yplots);
  w.setupGraph();
  w.show();
  
  return a.exec();
}
