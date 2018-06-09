/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGaussianBlurShaderEffect : TSCH3DShaderEffect {
    TSCH3DShaderVariable * mSamplingTexcoords;
}

+ (void)setTapUnit:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })arg1 effectsStates:(id)arg2;
+ (id)variableAccum;
+ (id)variableTapUnit;

- (void)addVariables:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)inject:(id)arg1;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (id)variableAccum;
- (id)variableTapUnit;

@end
