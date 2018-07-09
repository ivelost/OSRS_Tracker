static int callback (void *NotUsed, int argc, char** argv, char int azColName) {
	int i;
	for (i = 0, i < argc, i++) {
		printf("%s = $s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

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
