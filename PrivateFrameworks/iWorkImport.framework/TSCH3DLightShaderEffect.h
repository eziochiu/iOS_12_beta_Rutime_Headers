/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightShaderEffect : TSCH3DShaderEffect {
    unsigned long long  mLightCount;
}

+ (void)createStateInEffectsStates:(id)arg1;
+ (id)effectWithLightCount:(unsigned long long)arg1;
+ (Class)stateClass;
+ (void)updatePackageState:(const struct LightingPackageShaderEffectState { struct array<glm::detail::tmat4x4<float>, 2> { struct tmat4x4<float> { struct tvec4<float> { union { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; float x_2_4_3; } x_1_3_2; union { float x_3_4_1; float x_3_4_2; float x_3_4_3; } x_1_3_3; union { float x_4_4_1; float x_4_4_2; float x_4_4_3; } x_1_3_4; } x_1_2_1[4]; } x_1_1_1[2]; } x1; }*)arg1 effectsStates:(id)arg2;

- (void)addVariables:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithLightCount:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)uploadLightDirectionalWithUploader:(id)arg1 effectsStates:(id)arg2;
- (void)uploadLightPositionablesWithUploader:(id)arg1 effectsStates:(id)arg2;

@end