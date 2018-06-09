/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLBacklight : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    long long  _backlightStatus;
    bool  _isObservingBacklight;
    NSHashTable * _observers;
}

@property (readonly) long long backlightStatus;

+ (id)sharedBacklight;

- (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_notifyObservers:(id)arg1 ofUpdatedBacklightStatus:(long long)arg2;
- (void)_performBlockOnAccessQueue:(id /* block */)arg1;
- (void)_setBacklightStatus:(long long)arg1;
- (void)_setObservingBacklight:(bool)arg1;
- (void)addObserver:(id)arg1;
- (long long)backlightStatus;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
