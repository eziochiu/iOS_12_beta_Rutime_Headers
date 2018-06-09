/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSGroupContextNotifyingObserver : NSObject <IDSGroupContextObserverDaemonProtocol> {
    NSMutableSet * _delegates;
}

@property (nonatomic, retain) NSMutableSet *delegates;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)delegates;
- (void)didCacheGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)didCreateGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(id /* block */)arg1;
- (void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)setDelegates:(id)arg1;

@end
