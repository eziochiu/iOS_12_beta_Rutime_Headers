/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCCarrierBundleHelper : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate> {
    CTBundle * _bundle;
    CoreTelephonyClient * _ctClient;
    CTXPCServiceSubscriptionContext * _currentDataContext;
    NSMutableSet * _delegates;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)helper;

- (void).cxx_destruct;
- (void)_processCarrierBundleChange:(id)arg1;
- (void)addDelegate:(id)arg1;
- (bool)boolValueFromPushBundleForKey:(id)arg1 error:(id*)arg2;
- (id)copyValueForKey:(id)arg1 error:(id*)arg2;
- (id)copyValueFromPushBundleForKey:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)operatorBundleChange:(id)arg1;
- (void)preferredDataSimChanged:(id)arg1;
- (void)removeDelegate:(id)arg1;

@end
