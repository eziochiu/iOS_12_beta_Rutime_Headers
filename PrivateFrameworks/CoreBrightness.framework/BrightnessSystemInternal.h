/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemInternal : NSObject <NSXPCListenerDelegate> {
    float  _cachedSlider;
    id /* block */  _callback;
    NSMutableDictionary * _clients;
    NSMutableDictionary * _clientsProps;
    NSXPCListener * _listener;
    NSMutableDictionary * _ownedProps;
    BLControl * bl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clientConnectedWithExpObj:(id)arg1;
- (void)clientDisconnectedWithExpObj:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 client:(id)arg2;
- (void)dealloc;
- (void)destroyServer;
- (id)init;
- (bool)isAlsSupported;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notifyClientsForProperty:(id)arg1 key:(id)arg2;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)setNotificationProperties:(id)arg1 forClient:(id)arg2;
- (void)setOwnedProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (void)undoOwnedPropertiesForClient:(id)arg1;

@end
