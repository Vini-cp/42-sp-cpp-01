// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/FileManip.hpp"

//------------------------------------------------------------------------------

FileManip::FileManip( std::string pFilename, std::string pSearchValue, std::string pNewValue ) :
	mInputFileName( pFilename ),
	mSearchValue( pSearchValue ),
	mNewValue( pNewValue )
{
	mOutputFileName = pFilename + ".replace";
	mSearchValueLength = pSearchValue.length();
	mNewValueLength = pNewValue.length();

	std::cout << "Default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

FileManip::~FileManip( void )
{
	std::cout << "Destructor called" << std::endl;
}

//------------------------------------------------------------------------------

void FileManip::replace( void )
{
	std::ifstream lInputFile ( mInputFileName.c_str() );
	std::ofstream lOutputFile ( mOutputFileName.c_str() );

	if ( !checkStreamFiles( lInputFile, lOutputFile ) ) return;

	std::string lLine;
	while ( std::getline( lInputFile, lLine ) )
	{
		std::string lNewLine = "";
		for ( size_t i = 0; i < lLine.length(); )
		{
			if ( mSearchValue.compare( lLine.substr( i, mSearchValueLength ) ) == 0 )
			{
				lNewLine += mNewValue;
				i += mSearchValueLength;
			}
			else
			{
				lNewLine += lLine[i];
				i++;
			}
		}
		lOutputFile << lNewLine;
		lOutputFile << '\n';
	}
	lInputFile.close();
	lOutputFile.close();
}

//------------------------------------------------------------------------------

bool FileManip::checkStreamFiles( std::ifstream& prInputFile, std::ofstream& prOutputFile )
{
	if ( !prInputFile.is_open() )
	{
		std::cout << "Unable to open " << mInputFileName << std::endl;
		return false;
	}
	if ( !prOutputFile.is_open() )
	{
		std::cout << "Unable to open " << mOutputFileName << std::endl;
		return false;
	}
	return true;
}

//------------------------------------------------------------------------------
