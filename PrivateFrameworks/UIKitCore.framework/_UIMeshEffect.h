/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIMeshEffect : UIVisualEffect {
    CAMeshTransform * _identityMeshTransform;
    CAMeshTransform * _meshTransform;
    bool  _underlayMesh;
}

+ (id)_underlayMeshEffectZoom:(double)arg1;
+ (id)meshEffectZoom:(double)arg1;

- (void).cxx_destruct;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)_viewEntry;

@end
