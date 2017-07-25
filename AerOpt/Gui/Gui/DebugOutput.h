/*********************************************
**
**	Created on: 	03/01/2014 2014
**	Author: 	matt - Matt Edmunds
**	File:		DebugOutput.h
**
**********************************************/

#ifndef DEBUGOUTPUT_H
#define DEBUGOUTPUT_H

#include "ui_DebugOutput.h"

/**
 * @brief The DebugOutput class
 * This class uses the singleton design pattern
 * and is used to redirect std QT output to the
 * text output pain.
 */
class DebugOutput : public QWidget, private Ui::DebugOutput
{
	Q_OBJECT
	
public:
	~DebugOutput();
	/**
	 * @brief Instance
	 * @return The current instance of DebugOutput.
	 * Singleton instance creation function.
	 */
	static DebugOutput& Instance();

	/**
	 * @brief printDebugMsg
	 * @param msg Message to be printed.
	 */
	void printDebugMsg(const char *msg);
	/**
	 * @brief printWarningMsg
	 * @param msg Message to be printed.
	 */
	void printWarningMsg(const char *msg);
	/**
	 * @brief printCriticalMsg
	 * @param msg Message to be printed.
	 */
	void printCriticalMsg(const char *msg);
	/**
	 * @brief printFatalMsg
	 * @param msg Message to be printed.
	 */
	void printFatalMsg(const char *msg);

private:
	/**
	 * @brief DebugOutput
	 * Constructors set private as
	 * part of design pattern.
	 */
	DebugOutput();
	DebugOutput(DebugOutput const&) = delete;
	void operator=(DebugOutput const&) = delete;

	static DebugOutput* sDebug;
};

#endif // DEBUGOUTPUT_H
