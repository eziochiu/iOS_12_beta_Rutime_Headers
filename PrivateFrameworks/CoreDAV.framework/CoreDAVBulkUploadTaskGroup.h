/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    NSURL * _folderURL;
    NSMutableDictionary * _hrefToETag;
    NSMutableDictionary * _hrefToErrorItems;
    NSMutableDictionary * _hrefToStatus;
    NSString * _lastKnownCTag;
    unsigned long long  _multiPutBatchMaxNumResources;
    unsigned long long  _multiPutBatchMaxSize;
    NSMutableDictionary * _remainingHREFsToModDeleteActions;
    NSMutableDictionary * _remainingUUIDsToAddActions;
    NSMutableDictionary * _uuidToErrorItems;
    NSMutableDictionary * _uuidToHREF;
    NSMutableDictionary * _uuidToStatus;
    bool  _validCTag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *folderURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *hrefToETag;
@property (nonatomic, readonly) NSDictionary *hrefToErrorItems;
@property (nonatomic, readonly) NSDictionary *hrefToStatus;
@property (nonatomic) unsigned long long multiPutBatchMaxNumResources;
@property (nonatomic) unsigned long long multiPutBatchMaxSize;
@property (nonatomic, retain) NSString *nextCTag;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *uuidToErrorItems;
@property (nonatomic, readonly) NSDictionary *uuidToHREF;
@property (nonatomic, readonly) NSDictionary *uuidToStatus;
@property (nonatomic, readonly) bool validCTag;

- (void).cxx_destruct;
- (void)_sendNextBatch;
- (id)description;
- (id)folderURL;
- (id)hrefToETag;
- (id)hrefToErrorItems;
- (id)hrefToStatus;
- (id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (unsigned long long)multiPutBatchMaxNumResources;
- (unsigned long long)multiPutBatchMaxSize;
- (Class)multiPutTaskClass;
- (id)nextCTag;
- (void)setMultiPutBatchMaxNumResources:(unsigned long long)arg1;
- (void)setMultiPutBatchMaxSize:(unsigned long long)arg1;
- (void)setNextCTag:(id)arg1;
- (void)startTaskGroup;
- (void)syncAway;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)uuidToErrorItems;
- (id)uuidToHREF;
- (id)uuidToStatus;
- (bool)validCTag;

@end
