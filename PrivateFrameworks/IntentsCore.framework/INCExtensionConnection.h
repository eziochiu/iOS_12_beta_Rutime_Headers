/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExtensionConnection : NSObject {
    INCAppProxy * _appProxy;
    NSArray * _extensionInputItems;
    id /* block */  _interruptionHandler;
    INCDisplayLayoutMonitorObserver * _layoutObserver;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _remoteExtensionProxyProvider;
    double  _requestTimeoutInterval;
    INWatchdogTimer * _requestTimer;
    bool  _shouldObserveLayout;
    long long  _supportedExtensionTypes;
    id /* block */  _timeoutHandler;
    INCExtensionTransaction * _transaction;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (setter=_setShouldObserveLayout:, nonatomic) bool _shouldObserveLayout;
@property (nonatomic, readonly) INCExtensionTransaction *_transaction;
@property (nonatomic, readonly) INCAppProxy *appProxy;
@property (nonatomic, retain) NSArray *extensionInputItems;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ remoteExtensionProxyProvider;
@property (nonatomic) double requestTimeoutInterval;
@property (nonatomic) bool requiresTCC;
@property (nonatomic, readonly) long long supportedExtensionTypes;
@property (nonatomic, copy) id /* block */ timeoutHandler;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_cancelRequestTimer;
- (id)_queue;
- (void)_setShouldObserveLayout:(bool)arg1;
- (bool)_shouldObserveLayout;
- (void)_startRequestTimerWithExtensionProxy:(id)arg1;
- (id)_transaction;
- (id)appProxy;
- (id)extensionInputItems;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 remoteProxyProvider:(id /* block */)arg2;
- (id)initWithIntent:(id)arg1 supportedExtensionTypes:(long long)arg2 remoteProxyProvider:(id /* block */)arg3;
- (id)intent;
- (id /* block */)interruptionHandler;
- (id /* block */)remoteExtensionProxyProvider;
- (double)requestTimeoutInterval;
- (bool)requiresTCC;
- (void)reset;
- (void)resumeWithCompletionHandler:(id /* block */)arg1;
- (void)setExtensionInputItems:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setRemoteExtensionProxyProvider:(id /* block */)arg1;
- (void)setRequestTimeoutInterval:(double)arg1;
- (void)setRequiresTCC:(bool)arg1;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (long long)supportedExtensionTypes;
- (id /* block */)timeoutHandler;

@end
