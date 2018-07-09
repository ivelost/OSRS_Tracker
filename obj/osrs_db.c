#include <stdio.h>
#include "osrs_db.h"

int init_database() {
	sqlite3* database;
	int rc;
	char* sql;

	rc = sqlite_open("osrs.db", &database);

	if (rc) {
		fprintf(stderr, "Unable to open the database: %s\n",
			sqlite3_errmsg(database));
		return 1;
	} else {
		fprintf(stdout, "Accessing the database...");
		return 0;
	}
}

int init_struct (sqlite3* database) {
	
}
