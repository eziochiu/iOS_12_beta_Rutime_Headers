/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPublishAssetsOperation : CKDatabaseOperation {
    unsigned long long  _URLOptions;
    id /* block */  _assetPublishedBlock;
    NSDictionary * _fileNamesByAssetFieldNames;
    NSMutableDictionary * _perItemErrorsByRecordID;
    id /* block */  _publishAssetCompletionBlock;
    NSArray * _recordIDs;
    unsigned long long  _requestedTTL;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, copy) id /* block */ assetPublishedBlock;
@property (nonatomic, retain) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic, retain) NSMutableDictionary *perItemErrorsByRecordID;
@property (nonatomic, copy) id /* block */ publishAssetCompletionBlock;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic) unsigned long long requestedTTL;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (unsigned long long)URLOptions;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id /* block */)assetPublishedBlock;
- (id)fileNamesByAssetFieldNames;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithRecordIDs:(id)arg1;
- (id)perItemErrorsByRecordID;
- (void)performCKOperation;
- (id /* block */)publishAssetCompletionBlock;
- (id)recordIDs;
- (unsigned long long)requestedTTL;
- (void)setAssetPublishedBlock:(id /* block */)arg1;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (void)setPerItemErrorsByRecordID:(id)arg1;
- (void)setPublishAssetCompletionBlock:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setURLOptions:(unsigned long long)arg1;

@end
