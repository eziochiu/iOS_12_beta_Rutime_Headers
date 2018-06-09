/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemClientInternal : NSObject {
    NSMutableArray * _clientProperties;
    NSXPCConnection * _connection;
    id  _remote;
    BrightnessSystemClientExportedObj * exportedObj;
}

- (void)addKeyToClientProperties:(id)arg1;
- (void)addPropertiesForNotification:(id)arg1;
- (void)addPropertyForNotification:(id)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)registerNotificationBlock:(id /* block */)arg1 forProperties:(id)arg2;
- (void)removeKeyFromClientProperties:(id)arg1;
- (void)removePropertiesFromNotification:(id)arg1;
- (void)removePropertyFromNotification:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stopXpcService;

@end
