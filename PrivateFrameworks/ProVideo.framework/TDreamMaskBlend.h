/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamMaskBlend : TDreamProgramWrapperTwoInput {
    int  filterInputThirdTextureUniform;
    int  filterThirdTextureCoordinateAttribute;
}

- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)initializeAttributes;
- (void)renderTo:(unsigned int)arg1 from:(unsigned int)arg2 andFrom:(unsigned int)arg3 andFrom:(unsigned int)arg4;

@end
