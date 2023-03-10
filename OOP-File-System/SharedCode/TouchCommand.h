#pragma once
//Lab5 Frank Liang & Pan Joe: This file declare Touch command
#include "AbstractCommand.h"

class TouchCommand : public AbstractCommand {
public:
	TouchCommand( AbstractFileSystem* s, AbstractFileFactory* f);
	void displayInfo() override;
	int execute(std::string filename) override;
	~TouchCommand() = default;
private:
	AbstractFileFactory* fac;
	AbstractFileSystem* sys;
};

enum touch {cannot_create_file = 60, cannot_add_file = 61};