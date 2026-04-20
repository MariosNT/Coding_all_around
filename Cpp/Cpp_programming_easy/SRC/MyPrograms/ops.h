//=============================================
// C++ Programming in easy steps 7ed. [8:147]
//=============================================

class Calculator
{
  public :
    Calculator() ;      // (Constructor) To set initial status.
    void launch() ;     // To display initial instructions.
    void readInput() ;  // To get expression.
    void writeOutput() ;// To display result.
    bool run() const ;  // (Accessor) To get current status.

  private :
      double num1{}, num2{};    // To store input numbers.
      char oper{};              // To store input operator.
      bool status{ true };      // To store current status.
} ;
