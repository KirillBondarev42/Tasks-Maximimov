#include <iostream>
using namespace std;

struct Node {
  int val;
  Node* next;
};

// Èíèöèàëèçàöèè ýëåìåíòà îäíîñâÿçíîãî ñïèñêà íóëÿìè

void init(Node* node) {
    node->val = 0;
    node->next = NULL;
}

// Îòîáðàæåíèÿ îäíîñâÿçíîãî ñïèñêà íà ýêðàí
void show(Node* head) {
	Node* cur = root;
	while (cur->next != NULL)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	cout << endl;
}

// Äîáàâëåíèÿ ýëåìåíòà â îäíîñâÿçíûé ñïèñîê
void pushNode(Node* head,Node* node) {
	Node* cur = root;
	while (cur->next != NULL)
		cur = cur->next;

	cur->next = new Node;
	init(cur->next);
	cur->val = node->val;
} 


// Íàïèñàòü ôóíêöèþ èíèöèàëèçàöèè size ýëåìåíòîâ ñïèñêà çàäàííûì çíà÷åíèåì val.
void initList(Node* head, int size, int val)  {

}

// Íàïèñàòü ôóíêöèþ êîïèðîâàíèÿ ýëåìåíòîâ ìàññèâà source â íîâûé ìàññèâ dest
void copyMas(Node* source, Node* dest) {

}
  

// Íàïèñàòü ôóíêöèþ ñðàâíåíèå ñïèñêîâ source è dest. Åñëè ñïèñêè ðàâíû 0, åñëè íå ðàâíû -1
int compareMas(Node* source, Node* dest) {
  return 0;
}


// Íàïèñàòü ôóíêöèþ óäàëåíèÿ ñî ñäâèãîì âëåâî n-ãî ýëåìåíòà ñïèñêà.
void deleteList(Node* head,int n) {

}


// Íàïèñàòü ôóíêöèþ ñäâèãà çíà÷åíèé âïðàâî íà n-ýëåìåíòîâ ñ çàïîëíåíèåì êðàéíèõ ýëåìåíòîâ íóëÿìè
void rShiftList(Node* head,int n) {
	for (int i = 0; i < n; i++)
	{
		Node* p = root;
		int num = p->val;
		int x[2];

		x[0] = p->next->val;
		p->next->val = p->val;
		p->val = 0;

		int j = 0;

		while (p->next->next != NULL)
		{
			if (j % 2 == 0) {
				p = p->next;
				x[1] = p->next->val;
				p->next->val = x[0];
			}
			else {
				p = p->next;
				x[0] = p->next->val;
				p->next->val = x[1];
			}
			j++;
		}
	}
}



// Íàïèñàòü ôóíêöèþ ñäâèãà çíà÷åíèé âëåâî íà n-ýëåìåíòîâ ñ çàïîëíåíèåì êðàéíèõ ýëåìåíòîâ íóëÿìè.
void lShiftList(Node* head,int n) {

}


//Íàïèñàòü ôóíêöèþ ñäâèãà çíà÷åíèé âëåâî íà n-ýëåìåíòîâ ñ ïåðåíîñîì âûòåñíåííûõ ýëåìåíòîâ â êîíåö
void lRoundShiftMas(Node* head,int n, int size) {

}


// Íàïèñàòü ôóíêöèþ âû÷èñëåíèÿ ñðåäíåãî çíà÷åíèÿ ýëåìåíòîâ ñïèñêà.
int averageList(Node* head, int size) {
  return 0;
}



// Íàïèñàòü ôóíêöèþ âû÷èñëåíèÿ ñðåäíå êâàäðàòè÷åñêîãî îòêëîíåíèÿ ýëåìåíòîâ ñïèñêà.
int skoFromList(Node* head, int size) {
  return 0;
}


int testSkoFromList() {
  return -1;
}

bool testrShiftList()
{
	Node* root = new Node;

	init(root);
	pushNode(root, new Node{ 1 });
	pushNode(root, new Node{ 2 });
	pushNode(root, new Node{ 3 });
	pushNode(root, new Node{ 4 });
	pushNode(root, new Node{ 5 });

	//show(root);
	rShiftList(root, 3);
	//show(root);
	return (root->val == 0 && root->next->val == 0 && root->next->next->val == 0 && root->next->next->next->val == 1 && root->next->next->next->next->val == 2);
}


static void runTest(int (*testFunction)(),const std::string& testName)
{
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
  runTest(testrShiftList,"testrShiftlist");


}
