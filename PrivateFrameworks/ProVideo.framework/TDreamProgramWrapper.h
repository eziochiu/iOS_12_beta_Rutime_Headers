/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamProgramWrapper : NSObject {
    int  filterInputTextureUniform;
    int  filterPositionAttribute;
    TDreamGLProgramHelper * filterProgram;
    int  filterTextureCoordinateAttribute;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  outputRect;
    int  sizeUniform;
    float  texCoord0;
}

- (void).cxx_destruct;
- (id)getProgram;
- (id)init;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithProgram:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)initializeAttributes;
- (void)initializeTexCoord0;
- (void)renderTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)setInputTexture0Rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setOutputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUniforms;

@end
