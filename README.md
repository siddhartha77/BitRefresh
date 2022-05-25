# BitRefresh
Refresh the screen in Classic Mac OS.

# Installation
The program is an FKEY. To install:
  1. Make a backup of your System file.
  2. Open your live System file with ResEdit and open the FKEY resource.
  3. Open BitRefresh.rsrc with ResEdit and open the FKEY resource.
  4. Copy and paste the FKEY resource ID 9 "BitRefresh" into the FKEY resource of your system file.
  5. Save the System file and quit ResEdit. No need to restart.

# Usage
Since this is an FKEY with ID number 9, it is invoked by pressing Command-Shift-9. You can use any number between 5 and 9 for the FKEY if you wish, just change its ID number in your System file.
