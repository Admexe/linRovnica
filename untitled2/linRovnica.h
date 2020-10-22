//
// Created by User on 21. 10. 2020.
//

#ifndef UNTITLED2_LINROVNICA_H
#define UNTITLED2_LINROVNICA_H
class Rovnica
{
private:
    float koefA;
    float koefB;
public:
    Rovnica();
    Rovnica(float mojeA, float mojeB);
    Rovnica(float mojKoef, char ktory = 'a');
    void vypisRovnicu() const;
    float vratKoren() const;
};



#endif //UNTITLED2_LINROVNICA_H
