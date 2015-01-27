#ifndef __FILE_HPP__
#define __FILE_HPP__

#include <vector>
#include <string>

class File{
private:
	std::vector<char> buffer;
public:
	/*
	Initializes the object
	*/
	File();
	/*
	Reads content of file provided by filename into internal buffer
	returns: No of bytes read from the file. -1 if file can't be read.
	*/
	int read(const std::string filename);

	/*
	Write content of internal buffer provided by filename
	returns: No of bytes written to the file. -1 if file can't be written.
	*/
	int write(const std::string filename);
	
	/*
	Returns the content of internal buffer as vector of string.
	*/
	std::vector<std::string> getLines();

	/*
	Sets the content of internal buffer as given vector of string.
	*/
	void setLines(const std::vector<std::string>);
};

#endif
