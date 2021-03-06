/**
 * @file BasCounter.cpp
 * @brief VbsCounter.cpp: implementation of the CVbsCounter class.
 * @author Boom( boomworks@hotmail.com )
 * @author Copyright(C) 2004-2005 boomworks.org , All right reserved.
 * @date 2005-11-25
 * $Revision: $
 */

#include <wx/textfile.h>
#include "BasCounter.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

wxString BasicCounter::ms_strType = _T("Basic");

BasicCounter* BasicCounter::ms_instance = 0;

BasicCounter::BasicCounter()
{}

BasicCounter::~BasicCounter()
{}

void BasicCounter::countingSourceFile( wxTextFile& file, int& nLines, int& nCodeLines,
                     int& nCommentLines, int& nCodeCommentLines, int& nBlankLines )
{

    countLines(file, m_pRule, nLines, nCodeLines, nCommentLines, nCodeCommentLines, nBlankLines );

//wxTextFile& file, LanguageDef &language, long int &total_lines,
//                         long int &code_lines, long int &codecomments_lines,
//                         long int &comment_lines, long int &empty_lines



    /*
    	wxString bufRead;
        for ( bufRead = file.GetFirstLine(); !file.Eof(); bufRead = file.GetNextLine() )
    	{
    		nLines++;

    		bufRead.Trim(false);



    	}

    		if( bufRead.Len() == 0 )
    		{
    			nBlankLines++;
    			continue;
    		}

    		if( bufRead.Find( _T("'") ) == 0 )
    		{
    			nCommentLines++;
    			continue;
    		}

    		//
    		if( bufRead.Find( _T("'") ) == -1 )
    		{
    			nCodeLines++;
    		}
    		else
    		{
    			switch( m_nLineCountingType )
    			{
    				case NStatisticAll:
    				nCodeLines++;
    				nCommentLines++;
    				break;

    				case NStatisticCodeOnly:
    				nCodeLines++;
    				break;

    				case NStatisticCommentOnly:
    				nCommentLines++;
    				break;

    				default:
    				break;
    			}
    			continue;
    		}
    	}
    	*/
}
