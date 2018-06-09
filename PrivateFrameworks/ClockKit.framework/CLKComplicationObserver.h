/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationObserver : NSObject {
    NSHashTable * _observers;
    NSHashTable * _wakeSessionObservers;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addWakeSessionObserver:(id)arg1;
- (void)complicationListDidChange;
- (id)init;
- (void)reloadOrExtendForBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeWakeSessionObserver:(id)arg1;
- (void)wakeSessionWillBeginForBundleID:(id)arg1;
- (void)wakeSessionWillEndForBundleID:(id)arg1;

@end
