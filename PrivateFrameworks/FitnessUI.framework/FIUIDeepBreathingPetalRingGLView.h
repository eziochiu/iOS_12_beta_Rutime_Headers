/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIDeepBreathingPetalRingGLView : HKGLView {
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _circlePosition;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _circleProperties;
    unsigned int  _indexBuffer;
    unsigned int  _indices;
    long long  _numberOfPetals;
    long long  _numberOfVisiblePetals;
    unsigned int  _petalPositionUniform;
    unsigned int  _petalPropertiesUniform;
    <FIUIDeepBreathingPetalRingGLViewDelegate> * _petalRingDelegate;
    unsigned int  _program;
    unsigned int  _projectionMatrixUniform;
    struct CGPoint { 
        double x; 
        double y; 
    }  _ringCenter;
    void _ringCenterVector;
    float  _ringRadius;
    bool  _showBlurTrails;
    GLKTextureInfo * _texture;
    unsigned int  _textureRotationUniform;
    void _textureRotationVector;
    unsigned int  _textureSamplerUniform;
    unsigned int  _vertexBuffer;
    struct { 
        union _GLKVector2 { 
            struct { 
                float x; 
                float y; 
            } ; 
            struct { 
                float s; 
                float t; 
            } ; 
            float v[2]; 
        } position; 
        union _GLKVector2 { 
            struct { 
                float x; 
                float y; 
            } ; 
            struct { 
                float s; 
                float t; 
            } ; 
            float v[2]; 
        } coordinate; 
    }  _vertices;
}

@property (nonatomic, readonly) long long numberOfPetals;
@property (nonatomic, readonly) long long numberOfVisiblePetals;
@property (nonatomic) <FIUIDeepBreathingPetalRingGLViewDelegate> *petalRingDelegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } ringCenter;
@property (nonatomic) float ringRadius;
@property (nonatomic, readonly) bool showBlurTrails;

- (void).cxx_destruct;
- (void)_clearCirclesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_context_applyInitialState;
- (void)_context_createBuffers;
- (void)_context_findUniformsAndAttributes;
- (void)_context_loadShadersWithNumberOfPetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (void)_context_setupScene;
- (double)_maxPetalRingRadius;
- (void)_setCircleAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)_teardown;
- (void)_updateVertices;
- (void)dealloc;
- (unsigned int)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(id)arg2;
- (void)importDataFromPetalRing:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfPetals:(long long)arg2 showBlurTrails:(bool)arg3;
- (long long)numberOfPetals;
- (long long)numberOfVisiblePetals;
- (id)petalRingDelegate;
- (struct CGPoint { double x1; double x2; })ringCenter;
- (float)ringRadius;
- (void)setBlurTrailAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)setGradientRotationAngle:(float)arg1;
- (void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (void)setPetalAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 alpha:(float)arg4;
- (void)setPetalRingDelegate:(id)arg1;
- (void)setRingCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRingRadius:(float)arg1;
- (bool)showBlurTrails;
- (void)update;

@end
