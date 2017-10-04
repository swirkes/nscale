# This program originated in Listing 1.5.3, Chapter 1 of The Audio Programming book from 
MIT Press
# nscale
is a program that outputs a list of frequencies for an Equal Tempered scale of N notes 
beginning on the frequency of the user supplied MIDI note.
In the western music tradition, Equal Tempermant is a tuning protocol that divides an octave 
into 12 equidistant semitones. This equidistance is what allows free modulation across 
any key without sounding "out of tune."
More broadly, Equal Tempermant divides notes such that every adjacent pair of notes has the
same ratio.

Pitch is generally perceived as the logarithm of frequency. In the western 12-tone scale,
the distance ratio for a semitone within an octave is the 12th root of 2 (12√2 ), which is roughly 
equal to 1.05946.

By taking the Nth root of 2, we can divide the octave into any number of equally tempered notes.
For this program, we have set the limit of notes within an octave at 24.
