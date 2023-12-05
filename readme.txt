My first hash function was the sum of all the ASCII values for every letter of the string mod by the mapSize. I implemented this one because it was a basic hash function that allowed for strings to be stored based on their sum, since none of the words in the stories are extremely long, this would hopefully be time efficient. I expected it to perform well, since there shouldn't be too many collisions occurring from this. However, there were some words that were small which lead to them having a lot of collisions, and since words generally would have the same hash depending on how many letters they have, it caused linear probing to be very inefficient to work with this hashing method.

My second hash function summed the ASCII value with the hash multiplied by a prime number (11) which was then modded by the mapSize. I implemented this one because it would spread out the numbers more compared to just summing all the ASCII values. However, this still wouldn't be time efficient because it has to run through the entire word. It did end up having less collisions than the first hash function though. I wasn't surprised this was better, just because with the first function it would have them not spread out as much, while this one would cause a larger spread.

My first collision function was linear probing, adding i to the value of the hash function where i is the number of collisions. I implemented this because I was hoping the values would be spread out more from the hash funcitons. However, this caused a lot of problems. It had a lot of collisions leading it to not be time efficient and therefore not that effective. I expected it to be quicker, but I didn't expect it to be a lot quicker than it actually was. The major problem with this was it created a lot of clustering, which lead to even more collisions.

My second collision function was quadratic probing, adding i to the value of the hash function where i is the number of collisions squared. I implemented this because it is typically better for clustering than linear probing, which it did. It had drastically less collisions than linear probing, proving to be more time efficient. This was more effective because less keys had the same index in the array. It didn't surprise me because I assumed linear probing would have more clustering leading to more collisions, while quadratic probing would have less clustering leading to less collisions.

Hash 1 Collision 1:

NumKeys: 2265
NumCollisions: 242050
106 collision per Key
"But presently I knew to be told you ha'
 got." I should think himself up, and I the hands in his eyes,"
""Now lookee here!" said Joe,"

Hash 1 Collision 2:

NumKeys: 2265
NumCollisions: 9896
4.4 collisions per key
"I looked in a moment to give Pirrip as he didn't bring 'em both to have felt a meat bone with his bite"
"At this bleak place overgrown with his eyes,"

Hash 2 Collision 1:

NumKeys: 2265
NumCollisions: 91073
40 Collisions per key
"But now and tear him with their red lines intermixed."
"He did not intended for I was a white cravat on, who limped,"

Hash 2 Collision 2:

Num Keys: 2265
NumCollisions: 7652
3.37 collisions per key
"He was going away without being fellow-sufferers, and butter was bent over her cup."
"There was Pip. "Hold your opinion, boy,""


