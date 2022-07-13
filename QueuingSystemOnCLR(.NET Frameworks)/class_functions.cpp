#include "class_kursova.h"
#include <stdlib.h>


int MAX_RAND = 101;

STQueue::STQueue(int s) {
    size = s;
    array = new float[size];
    pri_arr = new int[size];
    top = 0;
}
STQueue::~STQueue() {
    delete[] array;
}
bool STQueue::IsNotFull() {
    if (size != top) {
        return true;
    }
    else return false;
}
bool STQueue::IsElements() {
    if (size + 1 != top && top != 0) {
        return true;
    }
    else return false;
}
bool STQueue::IsFull() {
    if (size == top) {
        return true;
    }
    else return false;
}
void STQueue::Push(float a, int pr) {
    array[top] = a;
    pri_arr[top] = pr;
    top++;
}
float STQueue::Pop() {
    top--;
    return array[top];
}
int STQueue::PopPrior() {
    return pri_arr[top];
}


Chanel::Chanel(int p) {
    timeofoccopation = power = p;
    generalTOO = 0;
}
void Chanel::SetAppl(int a, short int pr) {
    prior = pr;
    currAppl = a;
    status = true;
}
int Chanel::GetAppl() {
    status = false;
    int temp = currAppl;
    currAppl = -1;
    return temp;
}
int Chanel::GetPrior() {
    return prior;
}
void Chanel::DefaultTOO() {
    timeofoccopation = 0;
}
void Chanel::TOOPP() {
    timeofoccopation++;
    generalTOO++;
}
int Chanel::GetGTOO() {
    return generalTOO;
}
bool Chanel::IsBusy() { //зайнятий?
    if (timeofoccopation != power) {
        return true;
    }
    else return false;
}
void Chanel::SetStatus(bool b) {
    status = b;
}
void Chanel::ServeAppl(Chanel& Ph_Ch, STQueue& Ph_Q1, STQueue& Ph_Q2, STQueue& Ph_Q3, int& transmitter, short int& transproir) {
    transmitter = Ph_Ch.GetAppl(); // беремо опрацьовану заявку
    transproir = Ph_Ch.GetPrior();
    if (Ph_Q1.IsElements()) { //якщо в 1 черзі є елементи
        Ph_Ch.DefaultTOO(); // ставимо на 0 час окупації
        Ph_Ch.SetAppl(Ph_Q1.Pop(), Ph_Q1.PopPrior()); // ставимо на опрацювання заявку
        Ph_Ch.TOOPP();
    }
    else if (Ph_Q2.IsElements()) { //якщо в 2 черзі є елементи
        Ph_Ch.DefaultTOO(); // ставимо на 0 час окупації
        Ph_Ch.SetAppl(Ph_Q2.Pop(), Ph_Q2.PopPrior()); // ставимо на опрацювання заявку
        Ph_Ch.TOOPP();
    }
    else if (Ph_Q3.IsElements()) { //якщо в 3 черзі є елементи
        Ph_Ch.DefaultTOO(); // ставимо на 0 час окупації
        Ph_Ch.SetAppl(Ph_Q3.Pop(), Ph_Q3.PopPrior()); // ставимо на опрацювання заявку
        Ph_Ch.TOOPP();
    }
}



void IOStream::MathEffivient() { // EfficientSMO
    EfficientSMO = ServedAppl / GeneralAppl;
}
void IOStream::MathACO(float tOfOcCh1, float tOfOcCh2, float tOfOcCh3, float tOfOcCh4, float tOfOcCh5) { // AverageCoefOccup
    AverageCoefOccup = (tOfOcCh1 + tOfOcCh2 + tOfOcCh3 + tOfOcCh4 + tOfOcCh5) / (5 * worktime);
}
float IOStream::GetEfficientSMO() {
    return EfficientSMO;
}
float IOStream::GetAverageCoefOccup() {
    return AverageCoefOccup;
}
void IOStream::WorkTimePP() {
    worktime++;
}
void IOStream::SetEfficient(float a) {
    EfficientSMO = a;
}
void IOStream::SetACO(float a) {
    AverageCoefOccup = a;
}
void IOStream::SetWorktime(float a) {
    worktime = a;
}



int Generator::MakeAppl(int ChanceGen1, int ChanceGen2, int ChanceGen3, int ChanceNotGen) {
    int randnum = rand() % MAX_RAND; // рандомне значення
    int GentedAppl;

    if (randnum >= 0 && randnum < ChanceGen1) {
        GentedAppl = 1;
    }
    else if (randnum >= ChanceGen1 && randnum < ChanceGen1 + ChanceGen2) {
        GentedAppl = 2;
    }
    else if (randnum >= ChanceGen1 && randnum < MAX_RAND) {
        GentedAppl = 3;
    }

    if (ChanceNotGen >= 0 && ChanceNotGen < ChanceGen1) {
        if (randnum >= 0 && randnum < ChanceNotGen) {
            GentedAppl = 0;
        }
    }
    else if (ChanceNotGen >= ChanceGen1 && ChanceNotGen < ChanceGen2) {
        if (randnum >= ChanceGen1 && randnum < ChanceNotGen + ChanceGen1) {
            GentedAppl = 0;
        }
    }
    else if (ChanceNotGen >= ChanceGen2 && ChanceNotGen < ChanceGen3) {
        if (randnum >= ChanceGen1 + ChanceGen2 && randnum < ChanceNotGen + ChanceGen3) {
            GentedAppl = 0;
        }
    }
    else if (ChanceNotGen >= ChanceGen3 && ChanceNotGen < MAX_RAND) {
        if (randnum >= ChanceGen1 + ChanceGen2 + ChanceGen3 && randnum < MAX_RAND) {
            GentedAppl = 0;
        }
    }
    return GentedAppl;
}
