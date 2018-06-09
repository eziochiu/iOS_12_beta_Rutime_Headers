/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTriggerConfirmationTimer : HMFTimer {
    NSUUID * _executionSessionID;
}

@property (nonatomic, readonly) NSUUID *executionSessionID;

- (void).cxx_destruct;
- (id)description;
- (id)executionSessionID;
- (id)initWithExecutionSessionID:(id)arg1 timeoutInterval:(double)arg2;

@end
