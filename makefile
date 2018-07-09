osrs_tracker: osrs_db.h osrs_db.c osrs_tracker.c
	gcc osrs_tracker.c -Wall -pedantic -l sqlite3 -o osrs_tracker
