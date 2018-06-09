/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAdjustmentDataRequest : PHMediaRequest {
    PHAdjustmentDataRequestBehaviorSpec * _behaviorSpec;
    <PHAdjustmentDataRequestDelegate> * _delegate;
    PLCPLDownloadContext * _legacyDownloadContext;
}

@property (nonatomic, readonly) PHAdjustmentDataRequestBehaviorSpec *behaviorSpec;
@property (nonatomic) <PHAdjustmentDataRequestDelegate> *delegate;

- (void).cxx_destruct;
- (void)_cplDownloadStatusNotification:(id)arg1;
- (id)behaviorSpec;
- (void)cancel;
- (id)delegate;
- (id)initWithRequestID:(int)arg1 contextID:(unsigned long long)arg2 managerID:(unsigned long long)arg3 asset:(id)arg4 behaviorSpec:(id)arg5;
- (bool)isSynchronous;
- (void)setDelegate:(id)arg1;
- (void)startRequest;

@end
