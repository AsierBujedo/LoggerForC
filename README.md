# LoggerForC
How to use:

Enum INFO, WARN, ERRORL, END} (LEVEL):
Used to print into the specified file different kind of tags.
Example: [INFO]   DATABASE INITALIZED

void openLogger(char name[]);
Must be called before using the other logger methods.

int closeLogger();
Used to close the final file adding a final sentence into it.
Output: [END] CODE EOI - END OF FILE

void logFile(LEVEL l, char desc[]);
Must be always placed between openLogger(char name[]) and closeLogger().
Example: LogFile(INFO, "Hello world from C")
Output: [INFO]  Hello world from C
