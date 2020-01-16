# 7MU011-UW1

Colour music, or the art of combining musical effects with colours with correlations of harmonic and emotional effect, has a long history. First Plato Plato pondered the idea of eight concentric circles each with a distinctive color and tone dubbing it "music of the spheres". Aristotle suggested the first color-music formula assigning colors to musical tones according to how the colors and tones blended(Goldsmith). 

Taken from the Greek words syn meaning ‘together’, and aesthesis meaning ‘perception’, ‘synesthesia’ is "sensation in one part of the body produced by stimulus in another," (online etymology dictionary 2018). In this case, Seeing Sounds as shapes and colorus (Chromesthesia). This project combines sound and colour in real time to creatively aid with the learning of music theory.

In music education, colour is typically used in method books to highlight new material. Stimuli received through several senses excite more neurons in several localized areas of the cortex, thereby reinforcing the learning process and improving retention Rogers (1991). This method of utilisation has only been limited to notation in instructional materials i.e. sight reading, naming letter names of notes and performing from memory.

The color organ is a musical instrument which produces visual stimuli such that it corresponds to the sound in a certain manner. In 1725, Louis-Bertrand Castel [20, 17, 7] introduced the “Clavecin pour les yeux” or ‘harpsichord for the eyes’” intended to link the seven colours of the spectrum to note on the keyboard. This innovation saw many adaptations over the centuries taking it from coloured paper, to lamps on glass to lights. Companies like Yamaha and Casio released light up keyboards to aid in learning music in the 90’s which allowed the user to play along to existing songs by following the keys that lit up however it only displayed one colour presumably based on manufacturing of light not being as evolved at the time. Recently, thanks to the production of programmable RGB LED’s McCarthy music released an “illuminating piano” with a dedicated app that displays interactive digital music sheets and allows learning and playback of music score in colour (Geekwire 2015). Interestingly these devices only allow for learning existing songs and don’t serve those who want to learn the theories behind them in order to create for themselves.






Although not completely accurate it is said that the left and right hemisphere of the brain is associated with that of logical (left) and creative (right) cognition. Music listening and performance impacts the brain as a whole, stimulating both halves – the analytical brain and the subjective-artistic brain (Yoon 2000). Sherman (2013) does not completely agree with the left-brain right-brain concept but does confirm that “There is evidence that a particular region of the right hemisphere is activated in certain kinds of creative breakthrough—the “aha” moment of insight in which the answer to a problem appears suddenly and without conscious knowledge of the steps that led there”.

Stimulating more senses
Williams (1986) adds “the right brain is adept at visual imagery. The left hemisphere, sequential and linear in its data processing, moves step by step when processing new information” while its already in practice that the left brain used with lighting on a keyboard supports in copying a sequence and notation (a provided music score) the right brain is processing audio information but nothing visual. Thus if the right side of the brain is stimulated more through visual stimuli, moments of creative breakthrough has the potential to become more frequent. Being able to see sound similarly to that of a synesthete may open the doors to more creative exploration.


Usability 
None of the devices previously mentioned give the users much control over how they approach music, they follow a more of a “do this in this way” controlled method of usability which has its limits. Unless companies are monitoring user-behaviour and adapting their devices to fit with ever changing methods of approach, there remains an un explored area within sound and colour. What if the user was given the reigns? Platform building is, by definition, a kind of exercise in emergent behaviour. The platform builders do not just open a door in the adjacent possible, they build an entire new floor (Johnson S 2010). A device that can provide real time colour feedback of sound that is also customisable by the users may be the next platform for creativity in all areas of music. Johnson (2010) Describes how the creators of social networking service ‘Twitter’ recognised the advantage of having the most diverse ecosystem of software applications being built on your platform. On an open platform, good ideas can come from anywhere. This concept will be adapted to this project with the aim being to create a device that will act as a platform for users to customise/build software specific to their requirements.
The Build
While the LED half of the build was not complete there was enough done in the Max patch to run a successful prototype of the Synesteacher build.

Goldsmith points out “no common set of color and sound associations exist between individual synesthetes. Synesthesia is a personal experience and the details of the perceptions are completely subjective” # some people see shapes and textures or feel things, to be able to group all of that into one device would be extremely difficult as shapes and textures would have to be pre animated to respond to certain characteristics, this might be overwhelming for users when setting it up for personal uses, so the focus of this device will be sound colour relationships with customisable mapping over the keys. Pre-set colour mappings were set up based on existing theories of light and sound relationships.

Colour of sound patch
According to Goss (2016) the vibrations of sound and light differentiate as sound is based on vibrations of air molecules and light is based on an electromagnetic wave. While “frequency” is a measure commonly used for both, the two types of waves have substantial differences. frequency of sound can be converted to a frequency of light by continuously doubling the sound frequency (going up one octave each time) until it reaches a frequency in the range of 400–800 THz. That frequency is then converted into a wavelength of light, using the formula:
wavelength = speedOfLight / frequence 

Scriabin patch
Alexander Scriabin (a synesthete) developed a mapping system between pitches and colours to go with the keys on a keyboard based on his perception (See appendix).The significance of the placement of colours within is mapping is that similar colours are placed on keys that are a perfect forth and perfect fifth apart rather than next to each other. When this placement is displayed in the circle of fifths the colours appear more systematic and continuous (see appendix)(Goss 2016).
Problems that arose
the communication between Max and Arduino was difficult to control as all information would go through the serial one after the other. It would have be useful to be able to assign outputs from max to different ports to ensure that information was going to the select path only. Through lots of fine tuning a method was found to set arduino to receive the information in a specified order. But it would occasional send too much or too little information causing the lights to react incorrectly. Another possible reason for this could have been the library Arduino was using for the lights not correctly communicating with the LED strip but it only gave problems with the serial was reading information from Max. Any code sent directly from Arduino worked perfectly. While almost getting close to a resolve. A wire from the lights touched the amp causing them to stop working.  
Improvements
The current set up of the Project allows users to create their own lighting setup to best suit what it might be they are trying to learn. Future developments of this prototype will have a setting called Scale trainer. The scale trainer setting will feature a dropdown menu listed with different scales (major, minor, blues, Phrygian, Ionian etc) followed by another dropdown menu with starting notes (C, C#, D, D#, E etc). this would potentially utilise a maths coding which will set the lights based on the intervals between the notes to reduce extensive amounts of coding. This feature will allow users to practice different scales with lighting as feedback to see whether they play the scale correct or not. They customisation with still be available for users to improve their understanding and add any interesting discovers (e.g notes that seem to work with the scale that are not necessarily in the scale). Pre-sets will come with information panel explaining the theory linked to the E.g Scriabin setting and the circle of 5ths, this will allow users to further study the theories that may be presented to them.  
For users that are using a piano rather than a midi device a [ftom~] (frequency to midi) object will be added then taking in audio from a microphone (or an audio out if a non-MIDI keyboard is in use). This setup will be better represented with the LED part of the build.

Another intended feature will be harmonic mode. This will light up LED’s that are closest relation to the harmonic frequencies of the note or notes played. This would be to potentially add colour (sound colour that is) to chords through their potential harmonics.


Conclusion
The Synesteacher prototype acts as a visual sensory feedback tool which can aid in creativity, performance and music education for those who are self-learning or those being taught. With further developments it could become the next platform for technology advancements in music as many devices are progressing with lights becoming more affordable. Synaesthesia is an ability that can be utilised to benefit many people if it is utilised in a correct and constructive way.

Intended modes.
Audio>Midi 
Harmonic Mode
Scale trainer
George L. Rogers
Journal of Research in Music Education
Vol. 39, No. 1 (Spring, 1991), pp. 64-73

Goss C (2016) The color of sound. [online]. [accessed 16th January 2020] Available at: < http://www.flutopedia.com/sound_color.htm>
Yoon, J. (2000, January 1). Music in the Classroom: Its Influence on Children’s Brain Development, Academic Performance, and Practical Life Skills.

Williams, Linda. Teaching for the two-sided mind: a guide to right brain/left brain education. Simon & Schuster. 1986.



Sherman C. (2013) Right Brain-Left Brain–A Primer. [online] [accessed 16th January 2020] Available at: <http://www.dana.org/Publications/Primers/Right_Brain-Left_Brain%E2%80%93A_Primer/>

George L. Rogers (1991) Journal of Research in Music Education Vol. 39, No. 1 (Spring, 1991), pp. 64-73

https://www.geekwire.com/2015/new-illuminating-piano-works-ipad-windows-light-way-aspiring-pianists/

Goss C (2016) The color of sound. [online]. [accessed 7th January 2019] Available at: < http://www.flutopedia.com/sound_color.htm>

Johnson,S.(2011)WhereGoodIdeasComeFrom,TheNaturalHistoryofInnovation.NewYork:RiverheadBooks. 

Goldsmith J (2001) An Investigation Into the Relationship Between Sound and Color [online]. [accessed 7th January 2019]. Available at < http://www.people.vcu.edu/~djbromle/color-theory/color01/Relationship-color-sound-joe_goldsmith.html>


Lohr C. N ColorChord Chromatic Sound to Light Conversion System [online]. [accessed 9th January 2019]. Available at: <https://github.com/cnlohr/colorchord>

Derbyshire S. (2015) Music education is out of tune with how young people learn [online]. [accessed 16th January2019]. Available at < https://www.theguardian.com/culture-professionals-network/2015/oct/01/music-education-how-young-people-learn-exams>


