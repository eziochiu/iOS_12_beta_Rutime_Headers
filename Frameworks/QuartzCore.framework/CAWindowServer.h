/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAWindowServer : NSObject {
    /* Warning: unhandled struct encoding: '{CAWindowServerImpl=^{__CFArray}I@}' */ struct CAWindowServerImpl { struct __CFArray {} *x1; unsigned int x2; id x3; } * _impl;
    bool  _mirroringEnabled;
}

@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) bool mirroringEnabled;
@property unsigned int rendererFlags;
@property (getter=isSecure) bool secure;

+ (id)context;
+ (id)contextWithOptions:(id)arg1;
+ (id)server;
+ (id)serverIfRunning;
+ (id)serverWithOptions:(id)arg1;

- (void)_detectDisplays;
- (id)_init;
- (void)_initializeBrightnessNotifications;
- (void)addDisplay:(id)arg1;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (unsigned int)contextIdHostingContextId:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)displayWithDisplayId:(unsigned int)arg1;
- (id)displayWithName:(id)arg1;
- (id)displayWithUniqueId:(id)arg1;
- (id)displays;
- (id)init;
- (id)insecureProcessIds;
- (bool)isMirroringEnabled;
- (bool)isSecure;
- (void)removeAllDisplays;
- (void)removeDisplay:(id)arg1;
- (unsigned int)rendererFlags;
- (id)secureModeViolations;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setRendererFlags:(unsigned int)arg1;
- (void)setSecure:(bool)arg1;
- (unsigned int)taskNamePortOfContextId:(unsigned int)arg1;
- (unsigned int)taskPortOfContextId:(unsigned int)arg1;

@end
