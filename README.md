Genesiscoin integration/staging tree
================================

http://www.genesiscoin.info

Copyright (c) 2009-2013 Bitcoin Developers

Copyright (c) 2011-2013 Litecoin Developers

Copyright (c) 2014 Genesiscoin Developers

What is Genesiscoin?
----------------

Genesiscoin is a lite version of Bitcoin using scrypt-progressive-N as a proof-of-work algorithm.

Algorithm: Scrypt-Progressive-N with optimized schedule, start time is 00:00:00 MAR. 16,2014 GMT and N adapter increases each 365 days, start at N = 2048 and end at N = 1899504000
Symbol: GNS
Max Coins: 30 billion
Block time: 60 seconds
Block Rewards: 20000 coins per block
Decrease: 5% every 86,400 blocks (~60 days)
Difficulty Re-Target Time: start with 0.000244. From block 1 to 1439: retarget each 40 blocks, From 1440: every block using Kimoto Gravity Well algorithm
Coin maturity: 120 blocks
RPCport: 44669
P2Pport: 44668
Each block you have 0.138% to get gold block (x10), 0.27% to get sliver block (x6) and 0.55% to get bronze block (x3). That means we have 2 gold blocks, 4 sliver blocks and 8 bronze blocks per day
Premine: 1% for bounty and for the future work 

For more information, as well as an immediately useable, binary version of
the Genesiscoin client sofware, see http://www.genesiscoin.info

License
-------

Genesiscoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Genesiscoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=bitcoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of Genesiscoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake BITCOIN_QT_TEST=1 -o Makefile.test bitcoin-qt.pro
    make -f Makefile.test
    ./genesiscoin-qt_test

