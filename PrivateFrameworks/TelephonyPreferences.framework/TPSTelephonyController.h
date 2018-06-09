/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

@interface TPSTelephonyController : NSObject <CoreTelephonyClientDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    NSMapTable * _delegateToQueue;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    NSOrderedSet * _subscriptions;
    CoreTelephonyClient * _telephonyClient;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } delegateLock;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, retain) NSOrderedSet *subscriptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CoreTelephonyClient *telephonyClient;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })delegateLock;
- (id)delegateToQueue;
- (id)fetchSubscriptions;
- (id)init;
- (void)performAtomicAccessorBlock:(id /* block */)arg1;
- (void)performAtomicDelegateBlock:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;
- (id)serialDispatchQueue;
- (void)setAccessorLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setDelegateLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setSubscriptions:(id)arg1;
- (void)subscriptionInfoDidChange;
- (id)subscriptions;
- (id)telephonyClient;

@end
