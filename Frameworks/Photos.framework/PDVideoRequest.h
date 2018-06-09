/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PDVideoRequest : PHMediaRequest {
    PHVideoRequestBehaviorSpec * _behaviorSpec;
    <PHVideoRequestDelegate> * _delegate;
    PHImageDisplaySpec * _displaySpec;
}

@property (nonatomic, readonly) PHVideoRequestBehaviorSpec *behaviorSpec;
@property (nonatomic) <PHVideoRequestDelegate> *delegate;
@property (nonatomic, readonly) PHImageDisplaySpec *displaySpec;

- (void).cxx_destruct;
- (void)_handleResultVideoURL:(id)arg1 info:(id)arg2 error:(id)arg3;
- (id)behaviorSpec;
- (id)delegate;
- (id)displaySpec;
- (void)handleAvailabilityChangeForResource:(id)arg1 locallyAvailable:(bool)arg2 info:(id)arg3 error:(id)arg4;
- (id)initWithRequestID:(int)arg1 contextID:(unsigned long long)arg2 managerID:(unsigned long long)arg3 asset:(id)arg4 displaySpec:(id)arg5 behaviorSepc:(id)arg6;
- (bool)isSynchronous;
- (void)setDelegate:(id)arg1;
- (void)startRequest;
- (void)videoURLBecameAvailable:(id)arg1 info:(id)arg2 error:(id)arg3;

@end
