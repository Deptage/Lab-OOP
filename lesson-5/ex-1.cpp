#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>
const int numberOfCurrencies=5;
std::string Currencies[5]={"EUR","USD","GBP","CHF","JPY"};
class FakeCantor {
private:
    std::map<std::string, float> rates{{"USD", 1.0366f},
                                       {"GBP", 0.87063f},
                                       {"CHF", 0.9881f},
                                       {"JPY", 145.12f}};
public:
    FakeCantor() = default;
    float EuroToRate(const std::string &currency) {
        return rates[currency];
    };
};

class Currency {
public:
    virtual Currency *AddedCurrency(float value, std::string currency) = 0;
    virtual Currency *SubtractedCurrency(float value, std::string currency) = 0;
    virtual std::string Abbreviation() = 0;
    virtual std::string Symbol() = 0;
    virtual std::string Balance() = 0;
    virtual float DollarExchangeRate() = 0;
};

class Euro : public Currency {
    // TODO: implement class
private:
    //std::map<std::string,double> balance;
    double balanceEUR;
    FakeCantor cantor;
public:
    Euro(double b)
    {
        this->balanceEUR=b;
    }
    Euro *AddedCurrency(float value, std::string currency)
    {
        value=1/(value*cantor.EuroToRate(currency));
        Euro *tmp= new Euro(balanceEUR+value);
        return tmp;
    }
    Euro *SubtractedCurrency(float value, std::string currency)
    {
        value=value*cantor.EuroToRate(currency);
        Euro *tmp=new Euro(balanceEUR-value);
        return tmp;
    }
    std::string Abbreviation()
    {
        return "EUR";
    }
    std::string Symbol()
    {
        return "€";
    }
    std::string Balance()
    {
        std::string result="";
        result+= std::to_string(balanceEUR);
        result+=Euro::Abbreviation();
        return result;
    }
    float DollarExchangeRate()
    {
        return cantor.EuroToRate("USD");
    }
};

int main() {
    // TODO: showcase usage
    Euro myAccount(100.0);
    std::cout<<myAccount.Balance()<<std::endl;
    Euro *newAc=new Euro(0.0);
    newAc=myAccount.AddedCurrency(50.0,"USD");
    std::cout<<newAc.Balance()<<std::endl;
    return 0;
}
