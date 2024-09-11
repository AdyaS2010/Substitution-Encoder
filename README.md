# Substitution Cipher Encoder

## Description
This project is a substitution cipher encoder written in C. It allows users to encode messages by substituting each letter in the plaintext with a corresponding letter in the key. Note that this implementation only supports encoding, not decoding.

## Features
- Encode messages using a substitution cipher with a custom key
- Supports both uppercase and lowercase letters
- Ignores non-alphabetic characters

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Substitution-Encoder.git
   ```
2. Navigate to the project directory:
   ```bash
   cd substitution
   ```
3. Compile the code:
   ```bash
   make substitution
   ```

## Usage
1. Run the application:
   ```bash
   ./substitution key
   ```
   Replace `key` with a 26-character string representing the substitution key.
2. Enter the plaintext message when prompted.
3. The encoded message will be displayed as the output.

## Example
```bash
$ ./substitution QWERTYUIOPLKJHGFDSAZXCVBNM
plaintext: hello
ciphertext: itssg
```

![image](https://github.com/user-attachments/assets/582c560d-48e5-4ff4-959c-416ce254f929)
*Key is QWERTYUIOPASDFGHJKLZXCVBNM*

## Contributing
1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. Make your changes and commit them:
   ```bash
   git commit -m 'Add some feature'
   ```
4. Push to the branch:
   ```bash
   git push origin feature/your-feature-name
   ```
5. Open a pull request.

## License
This project is not licensed under any License currently.
