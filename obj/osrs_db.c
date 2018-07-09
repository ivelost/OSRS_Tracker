#include <stdio.h>
#include <sqlite3.h>
#include "osrs_db.h"

int init_database() {
	sqlite3* database;
	int rc;

	rc = sqlite3_open("osrs.db", &database);

	if (rc) {
		fprintf(stderr, "Unable to open the database: %s\n",
			sqlite3_errmsg(database));
		return 1;
	} else {
		fprintf(stdout, "Accessing the database... \n");
		return 0;
	}
}

int init_struct (sqlite3* database) {
	return 0;	
}
