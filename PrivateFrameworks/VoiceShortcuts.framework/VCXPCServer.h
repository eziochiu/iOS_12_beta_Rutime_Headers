/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCXPCServer : NSObject <NSXPCListenerDelegate> {
    VCVoiceShortcutManager * _manager;
    bool  _skipEntitlementsCheck;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VCVoiceShortcutManager *manager;
@property (nonatomic, readonly) bool skipEntitlementsCheck;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCListener *xpcListener;

+ (void)initialize;

- (void).cxx_destruct;
- (id)endpoint;
- (id)init;
- (id)initWithAnonymousListenerUseEphemeralStore:(bool)arg1;
- (id)initWithListener:(id)arg1 useEphemeralStore:(bool)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)manager;
- (bool)skipEntitlementsCheck;
- (id)xpcListener;

@end
