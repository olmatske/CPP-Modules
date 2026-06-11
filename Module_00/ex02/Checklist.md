-[ ] Files and basics

-[ ] Create Account.cpp that includes Account.hpp.

-[ ] Define all static members in Account.cpp:

    -[ ] int Account::_nbAccounts = 0;

    -[ ] int Account::_totalAmount = 0;

    -[ ] int Account::_totalNbDeposits = 0;

    -[ ] int Account::_totalNbWithdrawals = 0;

-[ ] Do not change Account.hpp (subject-provided).

-[ ] Implement the timestamp helper

-[ ]  Implement static void Account::_displayTimestamp(void);

-[ ] It must print the leading [19920104_091532] (or whatever the subject’s required format is) with no trailing spaces, no newline.

-[ ] All other logs start by calling this function.

-[ ] Implement the constructor Account::Account(int initial_deposit)

-[ ] Initialize members via initializer list:

    -[ ] _accountIndex = current _nbAccounts

    -[ ] _amount = initial_deposit

    -[ ] _nbDeposits = 0

    -[ ] _nbWithdrawals = 0

-[ ] In the body:

    -[ ] _nbAccounts++

    -[ ] _totalAmount += initial_deposit

    -[ ] Call _displayTimestamp()

    -[ ] Print: index:<_accountIndex>;amount:<_amount>;created + newline

-[ ] Confirm your output matches the first 8 ...;created lines.

-[ ] Implement the destructor Account::~Account()

-[ ] Call _displayTimestamp()

-[ ] Print: index:<_accountIndex>;amount:<_amount>;closed + newline

-[ ] Do not touch static totals unless the subject explicitly requires it at destruction.

-[ ] Implement the static getters
    Each one just returns the corresponding static member:

-[ ] int Account::getNbAccounts(void) → return _nbAccounts;

-[ ] int Account::getTotalAmount(void) → return _totalAmount;

-[ ] int Account::getNbDeposits(void) → return _totalNbDeposits;

-[ ] int Account::getNbWithdrawals(void) → return _totalNbWithdrawals;

-[ ] Implement Account::displayAccountsInfos()

-[ ] This is the global summary line:

        Call _displayTimestamp()

        Print: accounts:<_nbAccounts>;total:<_totalAmount>;deposits:<_totalNbDeposits>;withdrawals:<_totalNbWithdrawals> + newline

    Check against lines like:

        accounts:8;total:20049;deposits:0;withdrawals:0

        accounts:8;total:21524;deposits:8;withdrawals:0

        accounts:8;total:12442;deposits:8;withdrawals:6

    Implement Account::displayStatus() const

    Per-account snapshot:

        Call _displayTimestamp()

        Print: index:<_accountIndex>;amount:<_amount>;deposits:<_nbDeposits>;withdrawals:<_nbWithdrawals> + newline

    This must match all the index:X;amount:...;deposits:...;withdrawals:... blocks.

    Implement Account::makeDeposit(int deposit)

    Local:

        int p_amount = _amount;

    Update this account:

        _amount += deposit;

        _nbDeposits += 1;

    Update global statics:

        _totalAmount += deposit;

        _totalNbDeposits += 1;

    Log:

        Call _displayTimestamp()

        Print: index:<_accountIndex>;p_amount:<p_amount>;deposit:<deposit>;amount:<_amount>;nb_deposits:<_nbDeposits> + newline

    Cross-check with deposit lines in the log.

    Implement Account::makeWithdrawal(int withdrawal)

    Local:

        int p_amount = _amount;

    If withdrawal > _amount:

        Call _displayTimestamp()

        Print: index:<_accountIndex>;p_amount:<p_amount>;withdrawal:refused + newline

        Return false;

    Else:

        Update this account:

            _amount -= withdrawal;

            _nbWithdrawals += 1;

        Update global statics:

            _totalAmount -= withdrawal;

            _totalNbWithdrawals += 1;

        Log:

            Call _displayTimestamp()

            Print: index:<_accountIndex>;p_amount:<p_amount>;withdrawal:<withdrawal>;amount:<_amount>;nb_withdrawals:<_nbWithdrawals> + newline

        Return true;

    Make sure the “refused” cases and the successful ones match the sample logs exactly.

    Implement int Account::checkAmount(void) const

    Simple:

        return _amount;

    Verify against the provided tests.cpp / log

    Build and run with the provided main.

    Compare your program’s output with the subject’s .log file.

    Differences will tell you where your logic or formatting is off (spaces, semicolons, wrong field names, counters not updated, etc.).