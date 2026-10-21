#include <iostream>
#include <string>

using namespace std;

/*
 ============================================================================
  OOP CONCEPT: CONSTRUCTORS, GETTERS & SETTERS
 ============================================================================
  1. Constructor kya hota hai?
     - Ye aik special function hota hai jo object bante hi AUTOMATICALLY call hota hai.
     - Iska naam class ke naam jaisa hota hai.
     - Iska koi return type nahi hota (void bhi nahi).

  2. Getters & Setters kya hotay hain?
     - Private data ko directly access nahi kiya ja sakta (Data Hiding / Encapsulation).
     - Getter (get): Data ko READ (dekhne) k liye function.
     - Setter (set): Data ko WRITE / MODIFY (change) karne k liye function WITH VALIDATION.
 ============================================================================
*/

class Student {
private:
    // Private attributes (Directly access nahi ho saktay)
    string name;
    int rollNumber;
    double cgpa;

public:
    // ----------------------------------------------------------------------
    // TYPE 1: DEFAULT CONSTRUCTOR (Bina parameters k)
    // Jab koi arguments pass na hon, ye default values set karta hai.
    // ----------------------------------------------------------------------
    Student() {
        name = "Unknown";
        rollNumber = 0;
        cgpa = 0.0;
        cout << "[1. Default Constructor Call Hua]: Khali student object ban gaya.\n";
    }

    // ----------------------------------------------------------------------
    // TYPE 2: PARAMETERIZED CONSTRUCTOR (Values pass kar ke banana)
    // Jab object banate waqt shuru me hi values deni hon.
    // ----------------------------------------------------------------------
    Student(string n, int r, double c) {
        name = n;
        rollNumber = r;
        setCgpa(c); // Setter use kiya taake validation apply ho sake
        cout << "[2. Parameterized Constructor Call Hua]: Student " << name << " create hua.\n";
    }

    // ----------------------------------------------------------------------
    // TYPE 3: CONSTRUCTOR OVERLOADING (Aik se zyada constructors)
    // Same name, but mukhtalif parameters (e.g., sirf name aur rollNo)
    // ----------------------------------------------------------------------
    Student(string n, int r) {
        name = n;
        rollNumber = r;
        cgpa = 0.0; // Default CGPA
        cout << "[3. Overloaded Constructor Call Hua]: Sirf Name aur Roll Number diya gaya.\n";
    }

    // ----------------------------------------------------------------------
    // TYPE 4: COPY CONSTRUCTOR (Aik object se doosra object copy karna)
    // Existing object ka reference (&other) le kar naya object banata hai.
    // ----------------------------------------------------------------------
    Student(const Student &other) {
        this->name = other.name + " (Copy)";
        this->rollNumber = other.rollNumber;
        this->cgpa = other.cgpa;
        cout << "[4. Copy Constructor Call Hua]: " << other.name << " ki copy banai gayi.\n";
    }

    // ----------------------------------------------------------------------
    // DESTRUCTOR (Jab object memory se delete hota hai)
    // ----------------------------------------------------------------------
    ~Student() {
        // Cleanup code yahan aata hai
    }

    // ======================================================================
    // GETTERS & SETTERS (ENCAPSULATION)
    // ======================================================================

    // --- GETTER & SETTER FOR NAME ---
    // Getter: Name read karne k liye
    string getName() const {
        return name;
    }

    // Setter: Name change karne k liye (Validation k sath)
    void setName(string n) {
        if (!n.empty()) {
            name = n;
        } else {
            cout << "  [Error]: Naam khali (empty) nahi ho sakta!\n";
        }
    }

    // --- GETTER & SETTER FOR ROLL NUMBER ---
    int getRollNumber() const {
        return rollNumber;
    }

    void setRollNumber(int r) {
        if (r > 0) {
            rollNumber = r;
        } else {
            cout << "  [Error]: Roll number positive hona chahiye!\n";
        }
    }

    // --- GETTER & SETTER FOR CGPA ---
    double getCgpa() const {
        return cgpa;
    }

    // Setter me VALIDATION (Rules check karna):
    // CGPA 0.0 se 4.0 ke darmiyan hi honi chahiye!
    void setCgpa(double c) {
        if (c >= 0.0 && c <= 4.0) {
            cgpa = c;
        } else {
            cout << "  [Error]: Invalid CGPA (" << c << ")! CGPA 0.0 se 4.0 k darmiyan honi chahiye.\n";
        }
    }

    // Display function to print all details
    void display() const {
        cout << "  -> Name: " << name 
             << " | Roll No: " << rollNumber 
             << " | CGPA: " << cgpa << "\n";
    }
};

// ==========================================================================
// TYPE 5: PRIVATE CONSTRUCTOR EXAMPLE (Singleton Pattern)
// Jab hum chahein k bahar se koi 'new' ya direct object na bana sake!
// ==========================================================================
class DatabaseConnection {
private:
    // Private Constructor: Bahar se koi object nahi bana sakta!
    DatabaseConnection() {
        cout << "[Private Constructor]: Sirf aik dafa connection bana.\n";
    }

public:
    // Static method jo controlled tareeqay se object provide kare
    static DatabaseConnection& getInstance() {
        static DatabaseConnection instance;
        return instance;
    }

    void connect() {
        cout << "  -> Database se connected successfully!\n";
    }
};

// ==========================================================================
// MAIN FUNCTION (TESTING ALL CONSTRUCTORS & GETTERS/SETTERS)
// ==========================================================================
int main() {
    cout << "========================================================\n";
    cout << "      OOP: CONSTRUCTORS & GETTERS/SETTERS DEMO          \n";
    cout << "========================================================\n\n";

    // 1. DEFAULT CONSTRUCTOR TEST
    cout << "--- 1. Testing Default Constructor ---\n";
    Student s1; // Default constructor chale ga
    s1.display();
    cout << "\n";

    // 2. PARAMETERIZED CONSTRUCTOR TEST
    cout << "--- 2. Testing Parameterized Constructor ---\n";
    Student s2("Ali Khan", 101, 3.75); // Parameterized chale ga
    s2.display();
    cout << "\n";

    // 3. CONSTRUCTOR OVERLOADING TEST
    cout << "--- 3. Testing Overloaded Constructor ---\n";
    Student s3("Sara Ahmed", 102); // 2-argument wala chale ga
    s3.display();
    cout << "\n";

    // 4. COPY CONSTRUCTOR TEST
    cout << "--- 4. Testing Copy Constructor ---\n";
    Student s4 = s2; // s2 ki values copy ho kar s4 banay ga
    s4.display();
    cout << "\n";

    // 5. GETTERS AND SETTERS WITH VALIDATION TEST
    cout << "--- 5. Testing Getters & Setters (Validation) ---\n";
    cout << "Pehele s1 ka naam: " << s1.getName() << "\n";

    // Valid values set karna:
    s1.setName("Hamza");
    s1.setRollNumber(105);
    s1.setCgpa(3.9);
    cout << "Values update karne k baad:\n";
    s1.display();

    cout << "\nGalat (Invalid) values test karna:\n";
    s1.setCgpa(5.5);   // Error message aayega kyunki CGPA > 4.0 nahi ho sakti
    s1.setRollNumber(-10); // Error message aayega kyunki Roll No negative nahi ho sakta
    s1.setName("");    // Error: empty name

    cout << "Invalid updates k baad s1 ki values (unchanged):\n";
    s1.display();
    cout << "\n";

    // 6. PRIVATE CONSTRUCTOR TEST
    cout << "--- 6. Testing Private Constructor (Singleton) ---\n";
    // Student s_wrong; // Possible hai
    // DatabaseConnection db; // ERROR: DatabaseConnection constructor is private!
    DatabaseConnection& db = DatabaseConnection::getInstance();
    db.connect();

    cout << "\n========================================================\n";
    cout << "                  PROGRAM FINISHED                      \n";
    cout << "========================================================\n";

    return 0;
}
