/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCOperationDelayedRetrySignal : NSObject <RCOperationRetrySignal> {
    double  _delay;
    unsigned long long  _signalTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;
- (id)initWithDelay:(double)arg1;
- (void)onQueue:(id)arg1 signal:(id /* block */)arg2;

@end
