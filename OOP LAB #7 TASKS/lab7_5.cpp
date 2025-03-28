#include <iostream>
using namespace std;

class Character {
protected:
    int id;
    string name;
    int level;
    int health;

public:
    Character(int i, string n, int l, int h) : id(i), name(n), level(l), health(h) {}

    void attack() { 
      cout << name << " attacks!" << endl; 
   }
    void defend() { 
      cout << name << " defends!" << endl; 
   }
    void showStats() { 
      cout << name << " - Level: " << level << ", HP: " << health << endl; 
   }
};

class Warrior : public Character {
    int armor;
public:
    Warrior(int i, string n, int l, int h, int a) : Character(i, n, l, h), armor(a) {}
    void attack() { 
      cout << name << " swings a sword!" << endl; 
   }
};

class Mage : public Character {
    int mana;
public:
    Mage(int i, string n, int l, int h, int m) : Character(i, n, l, h), mana(m) {}
    void defend() { 
      cout << name << " casts a shield spell!" << endl; 
   }
};

class Archer : public Character {
    int arrows;
public:
    Archer(int i, string n, int l, int h, int a) : Character(i, n, l, h), arrows(a) {}
    void attack() { 
      cout << name << " shoots an arrow!" << endl; 
   }
};

class Rogue : public Character {
    int agility;
public:
    Rogue(int i, string n, int l, int h, int ag) : Character(i, n, l, h), agility(ag) {}
    void showStats() { 
      cout << name << " - Level: " << level << ", HP: " << health << ", Agility: " << agility << endl;
    }
};

int main() {
    Warrior w(1, "iqra", 5, 100, 50);
    Mage m(2, "yogita", 4, 80, 120);
    Archer a(3, "shobha", 6, 90, 30);
    Rogue r(4, "samiya", 7, 85, 60);

    w.attack();
    m.defend();
    a.attack();
    r.showStats();

    return 0;
}