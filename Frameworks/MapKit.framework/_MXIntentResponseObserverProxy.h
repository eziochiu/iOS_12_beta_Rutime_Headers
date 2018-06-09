/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXIntentResponseObserverProxy : NSObject <INIntentResponseObserver> {
    <_MXIntentResponseObserver> * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <_MXIntentResponseObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReceiveError:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (void)intentResponseDidUpdate:(id)arg1;
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void)stopObserving;

@end
