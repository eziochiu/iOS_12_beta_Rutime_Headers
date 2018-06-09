/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPathEventObserver : NSObject {
    struct network_config_cellular_blocked_observer_s { } * _cellBlockedObserver;
    struct network_config_cellular_blocked_observer_s { } * _cellFailedObserver;
    id /* block */  _eventHandler;
    struct network_config_cellular_blocked_observer_s { } * _wifiBlockedObserver;
}

@property struct network_config_cellular_blocked_observer_s { }*cellBlockedObserver;
@property struct network_config_cellular_blocked_observer_s { }*cellFailedObserver;
@property (copy) id /* block */ eventHandler;
@property struct network_config_cellular_blocked_observer_s { }*wifiBlockedObserver;

- (void).cxx_destruct;
- (void)cancel;
- (struct network_config_cellular_blocked_observer_s { }*)cellBlockedObserver;
- (struct network_config_cellular_blocked_observer_s { }*)cellFailedObserver;
- (void)dealloc;
- (id /* block */)eventHandler;
- (void)handleEvent:(long long)arg1 forPID:(id)arg2 UUID:(id)arg3;
- (id)init;
- (id)initWithQueue:(id)arg1 eventHandler:(id /* block */)arg2;
- (void)setCellBlockedObserver:(struct network_config_cellular_blocked_observer_s { }*)arg1;
- (void)setCellFailedObserver:(struct network_config_cellular_blocked_observer_s { }*)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setWifiBlockedObserver:(struct network_config_cellular_blocked_observer_s { }*)arg1;
- (id)stringForEvent:(long long)arg1;
- (struct network_config_cellular_blocked_observer_s { }*)wifiBlockedObserver;

@end
