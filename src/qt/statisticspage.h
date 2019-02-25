#ifndef STATISTICSPAGE_H
#define STATISTICSPAGE_H

#include <QWidget>

//#include "walletmodel.h"

namespace Ui {
	class StatisticsPage;
}
class ClientModel;

class StatisticsPage : public QWidget
{
    Q_OBJECT

public:
    explicit StatisticsPage(QWidget *parent = 0);
    ~StatisticsPage();
    
    void setModel(ClientModel *model);
    void updatePlot();
	void updatePlot2();
	void setStrength(double strength);

private slots:

private:
    Ui::StatisticsPage *ui;
    ClientModel *model;
	
	QVector<double> vX;
	QVector<double> vY;
	
	QVector<double> vX3;
	QVector<double> vY3;
	
	double currentStrength;
};

#endif 