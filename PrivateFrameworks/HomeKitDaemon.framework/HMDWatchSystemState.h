/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchSystemState : HMFObject {
    bool  _companionReachable;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSHashTable * _watchSystemStateDelegates;
}

@property (getter=isCompanionReachable, nonatomic) bool companionReachable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) NSHashTable *watchSystemStateDelegates;

+ (id)sharedState;

- (void).cxx_destruct;
- (void)_callDidReceiveNewIncomingMessageForDelegate:(id)arg1;
- (void)_callDidUpdateReachabilityChangeForCompanion:(bool)arg1 forDelegate:(id)arg2;
- (id)init;
- (bool)isCompanionReachable;
- (void)newIncomingMessageFromClient;
- (id)propertyQueue;
- (void)registerDelegate:(id)arg1;
- (void)setCompanionReachable:(bool)arg1;
- (id)watchSystemStateDelegates;

@end
