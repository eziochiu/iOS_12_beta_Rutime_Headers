/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCOperationExternalSignal : NSObject <RCOperationRetrySignal> {
    NSObject<OS_dispatch_group> * _group;
    bool  _result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)onQueue:(id)arg1 signal:(id /* block */)arg2;
- (void)triggerWithRetry:(bool)arg1;

@end
