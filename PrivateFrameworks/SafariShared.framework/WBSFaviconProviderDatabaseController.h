/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFaviconProviderDatabaseController : WBSSQLiteStore

- (int)_createFreshDatabaseSchema;
- (int)_currentSchemaVersion;
- (void)_deleteAllPageAndIconEntries;
- (void)_deleteIconWithUUIDFromIconInfo:(id)arg1;
- (void)_deleteIconsWithUUIDsFromIconInfo:(id)arg1;
- (void)_deletePageURL:(id)arg1;
- (void)_deletePageURLs:(id)arg1;
- (void)_deletePageURLsWithUUIDFromPageInfo:(id)arg1;
- (id)_fetchAllPageURLStrings;
- (id)_fetchIconInfoForIconURLString:(id)arg1;
- (id)_fetchIconInfoForIconUUID:(id)arg1;
- (id)_fetchIconUUIDForPageURLString:(id)arg1;
- (id)_fetchIconUUIDsForPageURLStrings:(id)arg1;
- (id)_fetchPageURLStringsWithPredicate:(id)arg1;
- (id)_findOrphansFromIconUUIDs:(id)arg1;
- (void)_firstIconUUIDForPageURLStrings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_generateStatementsForQuery:(id)arg1 arguments:(id)arg2 statementCallback:(id /* block */)arg3;
- (bool)_hasPageURLsForIconUUID:(id)arg1;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (id)_setIconUUID:(id)arg1 forIconURLString:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 hasGeneratedResolutions:(bool)arg4;
- (void)_setPageURL:(id)arg1 toIconUUID:(id)arg2;
- (id)_setTimestampToNowForIconUUID:(id)arg1;
- (void)fetchAllKnownPageURLStringsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchPageURLStringsWithPrefixesIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)firstIconInfoMatchingIconURLStringIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)firstIconInfoMatchingPageURLStringIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)firstIconUUIDMatchingPageURLStringIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)iconInfoForIconURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)iconInfoForPageURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)linkAndUpdateTimestampForIconWithPageURLString:(id)arg1 iconURLString:(id)arg2 iconSize:(struct CGSize { double x1; double x2; })arg3 iconHasGeneratedResolutions:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)linkPageURLString:(id)arg1 toExistingIconURLString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeAllDataForIconUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllPageURLStringsWithCompletionHandler:(id /* block */)arg1;
- (void)removePageURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removePageURLStrings:(id)arg1 completionHandler:(id /* block */)arg2;

@end
