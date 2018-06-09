/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKUIForegroundActiveArbiter : NSObject <PKForegroundActiveArbiter> {
    bool  _active;
    unsigned long long  _backgroundTaskIdentifier;
    NSHashTable * _deactivationObservers;
    unsigned int  _deactivationReasons;
    bool  _enteringForeground;
    bool  _enteringForegroundExpired;
    NSObject<OS_dispatch_source> * _enteringForegroundTimeout;
    bool  _foreground;
    struct { 
        bool foreground; 
        bool foregroundActive; 
    }  _foregroundActiveState;
    NSLock * _lock;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_beginEnteringForeground;
- (void)_didRemoveDeactivationReasonNotification:(id)arg1;
- (id)_init;
- (void)_updateForegroundActiveWithEnteringForegroundPolicy:(long long)arg1;
- (void)_willAddDeactivationReasonNotification:(id)arg1;
- (void)dealloc;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (id)init;
- (unsigned int)registerDeactivationObserver:(id)arg1;
- (struct { bool x1; bool x2; })registerObserver:(id)arg1;
- (void)unregisterDeactivationObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)willEnterForeground;
- (void)willResignActive;
- (void)willTerminate;

@end
