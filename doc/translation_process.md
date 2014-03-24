Translations
============

The Qt GUI can be easily translated into other languages. Here's how we
handle those translations.

Files and Folders
-----------------

<<<<<<< HEAD
<<<<<<< HEAD
### gamingcoin-qt.pro
=======
### freicoin-qt.pro
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
### freicoin-qt.pro
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149

This file takes care of generating `.qm` files from `.ts` files. It is mostly
automated.

<<<<<<< HEAD
<<<<<<< HEAD
### src/qt/gamingcoin.qrc
=======
### src/qt/freicoin.qrc
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
### src/qt/freicoin.qrc
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149

This file must be updated whenever a new translation is added. Please note that
files must end with `.qm`, not `.ts`.

    <qresource prefix="/translations">
<<<<<<< HEAD
<<<<<<< HEAD
        <file alias="en">locale/gamingcoin_en.qm</file>
=======
        <file alias="en">locale/freicoin_en.qm</file>
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
        <file alias="en">locale/freicoin_en.qm</file>
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
        ...
    </qresource>

### src/qt/locale/

This directory contains all translations. Filenames must adhere to this format:

<<<<<<< HEAD
<<<<<<< HEAD
    gamingcoin_xx_YY.ts or gamingcoin_xx.ts

#### gamingcoin_en.ts (Source file)

`src/qt/locale/gamingcoin_en.ts` is treated in a special way. It is used as the
=======
=======
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
    freicoin_xx_YY.ts or freicoin_xx.ts

#### freicoin_en.ts (Source file)

`src/qt/locale/freicoin_en.ts` is treated in a special way. It is used as the
<<<<<<< HEAD
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
source for all other translations. Whenever a string in the code is changed
this file must be updated to reflect those changes. This can be accomplished
by running `lupdate` (included in the Qt SDK). Also, a custom script is used
to extract strings from the non-Qt parts. This script makes use of `gettext`,
so make sure that utility is installed (ie, `apt-get install gettext` on 
Ubuntu/Debian):

    python share/qt/extract_strings_qt.py
<<<<<<< HEAD
<<<<<<< HEAD
    lupdate gamingcoin-qt.pro -no-obsolete -locations relative -ts src/qt/locale/gamingcoin_en.ts
=======
    lupdate freicoin-qt.pro -no-obsolete -locations relative -ts src/qt/locale/freicoin_en.ts
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
    lupdate freicoin-qt.pro -no-obsolete -locations relative -ts src/qt/locale/freicoin_en.ts
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
    
##### Handling of plurals in the source file

When new plurals are added to the source file, it's important to do the following steps:

<<<<<<< HEAD
<<<<<<< HEAD
1. Open gamingcoin_en.ts in Qt Linguist (also included in the Qt SDK)
=======
1. Open freicoin_en.ts in Qt Linguist (also included in the Qt SDK)
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
1. Open freicoin_en.ts in Qt Linguist (also included in the Qt SDK)
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
2. Search for `%n`, which will take you to the parts in the translation that use plurals
3. Look for empty `English Translation (Singular)` and `English Translation (Plural)` fields
4. Add the appropriate strings for the singular and plural form of the base string
5. Mark the item as done (via the green arrow symbol in the toolbar)
6. Repeat from step 2. until all singular and plural forms are in the source file
7. Save the source file

##### Creating the pull-request

An updated source file should be merged to github and Transifex will pick it
up from there (can take some hours). Afterwards the new strings show up as "Remaining"
in Transifex and can be translated.

To create the pull-request you have to do:

<<<<<<< HEAD
<<<<<<< HEAD
    git add src/qt/gamingcoinstrings.cpp src/qt/locale/gamingcoin_en.ts
=======
    git add src/qt/freicoinstrings.cpp src/qt/locale/freicoin_en.ts
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
    git add src/qt/freicoinstrings.cpp src/qt/locale/freicoin_en.ts
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
    git commit

Syncing with Transifex
----------------------

We are using https://transifex.com as a frontend for translating the client.

<<<<<<< HEAD
<<<<<<< HEAD
https://www.transifex.net/projects/p/gamingcoin/resource/tx/
=======
https://www.transifex.net/projects/p/freicoin/resource/tx/
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
https://www.transifex.net/projects/p/freicoin/resource/tx/
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149

The "Transifex client" (see: http://help.transifex.com/features/client/)
will help with fetching new translations from Transifex. Use the following
config to be able to connect with the client:

### .tx/config

    [main]
    host = https://www.transifex.com

<<<<<<< HEAD
<<<<<<< HEAD
    [gamingcoin.tx]
    file_filter = src/qt/locale/gamingcoin_<lang>.ts
    source_file = src/qt/locale/gamingcoin_en.ts
=======
    [freicoin.tx]
    file_filter = src/qt/locale/freicoin_<lang>.ts
    source_file = src/qt/locale/freicoin_en.ts
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
    [freicoin.tx]
    file_filter = src/qt/locale/freicoin_<lang>.ts
    source_file = src/qt/locale/freicoin_en.ts
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
    source_lang = en
    
### .tx/config (for Windows)

    [main]
    host = https://www.transifex.com

<<<<<<< HEAD
<<<<<<< HEAD
    [gamingcoin.tx]
    file_filter = src\qt\locale\gamingcoin_<lang>.ts
    source_file = src\qt\locale\gamingcoin_en.ts
=======
    [freicoin.tx]
    file_filter = src\qt\locale\freicoin_<lang>.ts
    source_file = src\qt\locale\freicoin_en.ts
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
    [freicoin.tx]
    file_filter = src\qt\locale\freicoin_<lang>.ts
    source_file = src\qt\locale\freicoin_en.ts
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
    source_lang = en

It is also possible to directly download new translations one by one from the Transifex website.

### Fetching new translations

1. `tx pull -a`
<<<<<<< HEAD
<<<<<<< HEAD
2. update `src/qt/gamingcoin.qrc` manually or via
   `ls src/qt/locale/*ts|xargs -n1 basename|sed 's/\(gamingcoin_\(.*\)\).ts/<file alias="\2">locale/\1.qm<\/file>/'`
=======
2. update `src/qt/freicoin.qrc` manually or via
   `ls src/qt/locale/*ts|xargs -n1 basename|sed 's/\(freicoin_\(.*\)\).ts/<file alias="\2">locale/\1.qm<\/file>/'`
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
2. update `src/qt/freicoin.qrc` manually or via
   `ls src/qt/locale/*ts|xargs -n1 basename|sed 's/\(freicoin_\(.*\)\).ts/<file alias="\2">locale/\1.qm<\/file>/'`
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
3. `git add` new translations from `src/qt/locale/`
