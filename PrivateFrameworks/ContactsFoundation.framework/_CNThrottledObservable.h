/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNThrottledObservable : CNObservable {
    <CNCancelable> * _delayToken;
    double  _interval;
    bool  _isCoalescing;
    id  _mostRecentResult;
    <CNObservable> * _observable;
    <CNScheduler> * _observerScheduler;
    unsigned long long  _options;
    <CNScheduler> * _resourceLock;
}

@property (retain) <CNCancelable> *delayToken;
@property (readonly) double interval;
@property bool isCoalescing;
@property (retain) id mostRecentResult;
@property (readonly) CNObservable *observable;
@property (readonly) <CNScheduler> *observerScheduler;
@property (readonly) unsigned long long options;
@property (readonly) <CNScheduler> *resourceLock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delayToken;
- (id)initWithInterval:(double)arg1 options:(unsigned long long)arg2 observable:(id)arg3 schedulerProvider:(id)arg4;
- (double)interval;
- (bool)isCoalescing;
- (id)mostRecentResult;
- (id)observable;
- (id)observerScheduler;
- (void)observerScheduler_sendResultToObserver:(id)arg1;
- (unsigned long long)options;
- (id)resourceLock;
- (void)setDelayToken:(id)arg1;
- (void)setIsCoalescing:(bool)arg1;
- (void)setMostRecentResult:(id)arg1;
- (id)subscribe:(id)arg1;

@end
