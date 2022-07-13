#pragma once
#ifndef __Header_h__
#define __Header_h__

extern int MAX_RAND;

class STQueue {
public:

    STQueue(int s);
    bool IsNotFull();
    bool IsElements();
    bool IsFull();
    void Push(float a, int pr);
    float Pop();
    int PopPrior();
    ~STQueue();
private:
    int size;
    float* array;
    int* pri_arr;
    int top;
};



class Chanel {
public:
    Chanel(int p);
    void SetAppl(int a, short int pr);
    void ServeAppl(Chanel& Ph_Ch, STQueue& Ph_Q1, STQueue& Ph_Q2, STQueue& Ph_Q3, int&, short int&);
    int GetAppl();
    int GetPrior();
    void DefaultTOO();
    void TOOPP();
    int GetGTOO();
    bool IsBusy();
    void SetStatus(bool b);
private:
    int currAppl = -1;
    int timeofoccopation, generalTOO;
    bool status = false; //НЕ зайнятий
    short int prior = -1;
    int power;
};



class IOStream {
public:
    void MathEffivient();
    void MathACO(float tOfOcCh1, float tOfOcCh2, float tOfOcCh3, float tOfOcCh4, float tOfOcCh5);
    float GetEfficientSMO();
    float GetAverageCoefOccup();
    void WorkTimePP();
    void SetEfficient(float);
    void SetACO(float);
    void SetWorktime(float);
    float ServedAppl = 0.0;
    float NotServedAppl = 0.0;
    float GeneralAppl = 0.0;
private:
    float worktime = 0.0; //рахувати скільки разів відбулася реалізація моделі
    float EfficientSMO;
    float AverageCoefOccup;
};



class Generator {
public:
    int MakeAppl(int ChanceGen1, int ChanceGen2, int ChanceGen3, int ChanceNotGen);
private:

};
#endif
