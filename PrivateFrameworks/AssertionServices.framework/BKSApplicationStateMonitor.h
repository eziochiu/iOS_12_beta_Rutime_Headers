/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSApplicationStateMonitor : NSObject {
    NSObject<OS_xpc_object> * _connection;
    bool  _denied;
    bool  _elevatedPriority;
    id /* block */  _handler;
    NSArray * _interestedAssertionReasons;
    NSArray * _interestedBundleIDs;
    unsigned int  _interestedStates;
    BSSignal * _invalidationSignal;
    NSObject<OS_dispatch_queue> * _messageHandlingQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _serverEndpoint;
}

@property (nonatomic, readonly) bool elevatedPriority;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSArray *interestedBundleIDs;
@property (nonatomic) unsigned int interestedStates;

- (id)_connection;
- (void)_setEndpoint:(id)arg1;
- (id)applicationInfoForApplication:(id)arg1;
- (void)applicationInfoForApplication:(id)arg1 completion:(id /* block */)arg2;
- (id)applicationInfoForPID:(int)arg1;
- (void)applicationInfoForPID:(int)arg1 completion:(id /* block */)arg2;
- (unsigned int)applicationStateForApplication:(id)arg1;
- (id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2;
- (void)dealloc;
- (id)dumpDescriptionForSubsystem:(id)arg1;
- (bool)elevatedPriority;
- (id /* block */)handler;
- (id)init;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2 elevatedPriority:(bool)arg3;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2 isUserInteractive:(bool)arg3;
- (id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned int)arg3 elevatedPriority:(bool)arg4;
- (id)interestedAssertionReasons;
- (id)interestedBundleIDs;
- (unsigned int)interestedStates;
- (void)invalidate;
- (bool)isApplicationBeingDebugged:(id)arg1;
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;
- (void)queue_connectionWasInvalidated;
- (void)queue_handleMessage:(id)arg1;
- (void)queue_invalidate;
- (void)queue_registerWithServer;
- (void)queue_reregister;
- (void)queue_setElevatedPriority:(bool)arg1;
- (void)queue_setHandler:(id /* block */)arg1;
- (void)queue_setInterestedAssertions:(id)arg1;
- (void)queue_setInterestedBundleIDs:(id)arg1;
- (void)queue_setInterestedStates:(unsigned int)arg1;
- (void)queue_updateInterestedStates;
- (void)queue_updateInterestedStates:(bool)arg1;
- (void)setElevatedPriority:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setInterestedAssertionReasons:(id)arg1;
- (void)setInterestedBundleIDs:(id)arg1;
- (void)setInterestedStates:(unsigned int)arg1;
- (void)updateInterestedAssertionReasons:(id)arg1;
- (void)updateInterestedBundleIDs:(id)arg1;
- (void)updateInterestedBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (void)updateInterestedStates:(unsigned int)arg1;

@end
