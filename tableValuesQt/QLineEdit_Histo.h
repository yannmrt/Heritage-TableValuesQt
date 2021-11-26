#pragma once

#include <qDebug>
#include <QObject>
#include <QLineEdit>
#include <QVector>

class QLineEdit_Histo : public QLineEdit
{
	Q_OBJECT

	QVector<QString> tab;
	int tableSize;
	QString value;

public:
	QLineEdit_Histo(int tableSize, QWidget *parent);

signals:
	void HistoUpdated(QVector<QString>tab);

public slots:
	void insertHisto();

};

