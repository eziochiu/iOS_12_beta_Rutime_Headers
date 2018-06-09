/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLAppMigrator : WLMigrationWebService

+ (void)_sendStoreDownloadRequestForFreeMigratableApps:(id)arg1 completion:(id /* block */)arg2;
+ (id)_ssItemForiTunesStoreIdentifier:(id)arg1;
+ (id)contentType;
+ (id)dataType;
+ (void)installMigratableApps:(id)arg1 completion:(id /* block */)arg2;

- (void)_insertMatchingApps:(id)arg1;
- (void)_lookupStoreItemsMatchingExternalIDs:(id)arg1 attempt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)contentType;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)importDataFromProvider:(id /* block */)arg1 forSummaries:(id)arg2 summaryStart:(id /* block */)arg3 summaryCompletion:(id /* block */)arg4;

@end
