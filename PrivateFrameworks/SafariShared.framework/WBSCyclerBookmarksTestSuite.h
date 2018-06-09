/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerTestSuite> {
    WBSCyclerTestSuiteBookmarkAuxiliary * _bookmarkAuxiliary;
    WBSCyclerBookmarkListRepresentation * _expectedTopLevelBookmarksFromPreviousIteration;
    unsigned long long  _iterationCount;
    WBSCyclerBookmarkOperationContext * _operationContext;
    NSArray * _operations;
    NSArray * _relativeProbabilitiesForOperations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)setValue:(id)arg1 forConfigurationKey:(id)arg2;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)canHandleRequest:(id)arg1;
- (void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (bool)isFinished;
- (void)runWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setUp;
- (void)tearDown;

@end