/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIMeshEffectViewMeshEntry : _UIVisualEffectViewEntry {
    CAMeshTransform * _identityMesh;
    long long  _meshIdentifier;
    CAMeshTransform * _requestedMesh;
}

@property (nonatomic, retain) CAMeshTransform *identityMesh;
@property (nonatomic) long long meshIdentifier;
@property (nonatomic, retain) CAMeshTransform *requestedMesh;

- (void).cxx_destruct;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (bool)canTransitionToEffect:(id)arg1;
- (id)identityMesh;
- (long long)meshIdentifier;
- (void)removeEffectFromView:(id)arg1;
- (id)requestedMesh;
- (void)setIdentityMesh:(id)arg1;
- (void)setMeshIdentifier:(long long)arg1;
- (void)setRequestedMesh:(id)arg1;
- (bool)shouldAnimateProperty:(id)arg1;

@end
