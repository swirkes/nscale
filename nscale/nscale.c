//
//  nscale.c Display Equal Tempered frequencies for an N-Octave,
//  from a given MIDI note.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int notes, midinote, i;
    double frequency, ratio;
    double c0, c5;
    double intervals[24];
    
    if(argc != 3){
        printf("usage: nscale notes midinote\n");
        return 1;
    }
    notes = atoi(argv[1]);
    if(notes < 1){
        printf("Error: notes must be positive\n");
        return 1;
    }
    if(notes > 24){
        printf("Error: maximum value for notes is 24\n");
        return 1;
    }
    midinote = atoi(argv[2]);
    if(midinote < 0){
        printf("Error: MIDI note must be between 0 - 127\n");
        return 1;
    }
    if (midinote > 127){
        printf("Error: MIDI note must be between 0 - 127\n");
        return 1;
    }
    
    ratio = pow(2, 1/12.0);
    //find Middle C, three semitones above low A = 220
    c5 = 220.0 * pow(ratio, 3);
    //MIDI note 0 is C 5 octaves below middle C
    c0 = c5 * pow(0.5, 5);
    
    frequency = c0 * pow(ratio, midinote);
    ratio = pow(2.0, 1.0 / notes);
    for(i = 0; i <= notes; i++){
        intervals[i] = frequency;
        frequency *= ratio;
    }
    for (i = 0; i <= notes; i++) {
        printf("%d: %f\n",i+1, intervals[i]);
    }
    return 0;
}
