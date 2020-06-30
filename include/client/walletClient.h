//
// Created by 袁雪琪 on 2020/4/21.
//

#ifndef HUOBI_WALLETCLIENT_H
#define HUOBI_WALLETCLIENT_H

#include "include.h"

using namespace rapidjson;
using namespace std;

struct WalletClient {

    WalletClient(char *accessKey, char *secretKey) : signature{accessKey, secretKey} {
    }

    std::vector<DepositAddress> getDepositAddress(const char *currency);

    std::vector<DepositAddress> getSubUserDepositAddress(long subUid, const char *currency);

    std::vector<WithdrawQuota> getWithdrawQuota(const char *currency);

    long withdrawCreate(WithdrawCreateRequest &request);

    long withdrawCancel(long withdrawId);

    std::vector<DepositWithdraw> queryDepositWithdraw(QueryDepositWithdrawRequest &request);

    std::vector<SubUserDeposit> querySubUserDeposit(QuerySubUserDepositRequest &request);

private:
    Signature signature;
};


#endif //HUOBI_WALLETCLIENT_H
