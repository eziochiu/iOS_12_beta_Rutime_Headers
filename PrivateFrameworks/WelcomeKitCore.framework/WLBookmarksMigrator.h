/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLBookmarksMigrator : WLMigrationWebService {
    WebBookmarkCollection * _collection;
}

+ (id)_bookmarkFolderAtTitlePath:(id)arg1 withinBookmarkFolder:(id)arg2;
+ (id)_bookmarkFolderAtTitlePath:(id)arg1 withinRootFolder:(id)arg2;
+ (id)_createBookmarkFolderWithTitle:(id)arg1 UUID:(id)arg2;
+ (id)_createRootBookmarkFolder;
+ (id)contentType;

- (void).cxx_destruct;
- (id)contentType;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)importDataFromProvider:(id /* block */)arg1 forSummaries:(id)arg2 summaryStart:(id /* block */)arg3 summaryCompletion:(id /* block */)arg4;
- (void)importDidEnd;
- (id)importWillBegin;

@end
