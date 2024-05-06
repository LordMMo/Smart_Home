#include "emergencycallprovider.h"

bool EmergencyCallprovider::call(string address, string userName, string emergencyType) {

    cout << "Notruf an " << address << " von " << userName << " vom Typ " << emergencyType << " abgesetzt." << endl;

    return true;
}



