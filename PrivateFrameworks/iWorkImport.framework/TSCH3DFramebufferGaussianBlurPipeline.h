/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferGaussianBlurPipeline : TSCH3DFramebufferCopyPipeline {
    struct tvec2<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
    }  mTapUnit;
}

@property (nonatomic) struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } tapUnit;

+ (id)effectsArray;

- (id).cxx_construct;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;
- (void)setTapUnit:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })tapUnit;
- (void)updateShaderEffectsStates;

@end
