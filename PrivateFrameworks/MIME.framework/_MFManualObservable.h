/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFManualObservable : MFObservable <MFObserver> {
    NSLock * _lock;
    NSMutableArray * _observers;
    MFPromise * _promise;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_observers, readonly) NSArray *observers;
@property (readonly) Class superclass;

- (id)_addObserver:(id)arg1;
- (id)_observers;
- (void)_removeObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)subscribe:(id)arg1;

@end