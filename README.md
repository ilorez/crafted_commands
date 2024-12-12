# crafted_commands

A collection of utility scripts written in C for automating tasks and improving productivity. These scripts must be compiled before use. Once compiled and added to your system's `PATH`, they can be executed directly from the terminal as commands.

## Features
- C-based scripts for system automation, deployment, and other useful functions.
- Easy to use by adding compiled scripts to your `PATH`.

## Usage
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/crafted_commands.git
   ```
2. Navigate to the script's directory and compile the `.c` files:
   ```bash
   gcc -o script_name script_name.c
   ```
3. Add the compiled script folder to your `PATH` or create symlinks:
   ```bash
   export PATH=$PATH:/path/to/scripts
   ```
4. Reload your shell to apply the changes to `PATH`:
   ```bash
   source ~/.bashrc
   ```
   or
   ```bash
    source ~/.shell_profile
   ```
5. Run the compiled script directly from the terminal:
   ```bash
   script_name
   ```

## Contributing
Feel free to submit issues and pull requests. Contributions are welcome!

