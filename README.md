# vigenere_cipher
vigenere cipher. sem 2.


Objectives: The aim of the program is to -
1. Understand the working of the Vigenère Cipher
2. Encrypt user entered plain text using a key, which is also entered by the user
3. Decrypt encrypted text using the user entered key
With the help of multiple files, run using a make file.

Description in points:
 A polyalphabetic cipher is any cipher based on substitution,using multiple substitution alphabets. The Vigenère
cipher is probably the best example of a polyalphabetic cipher.
 The table consists of the alphabets written out 26 times in different rows,each alphabet shifted cyclically to the
left compared to the previous alphabet, corresponding to the 26 possible Caesar Ciphers.

A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
__|____________________________________________________
A | A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
B | B C D E F G H I J K L M N O P Q R S T U V W X Y Z A
C | C D E F G H I J K L M N O P Q R S T U V W X Y Z A B
D | D E F G H I J K L M N O P Q R S T U V W X Y Z A B C
E | E F G H I J K L M N O P Q R S T U V W X Y Z A B C D
F | F G H I J K L M N O P Q R S T U V W X Y Z A B C D E
G | G H I J K L M N O P Q R S T U V W X Y Z A B C D E F
H | H I J K L M N O P Q R S T U V W X Y Z A B C D E F G
I | I J K L M N O P Q R S T U V W X Y Z A B C D E F G H
J | J K L M N O P Q R S T U V W X Y Z A B C D E F G H I
K | K L M N O P Q R S T U V W X Y Z A B C D E F G H I J
L | L M N O P Q R S T U V W X Y Z A B C D E F G H I J K
M | M N O P Q R S T U V W X Y Z A B C D E F G H I J K L
N | N O P Q R S T U V W X Y Z A B C D E F G H I J K L M
O | O P Q R S T U V W X Y Z A B C D E F G H I J K L M N
P | P Q R S T U V W X Y Z A B C D E F G H I J K L M N O
Q | Q R S T U V W X Y Z A B C D E F G H I J K L M N O P
R | R S T U V W X Y Z A B C D E F G H I J K L M N O P Q
S | S T U V W X Y Z A B C D E F G H I J K L M N O P Q R
T | T U V W X Y Z A B C D E F G H I J K L M N O P Q R S
U | U V W X Y Z A B C D E F G H I J K L M N O P Q R S T
V | V W X Y Z A B C D E F G H I J K L M N O P Q R S T U
W | W X Y Z A B C D E F G H I J K L M N O P Q R S T U V
X | X Y Z A B C D E F G H I J K L M N O P Q R S T U V W
Y | Y Z A B C D E F G H I J K L M N O P Q R S T U V W X
Z | Z A B C D E F G H I J K L M N O P Q R S T U V W X Y

 At different points in the encryption process, the cipher uses a different alphabet from one of the rows.
 The alphabet used at each point depends on a repeating keyword.
 For example the Input: Plaintext :-PROGRAMMING
Keyword :-HOPE
Output after encryption: Ciphertext :- WFDKYOBQPBV
 For generating the key, the given keyword is repeated in a circular manner until it matches the length of the
plain text.
 The keyword "HOPE" generates the key "HOPEHOPEHOP".
 ENCRYPTION:
The plain text is then encrypted using the process explained below:
The first letter of the plaintext P is paired with H, the first letter of the key.
The letter at row P and column H of the Vigenère square, W is the first letter of cipher text.
The rest of the plaintext is enciphered in a similar fashion.
 DECRYPTION:
The encrypted text is then decrypted using the process explained below:
The first letter of the cipher text W is paired with H, the first letter of the key.
The letter at row W and column H of the Vigenère square, P is the first letter of plain text.
The rest of the encrypted text is deciphered in a similar fashion.
 The program is menu driven and allows to user to perform any of the operations of their choice:
Help menu – explains what a vigenere cipher is
Encrypt – encrypts and displays user entered text
Decrypt – decrypts ciphertext
Exit – to exit the program