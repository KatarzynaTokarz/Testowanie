#pragma once
class BankAccount
{
public:
	BankAccount();

	bool withdraw(int amount);
	void deposit(int amount);
	int getAvailableFunds() const;
private:
	int accountBalance;
};

class DebitBankAccount : public BankAccount {

private:
	int debitLimit;
public:
	DebitBankAccount();
	void setDebitLimit(int debit);
	int getDebitLimit() const;
	void payDebit(int debit);
};
