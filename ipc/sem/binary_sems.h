/* 
   Header file for binary_sems.c.
*/
#ifndef BINARY_SEMS_H           /* Prevent accidental double inclusion */
#define BINARY_SEMS_H


/* Variables controlling operation of functions below */

extern bool bsUseSemUndo;            /* Use SEM_UNDO during semop()? */
extern bool bsRetryOnEintr;          
					/* Retry if semop() interrupted by
                                           signal handler? */

int initSemAvailable(int semId, int semNum);

int initSemInUse(int semId, int semNum);

int reserveSem(int semId, int semNum);

int releaseSem(int semId, int semNum);

#endif
