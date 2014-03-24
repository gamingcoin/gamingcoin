#!/usr/bin/env python

# Helpful little script that spits out a comma-separated list of
# language codes for Qt icons that should be included
<<<<<<< HEAD
<<<<<<< HEAD
# in binary gamingcoin distributions
=======
# in binary freicoin distributions
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
# in binary freicoin distributions
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149

import glob
import os
import re
import sys

if len(sys.argv) != 3:
<<<<<<< HEAD
<<<<<<< HEAD
  sys.exit("Usage: %s $QTDIR/translations $GAMINGCOINDIR/src/qt/locale"%sys.argv[0])
=======
  sys.exit("Usage: %s $QTDIR/translations $FREICOINDIR/src/qt/locale"%sys.argv[0])
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
  sys.exit("Usage: %s $QTDIR/translations $FREICOINDIR/src/qt/locale"%sys.argv[0])
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149

d1 = sys.argv[1]
d2 = sys.argv[2]

l1 = set([ re.search(r'qt_(.*).qm', f).group(1) for f in glob.glob(os.path.join(d1, 'qt_*.qm')) ])
<<<<<<< HEAD
<<<<<<< HEAD
l2 = set([ re.search(r'gamingcoin_(.*).qm', f).group(1) for f in glob.glob(os.path.join(d2, 'gamingcoin_*.qm')) ])
=======
l2 = set([ re.search(r'freicoin_(.*).qm', f).group(1) for f in glob.glob(os.path.join(d2, 'freicoin_*.qm')) ])
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
l2 = set([ re.search(r'freicoin_(.*).qm', f).group(1) for f in glob.glob(os.path.join(d2, 'freicoin_*.qm')) ])
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149

print ",".join(sorted(l1.intersection(l2)))

