/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSourceRendererRegistry : NSObject {
    struct __CFDictionary { } * _registry;
}

+ (id)sharedRegistry;

- (void)dealloc;
- (id)init;
- (void)removeSourceRenderersForEngineContext:(struct __C3DEngineContext { }*)arg1;
- (void)removeSourceRenderersForSource:(id)arg1;
- (void)rendererDidChange:(id)arg1;
- (id)sourceRendererForEngineContext:(struct __C3DEngineContext { }*)arg1 source:(id)arg2 textureSource:(id)arg3;

@end
