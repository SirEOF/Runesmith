#ifndef GENERICEXPORTER_H
#define GENERICEXPORTER_H

#include <QFile>
#include <QTextStream>
#include <QString>
#include "RSCreature.h"
#include "ExportableStats.h"

class GenericExporter
{
public:
	GenericExporter(QString filename, unsigned int stats);
	virtual ~GenericExporter(void);
	virtual void exportCreature(RSCreature *creature) = 0;

protected:
	QTextStream* outStream;
	unsigned int toWrite;

private:
	QFile* fp;
};

#endif