/*
 * Filename: caesarCipher.c
 * Author: Junru Ren
 * Description: C program for simulating a Caesar Cipher, both encryption and 
 *              decryption.
 * Date: Jan 21 2017
 */

/* Include Files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Standard Strings */
#define STR_ENCRYPT "Encrypting %s into a new file %s with shift amount of %d\n"
#define STR_DECRYPT "Decrypting %s into a new file %s with shift amount of %d\n"
#define STR_ERR_IFILE "Error reading the file %s\n"
#define STR_ERR_OFILE "Error writing to file %s\n"
#define STR_USAGE "usage: %s [Input File Name] [Mode] [Shift Amount]\n"\
  "\t[Input File Name]: Any text file (name of path) that actually exists\n"\
  "\t[Mode]:\n"\
  "\t\te: encrypt the input file with given shift amount\n"\
  "\t\td: encrypt the input file with given shift amount\n"\
  "\t[Shift Amount]: an integer that represents the shift amount on the Caesar"\
  " Cipher (Range: 0-25) If no number is read, 0 is set by default\n\n"
#define STR_ENCRYPTED_FILE_POSTFIX "_encrtyped"
#define STR_DECRYPTED_FILE_POSTFIX "_decrtyped"

/* Enum Definitions */
enum programMode{ MODE_ENCRYPT, MODE_DECRYPT };

/* Struct Definition */
struct argInfo
{
  const char *iFileName;
  enum programMode programMode;
  long sftAmt;
};

/* Global Variables */
FILE *iFile;
FILE *oFile;

/* Forward Declarations of All Functions */
int processArgs( int argc, char * const argv[], struct argInfo * argInfo );
void usage( const char * progName );
char encrypt( char c, int sftAmt );
char decrypt( char c, int sftAmt );

int main( int argc, char *argv[] 
{
  /* Initialize needed strcut */
  struct argInfo aI;

  // Process the command line arguments. Terminate if args are invalid
  if ( processArgs(argc, argv, &aI) != 0 )
  {
    usage( argv[0] );
    return EXIT_FAILURE;
  }
  // Generate output file name according to the Mode
  char oFilename[BUFSIZ];
  strcpy( oFilename, aI.iFileName );
  if ( aI.programMode == MODE_ENCRYPT )
  {
    strcat( oFilename, STR_ENCRYPTED_FILE_POSTFIX );
  }
  else
  {
    strcat( oFilename, _decrtyped );
  }

  // Open the input and output files
  iFile = fopen( aI.iFileName, "r" ); // In read mode
  oFile = fopen( oFilename, "w" );    // In write mode

  //Check if the files were successfully opened
  if ( iFile == NULL )
  {
    fprintf( stderr, STR_ERR_IFILE, aI.iFileName );
  }
  if ( oFile == NULL )
  {
    fprintf( stderr, STR_ERR_OFILE, oFileName );
  }

  // Close files
  fclose( iFile );
  fclose( oFile );

  return EXIT_SUCCESS;
}

/*
 * Process the passed in command line argument.
 * Return: 0 if all args are valid; -1 otherwise
 */
int processArgs( int argc, char * const argv[], struct argInfo * argInfo )
{
  // Check the number of args
  if ( argc != 4 )
  {
    return -1;
  }
  // Save the input file name into argInfo
  argInfo->iFileName = argv[1];
  // Check flag and set the mode accordingly
  char *flag = argv[2];
  if ( (unsigned)strlen(flag) != 1 )
  {
    return -1; // Invalid flag length
  }
  switch (flag[0])
  {
    case 'e':
      argInfo->programMode = MODE_ENCRYPT;
      break;
    case 'd':
      argInfo->programMode = MODE_DECRYPT;
      break;
    default:
      return -1; // Invalid flag found
  }
  char *endptr;
  // Convert the forth argument into a long integer
  long sftAmt = strtol(argv[3], &endptr, 10);
  // Check the range of the given sftAmt
  if ( sftAmt < 0 || sftAmt > 25)
  {
    return -1;
  }
  // Save the valid sftAmt into argInfo
  argInfo->sftAmt = sftAmt;
  // Arguments processed successfully!
  return 0;
}

/*
 * Print out the usage of this program when bad command line arguments are passed in
 */
void usage( const char * progName )
{
  fprintf( stderr, STR_USAGE, progName );
}