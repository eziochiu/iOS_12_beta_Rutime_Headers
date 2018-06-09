/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareMetadataOperation : CKOperation {
    NSMutableDictionary * _errorsByURL;
    id /* block */  _fetchShareMetadataCompletionBlock;
    NSMutableSet * _packagesToDestroy;
    id /* block */  _perShareMetadataBlock;
    NSArray * _rootRecordDesiredKeys;
    NSArray * _shareURLs;
    bool  _shouldFetchRootRecord;
}

@property (nonatomic, retain) NSMutableDictionary *errorsByURL;
@property (nonatomic, copy) id /* block */ fetchShareMetadataCompletionBlock;
@property (nonatomic, retain) NSMutableSet *packagesToDestroy;
@property (nonatomic, copy) id /* block */ perShareMetadataBlock;
@property (nonatomic, copy) NSArray *rootRecordDesiredKeys;
@property (nonatomic, copy) NSArray *shareURLs;
@property (nonatomic) bool shouldFetchRootRecord;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (bool)claimPackagesInRecord:(id)arg1 error:(id*)arg2;
- (id)errorsByURL;
- (id /* block */)fetchShareMetadataCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithShareURLs:(id)arg1;
- (id)packagesToDestroy;
- (id /* block */)perShareMetadataBlock;
- (void)performCKOperation;
- (id)rootRecordDesiredKeys;
- (void)setErrorsByURL:(id)arg1;
- (void)setFetchShareMetadataCompletionBlock:(id /* block */)arg1;
- (void)setPackagesToDestroy:(id)arg1;
- (void)setPerShareMetadataBlock:(id /* block */)arg1;
- (void)setRootRecordDesiredKeys:(id)arg1;
- (void)setShareURLs:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (id)shareURLs;
- (bool)shouldFetchRootRecord;

@end
