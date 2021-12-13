#include <iostream>


const int MASSIZE = 1000;
int mas[MASSIZE];

// ������� 0:
// �������� ������� ������������� size ��������� ������� �������� ��������� val.
void initByZeroMas(int* imas, int size)  {

  if(size>MASSIZE)
    size=MASSIZE; 
  for(int i=0;i<size;i++) {
    mas[i]=0;
  }
}



// ������� 1:
// �������� ������� ������������� size ��������� ������� �������� ��������� val.
void initMas(int* imas, int size, int val)  {

}

//������� 2:
// �������� ������� ����������� size ��������� ������� source � ������ dest

void copyMas(int* source,int* dest, int size) {

}
  

//������� 3:
//�������� ������� ��������� size ��������� ��������  source � dest. ���� ������� ����� 0, ���� �� ����� -1

int compareMas(int* source,int* dest, int size) {
	for (int i = 0; i < size; i++) {
		if (source[i] != dest[i]) {
			return -1;
		}
	}
	return 0;
}

//������� 4:
//�������� �������� �� ������� ����� n-�� �������� �������. ������ ������� ������ ����������� ������.
void deleteFromMas(int* source,int n, int size) {

}

// ������� 5:
// �������� ������� ������ ������ �� n-��������� � ����������� ������� ��������� ������

void rShiftMas(int* source,int n, int size) {
	if (n > size) {
		for (int i = 0; i < size; i++) {
			source[i] = 0;
		}
	}
	else {
		for (int i = size - 1 ; i >= n; i--) {
			source[i] = source[i - n];
		}
		for (int i = 0; i < n; i++) {
			source[i] = 0;
		}	
	}
}



// ������� 6:
// �������� ������� ������ ����� �� n-��������� � ����������� ������� ��������� ������
void lShiftMas(int* source,int n, int size) {

}


// ������� 7:
// �������� ������� ������ ����� �� n-��������� � ��������� ����������� ��������� � �����
void lRoundShiftMas(int* source,int n, int size) {

}


// ������� 8:
// �������� ���������� � ����� ������ �� ������� ������ ��������� �������. ������ ������� ������ ���������.
void pushToMas(int* source,int val, int size) {

}



// ������� 8:
// �������� ������� ���������� �������� �������� ��������� �������.
int averageMas(int* source, int size) {
  return 0;
}

// ������� 9:
//�������� ������� ���������� ������ ��������������� ���������� ��������� �������.
int SkoFromMas(int* source, int size) {
  return 0;
}


// �����

// ������� 0:
// �������� ������� ������������� size ��������� ������� �������� ��������� val.
int testInitByZeroMas() {
  // �������������� ....
  // initByZeroMas(int* imas, int size)
  return 0;
}




// ������� 1:
// �������� ������� ������������� size ��������� ������� �������� ��������� val.

int testInitMas()  {
  return -1;
}

//������� 2:
// �������� ������� ����������� size ��������� ������� source � ������ dest

int testCopyMas() {
  return -1;
}
  

//������� 3:
//�������� ������� ��������� size ��������� ��������  source � dest. ���� ������� ����� 0, ���� �� ����� -1

int testCompareMas() {
  int source[] = {0,1,2,3,4,5,6,7,8,9}; 
  int dest[] = {0,1,2,3,4,5,6,7};

  if (compareMas(source,dest,8) != 0)
    return -1;
    
  int source1[] = {0,1,2,3,4,5,6,7,8,9}; 
  int dest1[] = {1,1,2,3,4,5,6,7};

  if (compareMas(source1,dest1,8) != -1)
    return -1;

  return 0;
}

//������� 4:
//�������� �������� �� ������� ����� n-�� �������� �������. ������ ������� ������ ����������� ������.
int testDeleteFromMas() {
  return -1;
}

// ������� 5:
// �������� ������� ������ ������ �� n-��������� � ����������� ������� ��������� ������

int testrShiftMas() {
	// arrange 
	int source[5] = {-10, 2, -7, 4, 5};		
	int result[5] = {0, 0, 0, 0, 0};
	int shiftCount = 15;
	
	//act
	rShiftMas(source, shiftCount, 5);
	
	//assert
	return compareMas(source, result, 5);
}



// ������� 6:
// �������� ������� ������ ����� �� n-��������� � ����������� ������� ��������� ������
int testlShiftMas() {
  return -1;
}


// ������� 7:
// �������� ������� ������ ����� �� n-��������� � ��������� ����������� ��������� � �����
int testlRoundShiftMas() {
  return -1;
}


// ������� 8:
// �������� ���������� � ����� ������ �� ������� ������ ��������� �������. ������ ������� ������ ���������.
int testPushToMas() {
    return -1;
}


// ������� 8:
// �������� ������� ���������� �������� �������� ��������� �������.
int testAverageMas() {
  return -1;
}

// ������� 9:
//�������� ������� ���������� ������ ��������������� ���������� ��������� �������.
int testSkoFromMas() {
  return -1;
}


void runTest(int (*testFunction)(),const std::string& testName)
{
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
   runTest(testInitByZeroMas,"testInitByZeroMas");
   runTest(testInitMas,"testInitMas");
   runTest(testCopyMas,"testCopyMas");

   runTest(testCompareMas,"testCompareMas");
   runTest(testSkoFromMas,"testSkoFromMas");

   runTest(testrShiftMas, "testrShiftMas");
}
