/*
 * csc452fuse.c
 *
 * Authors: Andrew Lane, Peter Mahon
 * CSc 452, Spring 2019
 * Project 5, Directories
 */

 //TODO modify these macros
 #define MAX_DATA_IN_BLOCK  -1
 #define MAX_DIRS_IN_ROOT   -1
 #define MAX_EXTENSION      -1
 #define MAX_FILENAME       -1

 /* Provided code per the spec ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

//root directory --------------
 struct csc452_root_directory {
       int nDirectories;   //How many subdirectories are in the root
													 //Needs to be less than MAX_DIRS_IN_ROOT
       struct csc452_directory {
              char dname[MAX_FILENAME + 1];    //directory name (plus space for nul)
              long nStartBlock;          //where the directory block is on disk
       } directories[MAX_DIRS_IN_ROOT]; //There is an array of these
};

//subdirectories --------------
struct csc452_directory_entry {
       int nFiles;                       //How many files are in this directory.
                                         //Needs to be less than MAX_FILES_IN_DIR
       struct csc452_file_directory
       {
              char fname[MAX_FILENAME + 1];    //filename (plus space for nul)
              char fext[MAX_EXTENSION + 1];    //extension (plus space for nul)
              size_t fsize;                     //file size
              long nStartBlock;                //where the first block is on disk
       } files[MAX_FILES_IN_DIR];              //There is an array of these
};

//files ------------------
struct csc452_disk_block {
       //All the space in the block can be used for actual data
       //storage.
       char data[MAX_DATA_IN_BLOCK];
};

 /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


int main(void){

    return 0;
}
