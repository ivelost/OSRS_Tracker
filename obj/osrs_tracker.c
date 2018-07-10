#include <stdio.h>
#include "osrs_db.h"

int main(int argc, char** argv){
	int ec = 0;
	if (db_check()) {
		init_database();
		init_struct();
	}
	return ec;
}
