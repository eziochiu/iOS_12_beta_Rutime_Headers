/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DMaterialShaderEffect : TSCH3DShaderEffect {
    TSCH3DTexturesMaterial * mMaterial;
    TSCH3DTexturePool * mPool;
    struct MaterialShaderVariables { 
        TSCH3DShaderVariable *texture; 
        TSCH3DShaderVariable *intensity; 
        TSCH3DShaderVariable *factor; 
        TSCH3DShaderVariable *textureColor; 
        TSCH3DShaderVariable *color; 
        TSCH3DShaderVariable *modulation; 
        TSCH3DShaderVariable *texcoords; 
        TSCH3DShaderVariable *textureMatrix; 
    }  mVariables;
}

+ (id)effectWithPool:(id)arg1 material:(id)arg2 variables:(const struct MaterialShaderVariables { id x1; id x2; id x3; id x4; }*)arg3;
+ (id)stateSharingID;

- (id).cxx_construct;
- (void)addVariables:(id)arg1;
- (void)affectStates:(id)arg1;
- (void)dealloc;
- (id)initWithPool:(id)arg1 material:(id)arg2 variables:(const struct MaterialShaderVariables { id x1; id x2; id x3; id x4; }*)arg3;
- (bool)isEqual:(id)arg1;
- (id)stateSharingID;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;

@end
