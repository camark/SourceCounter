#ifndef SHELLCOUNTER_H
#define SHELLCOUNTER_H

#include "Counter.h"

class ShellCounter : public Counter
{
public:
    ShellCounter();
    virtual ~ShellCounter();

    /**
    * counting source file.
    *
    * @param strFilePath source file path
    * @param nLines total lines
    * @param nCodeLines total code lines
    * @param nCommentLines comment lines
    * @param nBlankLines blank lines
    */
    virtual void countingSourceFile( wxTextFile& file, int& nLines, int& nCodeLines,
                                     int& nCommentLines, int& nCodeCommentLines, int& nBlankLines );

    static wxString ms_strType;		///< Counter type name

protected:
private:
};

#endif // SHELLCOUNTER_H
