/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface _ReachabilityRequest : NSObject {
    unsigned int  _flags;
    NSString * _hostname;
    bool  _isReachable;
    NSLock * _lock;
    struct __CFDictionary { } * _observers;
    struct __SCNetworkReachability { } * _reachability;
    bool  _receivedAtLeastOneCallback;
}

@property (nonatomic, readonly) NSString *hostname;

- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)description;
- (bool)hasObservers;
- (id)hostname;
- (id)initWithHostname:(id)arg1;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (void)removeObserver:(id)arg1;

@end
