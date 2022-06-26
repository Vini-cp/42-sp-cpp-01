// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef FILEMANIP_H
#define FILEMANIP_H

#include <fstream>
#include <iostream>
#include <string>

class FileManip
{
public:

    FileManip( std::string pFilename, std::string pSearchValue, std::string pNewValue );
    ~FileManip( void );

    void replace( void );

private:

    std::string mInputFileName;
    std::string mOutputFileName;
    std::string mSearchValue;
    std::string mNewValue;
    size_t mSearchValueLength;
    size_t mNewValueLength;

    bool checkStreamFile( std::ifstream& prInputFile );
    bool checkStreamFile( std::ofstream& prOutputFile );
};

#endif
