# Challenges

### 1. Discover password (Easy)
- Use static analysis (disassembly tools such as Hex-Rays IDA) to find the password string.

### 2. Bypass password (Medium)
- Use dynamic analysis to completely bypass the need for a password.
<details>
  <summary>Hint</summary>
- Disable the opcodes responsible for jumping to the "Incorrect Solution!" message.
</details>

### 3. Bypass password with an original program (Hard)
- After discovering a solution to [2], implement it in a dedicated program (or modification) which automatically bypasses the password.
<details>
  <summary>Hint (Mod/Patch)</summary>
- For a modification solution, try baking the changes made in [2] directly into the program.
</details>
<details>
  <summary>Hint (External Program)</summary>
- For an external solution, try automating the changes made in [2] directly into the program.
</details>

### 4. Bypass obfuscated password (Hard)
- Use dynamic analysis to completely bypass the need for a password.
- The instructions are a bit more complicated now.

### 5. Discover obfuscated password (Hard)
- Discover the password by either forcing the program to reveal it, or by de-obfuscating the key found in disassembly.
