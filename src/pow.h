// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2016 The Bitcoin Core developers
// Copyright (c) 2017-2019 The Meowcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MEOWCOIN_POW_H
#define MEOWCOIN_POW_H

#include "consensus/params.h"
#include "primitives/block.h"
#include <stdint.h>

class CBlockHeader;
class CBlockIndex;
class uint256;

unsigned int GetNextWorkRequired(const CBlockIndex* pindexLast, const CBlockHeader* pblock, const Consensus::Params& params, POW_TYPE powType = POW_TYPE_MEOWPOW);
unsigned int CalculateNextWorkRequired(const CBlockIndex* pindexLast, int64_t nFirstBlockTime, const Consensus::Params&);

/** Check whether a block hash satisfies the proof-of-work requirement specified by nBits */
bool CheckProofOfWorkDGW(uint256 hash, unsigned int nBits, const Consensus::Params&);
bool CheckProofOfWorkLWMA(uint256 hash, unsigned int nBits, const Consensus::Params&, POW_TYPE powType = POW_TYPE_MEOWPOW);

#endif // MEOWCOIN_POW_H
