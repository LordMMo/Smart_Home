#include "executer.h"
#include "voicecommand.h"

bool Executer:: executeVoiceCommand(VoiceCommand voiceCommand) {
    //Hier sollte die Implementierung für die Ausführung des Sprachbefehls eingefügt werden.
    if (voiceCommand.isValid) {
        //Wenn der Sprachbefehl gültig ist, führen Sie die Aktion aus, und geben Sie true zurück.

        return true;
    } else {
        // sonst wird false zurückgegeben, um anzugeben, dass der Sprachbefehl nicht ausgeführt wurde.
        return false;
    }
}
