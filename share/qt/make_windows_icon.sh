#!/bin/bash
# create multiresolution windows icon
<<<<<<< HEAD
ICON_SRC=../../src/qt/res/icons/gamingcoin.png
ICON_DST=../../src/qt/res/icons/gamingcoin.ico
convert ${ICON_SRC} -resize 16x16 gamingcoin-16.png
convert ${ICON_SRC} -resize 32x32 gamingcoin-32.png
convert ${ICON_SRC} -resize 48x48 gamingcoin-48.png
convert gamingcoin-16.png gamingcoin-32.png gamingcoin-48.png ${ICON_DST}
=======
ICON_SRC=../../src/qt/res/icons/freicoin.png
ICON_DST=../../src/qt/res/icons/freicoin.ico
convert ${ICON_SRC} -resize 16x16 freicoin-16.png
convert ${ICON_SRC} -resize 32x32 freicoin-32.png
convert ${ICON_SRC} -resize 48x48 freicoin-48.png
convert freicoin-16.png freicoin-32.png freicoin-48.png ${ICON_DST}
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149

