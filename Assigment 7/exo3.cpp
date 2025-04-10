#include <iostream>
using namespace std;

class NegReq_584 {
public:
    const char* what_584() const {
        return "Requested number of books cannot be negative.";
    }
};

class NotEnough_584 {
public:
    const char* what_584() const {
        return "Not enough books available.";
    }
};

void borrowBook_584(int req_584, int avail_584) {
    try {
        if (req_584 < 0)
            throw NegReq_584();
        if (req_584 > avail_584)
            throw NotEnough_584();

        cout << "Books borrowed successfully: " << req_584 << endl;
    } catch (NegReq_584& e_584) {
        cout << "Error: " << e_584.what_584() << endl;
    } catch (NotEnough_584& e_584) {
        cout << "Error: " << e_584.what_584() << endl;
    } catch (...) {
        cout << "An unexpected error occurred." << endl;
    }
}

int main() {
    int req_584, avail_584;

    cout << "Enter number of books to borrow: ";
    cin >> req_584;
    cout << "Enter number of books available: ";
    cin >> avail_584;

    borrowBook_584(req_584, avail_584);

    return 0;
}
