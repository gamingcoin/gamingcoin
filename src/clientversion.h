#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

//
// client versioning
//

<<<<<<< HEAD
<<<<<<< HEAD
// These need to be macros, as version.cpp's and gamingcoin-qt.rc's voodoo requires it
=======
// These need to be macros, as version.cpp's and freicoin-qt.rc's voodoo requires it
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
// These need to be macros, as version.cpp's and freicoin-qt.rc's voodoo requires it
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
#define CLIENT_VERSION_MAJOR       0
#define CLIENT_VERSION_MINOR       7
#define CLIENT_VERSION_REVISION    2
#define CLIENT_VERSION_BUILD       0

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

#endif // CLIENTVERSION_H
