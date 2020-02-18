#include<string>
#include <iostream>
#include <iomanip>
using namespace std;
class Package {
public:

    Package(const string &, const string &, const string &, const string &, const string &, const string &, const string &, const string &, const string &, const string &, double = 0.0, double = 0.0); // constructor

    void setSendName(const string &);
    string getSendName() const;
    void setSendAdd(const string &);
    string getSendAdd() const;
    void setSendCity(const string &);
    string getSendCity() const;
    void setSendSt(const string &);
    string getSendSt() const;
    void setSendZip(const string &);
    string getSendZip() const;
    void setRecName(const string &);
    string getRecName() const;
    void setRecAdd(const string &);
    string getRecAdd() const;
    void setRecipientCity(const string &);
    string getRecipientCity() const;

    void setRecSt(const string &);

    string getRecSt() const;

 

    void setRecZip(const string &);

    string getRecZip() const;

 
    void setWt(double);

    double getWt() const;

    void setShip(double);

    double getShip() const;

    double CalCost() const;

 

private:

    string sendName;

    string sendAdd;

    string sendCity;

    string sendState;

    string sendZip;

    string recName;

    string recAdd;

    string recCity;

    string recState;

    string recZip;

    double wt;

    double shipCost;

};

Package::Package(const string &sname, const string &saddress, const string &scity, const string &sstate, const string &szipcode, const string &rname, const string &raddress, const string &rcity, const string &rstate, const string &rzipcode, double wt, double shipCost)

{

    sendName = sname;

    sendAdd = saddress;

    sendCity = scity;

    sendState = sstate;
    sendZip = szipcode;

    recName = rname;

    recAdd = raddress;

    recCity = rcity;

    recState = rstate;

    recZip = rzipcode;

    setWt(wt);

    setShip(shipCost);

}

 

void Package::setSendName(const string &sname)

{

    sendName = sname;

}

 

string Package::getSendName() const

{

    return sendName;

}

 

void Package::setSendAdd(const string &saddress)

{

    sendAdd = saddress;

}

 

string Package::getSendAdd() const

{

    return sendAdd;

}

void Package::setSendCity(const string &scity)

{

    sendCity = scity;

}

 

string Package::getSendCity() const

{

    return sendCity;

}

 

void Package::setSendSt(const string &sstate)
{

    sendState = sstate;

}

 

string Package::getSendSt() const

{

    return sendState;

}

void Package::setSendZip(const string &szipcode)
{
    sendZip = szipcode;
}

 

string Package::getSendZip() const

{

    return sendZip;

}

 

void Package::setRecName(const string &rname)

{

    recName = rname;

}

 

string Package::getRecName() const

{

    return recName;

}

 

void Package::setRecAdd(const string &raddress)

{

    recAdd = raddress;

}

 

string Package::getRecAdd() const

{

    return recAdd;

}

 

void Package::setRecipientCity(const string &rcity)

{

    recCity = rcity;

}

 

string Package::getRecipientCity() const

{

    return recCity;

}

 

void Package::setRecSt(const string &rstate)

{

    recState = rstate;

}

 

string Package::getRecSt() const

{

    return recState;

}

void Package::setRecZip(const string &rzipcode)

{

    recZip = rzipcode;

}

 

string Package::getRecZip() const

{

    return recZip;

}

 

void Package::setWt(double wt)

{

    wt = (wt < 0.0 ) ? 0.0 : wt;

}

double Package::getWt() const

{

    return wt;

}

void Package::setShip(double shipCost)

{

    shipCost = ( shipCost < 0.0) ? 0.0 : shipCost;

}

 

double Package::getShip() const

{

    return shipCost;

}

 

double Package::CalCost() const

{

 

    return wt * shipCost;

 

}

class TDP : public Package

{

public:

    TDP(const string &, const string &, const string &, const string &, const string &, const string &,

    const string &, const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0); // constructor

     

    void setFlatFee(double);

    double getFlatFee() const;

    void CalCost() const;

 

private:

    double flatFee;

};

class ONP : public Package

{

public:

 

    ONP(const string &, const string &, const string &, const string &, const string &, const string &, const string &, const string &, const string &, const string &, double=0.0, double=0.0, double=0.0); // constructor

 

        void setFee(double);

        double getFee() const;

        void CalCost() const;

 

private:

    double fee;

};
int main()

{
    ONP box("name", "123 this Street", "boston", "ma", "12345", "receiver", "123 that street", "medford", "ma", "25341", 10.00, 1.50, .85);

     

    TDP parcel("name2", "123 1st Street", "orlando", "fl", "56474", "receiver2", "833 2nd Street", "miami", "fl", "88472", 15.00, 1.05, 5.00);

 

    cout << fixed << setprecision(2);

     

    cout << "To ship a box with overnight delivery\n";

    cout << "The sender    " << box.getSendName()<< "\n";

    cout << "              " << box.getSendAdd() << "\n";

    cout << "              " << box.getSendCity() << " " << box.getSendSt() << " " << box.getSendZip() << "\n";

     

 

    cout << "The recipient " << box.getRecName()<< "\n";

    cout << "              " << box.getRecAdd() << "\n";

   cout << "              " << box.getRecipientCity() << " " << box.getRecSt() << " " << box.getRecZip() << "\n";

    cout << "The cost is   $ "<<box.CalCost() << "\n";

    cout << "\n\n";

 

    cout << "To ship a parcel with 2 day delivery\n";

    cout << "The sender    " << parcel.getSendName()<< "\n";

    cout << "              " << parcel.getSendAdd() << "\n";

    cout << "              " << parcel.getSendCity() << " " << parcel.getSendSt() << " " << parcel.getSendZip() << "\n";

     

 

    cout << "The recipient " << parcel.getRecName()<< "\n";

    cout << "              " << parcel.getRecAdd() << "\n";

    cout << "              " << parcel.getRecipientCity() << " " << parcel.getRecSt() << " " << parcel.getRecZip() << "\n";

    cout << "The cost is   $ "<<parcel.CalCost() << "\n";

 

system("pause");

return 0;

}

