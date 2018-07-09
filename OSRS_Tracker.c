#include <stdio.h>
#include <sqlite3.h>

int main(int argc, char** argv){
	sqlite3* database;	
	char *errMsg = 0;
	int rc;

	rc = sqlite3_open("OSRS.db", &database);

	if (rc) {
		fprintf(stderr, "Unable to open the database: %s\n", 
				sqlite3_errmsg(database));
		return 1;
	} else {
		fprintf(stderr, "Accessing the database...\n");
	}
	sqlite3_close(database);
	
	return 0;
}
