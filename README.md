# New-Project

Umme Hafsa
Charmaine Meade
May 27, 2015
CS246 Final Project

                                                         ANALYSIS AND THE COMPUTING TIME:

The algorithm to the solution is that all words which are anagrams of each other have the same 
signature or key. The signature is the alphabetical order of the letters in the word. For example
 the signature of 'pearls' is 'aelprs'.The map to the signature is the key and a vector that stores 
the words along with the signature as value. Therefore, to check the anagrams of a word, we 
look into the map with its signature (key) and get the vector (value) of words which are the 
anagrams. The computing time for the program is constant computing time O (1) because each 
time the program runs; it takes less than 0 second to populate the anagram words. The solution 
only has the set of instruction to search the anagram words which are independent to the input 
size.
Some known solutions
1)	“At the beginning of the program, load the dictionary into a hash_map where the key is the word in its alphabetized form and the value is a set of all words that map to the same key. A word is converted to its alphabetized form by sorting all the letters in the word alphabetically. The hash_map will look like:”

KEY                                      Value
            cdeorrs                                 Records                     
gilrs                                      Girls
           eiiopstv                         Positive

We have two table because when you run  twice the project it give you low and high numbers.
      Size	Solution 1	Solution 2
 5 words	77600	76579
10 words	156439	153440
15 words	230160	230331
20 words	57	129867
25 words	38020	383109


      Size	Solution 1	Solution 2
 5 words	77600	10
10 words	156439	17
15 words	230160	34
20 words	57	129867
25 words	38020	72

