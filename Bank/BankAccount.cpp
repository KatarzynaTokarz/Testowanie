#include "BankAccount.h"

BankAccount::BankAccount()
	: accountBalance(0)
{

}

bool BankAccount::withdraw(int amount)
{
	if (amount > accountBalance)
	{
		return false;
	}
	else
	{
		accountBalance -= amount;
		return true;
	}
}

void BankAccount::deposit(int amount)
{
	accountBalance += amount;
}

int BankAccount::getAvailableFunds() const
{
	return accountBalance;
}

DebitBankAccount::DebitBankAccount()
{

}

void DebitBankAccount::setDebitLimit(int debit)
{
	debitLimit = debit;
}

int DebitBankAccount::getDebitLimit() const
{
	return debitLimit ;
}

void DebitBankAccount::payDebit(int debit)
{
	debitLimit += debit;
}
