/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSphericalEnvironmentShaderEffect : TSCH3DShaderEffect {
    NSArray * mMaterials;
    TSCH3DTexturePool * mPool;
}

+ (id)effectWithMaterials:(id)arg1 pool:(id)arg2;
+ (Class)stateClass;

- (void)addVariables:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithMaterials:(id)arg1 pool:(id)arg2;
- (void)inject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (const struct array<(anonymous namespace)::TextureVariables, 2>=[2{TextureVariables=@@@ {}*)textureVariablesArray;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;

@end
