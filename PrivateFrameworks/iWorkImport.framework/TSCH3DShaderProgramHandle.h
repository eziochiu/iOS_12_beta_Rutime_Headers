/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderProgramHandle : TSCH3DGLHandle {
    NSMutableDictionary * mAttributeLocations;
    TSCH3DShaderEffectsStates * mCurrentEffectsStates;
    TSCH3DShaderHandle * mFragmentShader;
    NSMutableDictionary * mUniformLocations;
    TSCH3DShaderHandle * mVertexShader;
}

@property (nonatomic, readonly) NSMutableDictionary *attributeLocations;
@property (nonatomic, readonly) TSCH3DShaderEffectsStates *currentEffectsStates;
@property (nonatomic, readonly) TSCH3DShaderHandle *fragmentShader;
@property (nonatomic, readonly) NSMutableDictionary *uniformLocations;
@property (nonatomic, readonly) TSCH3DShaderHandle *vertexShader;

- (id)attributeLocations;
- (id)currentEffectsStates;
- (void)dealloc;
- (void)destroyResourcesInContext:(id)arg1;
- (id)fragmentShader;
- (id)initWithGLHandle:(unsigned int)arg1;
- (id)uniformLocations;
- (id)vertexShader;

@end
