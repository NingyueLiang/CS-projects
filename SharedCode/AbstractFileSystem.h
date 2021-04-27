#pragma once

#include "AbstractFile.h"
#include <vector>
#include <string>


class AbstractFileSystem {
public:
	virtual int addFile(std::string, AbstractFile*) = 0;
	virtual int createFile(std::string) = 0;
	virtual int deleteFile(std::string) = 0;
	virtual AbstractFile* openFile(std::string) = 0;
	virtual int closeFile(AbstractFile*) = 0;
};
