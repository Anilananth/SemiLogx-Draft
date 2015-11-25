#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QInputDialog>
#include <QFile>
#include <QFileDialog>
#include <QXmlStreamReader>
#include <QMessageBox>
#include "../../qcustomplot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
  
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

    void setGraphInput(QVector<QVector<double> > &xplot, QVector<QVector<double> > &yplot);
      QVector<QVector<double> > xplot, yplot;

    void addGraph(QVector<double> x1, QVector<double> y1);

    void setupGraph();
  
private slots:
  void titleDoubleClick(QMouseEvent *event, QCPPlotTitle *title);
  void axisLabelDoubleClick(QCPAxis* axis, QCPAxis::SelectablePart part);
  void legendDoubleClick(QCPLegend* legend, QCPAbstractLegendItem* item);
  void selectionChanged();
  void mousePress();
  void mouseWheel();
  void addNewGraph();
  void removeSelectedGraph();
  void removeAllGraphs();
  void contextMenuRequest(QPoint pos);
  void moveLegend();
  void graphClicked(QCPAbstractPlottable *plottable);
  void Savegraph();

 void mouseMoveSignal (QMouseEvent *event);
 void mousePressSignal (QMouseEvent *event);
 void mouseReleaseSignal (QMouseEvent *event);


  
private:
  Ui::MainWindow *ui;
  QAction *first ;
 // QCustomPlot *plot;
  bool draggingLegend;
  QPointF dragLegendOrigin;
};

#endif // MAINWINDOW_H
