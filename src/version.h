// Copyright (c) 2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include "clientversion.h"
#include <string>

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

static const int PROTOCOL_VERSION = 70002;
static const int INIT_PROTO_VERSION = 209;
static const int MIN_PEER_PROTO_VERSION = 70002;
static const int CADDR_TIME_VERSION = 31402;
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;
static const int BIP0031_VERSION = 60000;
static const int MEMPOOL_GD_VERSION = 60002;

#endif
