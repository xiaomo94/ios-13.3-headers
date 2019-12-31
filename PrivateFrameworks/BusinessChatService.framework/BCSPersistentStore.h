/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSPersistentStore : NSObject

- (struct sqlite3 { }*)_createDatabaseFileAtPath:(id)arg1;
- (long long)_databaseSchemaVersionForDatabase:(struct sqlite3 { }*)arg1;
- (bool)_generateTableWithDatabase:(struct sqlite3 { }*)arg1;
- (bool)_setDatabaseSchemaVersion:(long long)arg1 forDatabase:(struct sqlite3 { }*)arg2;
- (id)cachesPath;
- (void)closeDatabase:(struct sqlite3 { }*)arg1;
- (struct sqlite3 { }*)database;
- (id)databasePath;
- (bool)deleteDatabaseFile;
- (const char *)schema;
- (long long)schemaVersion;

@end
