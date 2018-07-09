#include <stdio.h>
#include "osrs_db.h"

int main(int argc, char** argv){	
	int err = init_database();
	return err;
}
