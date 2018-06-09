/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCWifiMonitor : NSObject {
    NSHashTable * _observers;
    long long  _state;
}

@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) long long state;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_networkStateStringForNetworkState:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)wifiStateUpdatedWithOldState:(long long)arg1 andNewState:(long long)arg2;

@end
