// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

/* Write a directive指令 to include the Account header file */
#include "Account.h"
/* Write a line to have class CheckingAccount inherit publicly from Account */
class CheckingAccount:public Account
{
public:
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor双参数构造函数 for CheckingAccount */
    CheckingAccount(double=0.0,double=0.0);
   /* Redeclare member function credit, which will be redefined */
    void credit(double);
   /* Redeclare member function debit, which will be redefined */
    void debit(double);
private:
   /* Declare data member transactionFee 交易费 */
    double transactionFee;
   // utility function to charge fee
   /* Declare member function chargeFee 收取费用*/
    void chargeFee();
}; // end class CheckingAccount

#endif


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
