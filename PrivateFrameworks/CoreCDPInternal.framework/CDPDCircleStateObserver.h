/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener> {
    int  _circleChangeToken;
    NSMutableArray * _circleObservers;
    <CDPDCircleProxy> * _circleProxy;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _isObserving;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (const char *)_notificationName;
- (void)dealloc;
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;
- (id)initWithProxy:(id)arg1;
- (void)observeChangeToState:(int)arg1 handler:(id /* block */)arg2;
- (void)observeCircleStateWithChangeHandler:(id /* block */)arg1;
- (void)registerListener:(id)arg1;
- (void)stopObservingCircleStatusChange;

@end
