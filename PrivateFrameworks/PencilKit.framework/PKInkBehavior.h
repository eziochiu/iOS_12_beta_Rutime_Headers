/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkBehavior : NSObject {
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _aspectRatioOutput;
    double  _baseAlpha;
    double  _baseRadiusStylus;
    double  _baseRadiusTouchPad;
    double  _baseRadiusTouchPhone;
    double  _blendAlpha;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _brushOpacityOutput;
    NSMutableArray * _cachedAspectRatioFunctions;
    NSMutableArray * _cachedEdgeWidthFunctions;
    NSMutableArray * _cachedOpacityFunctions;
    NSMutableArray * _cachedRadiusFunctions;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _edgeWidthOutput;
    PKInkFeatheringDescriptor * _featheringDescriptor;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _opacityOutput;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _radiusOutput;
    PKInkRenderingDescriptor * _renderingDescriptor;
    double  _rulerOffsetConstant;
    double  _rulerOffsetScale;
    bool  _showBrushIndicator;
    PKInkSmoothingDescriptor * _smoothingDescriptor;
    double  _targetMultiple;
    bool  _timeDependent;
    bool  _usesAzimuthOrAltitude;
    bool  _variableSnappedWidth;
    NSString * _variant;
    struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { 
        struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { 
            struct PKFunction {} *__value_; 
        } __ptr_; 
    }  _weightFunction;
}

@property (nonatomic) double baseAlpha;
@property (nonatomic) double baseRadiusStylus;
@property (nonatomic) double baseRadiusTouchPad;
@property (nonatomic) double baseRadiusTouchPhone;
@property (nonatomic) double blendAlpha;
@property (nonatomic, retain) PKInkFeatheringDescriptor *featheringDescriptor;
@property (nonatomic, readonly) NSArray *inkFunctions;
@property (nonatomic, readonly) PKInkParticleDescriptor *particleDescriptor;
@property (nonatomic, readonly) PKInkRenderingDescriptor *renderingDescriptor;
@property (nonatomic, retain) PKInkSmoothingDescriptor *smoothingDescriptor;
@property (nonatomic) double targetMultiple;
@property (nonatomic, readonly) NSString *variant;

+ (id)arrayFromVector:(struct vector<double, std::__1::allocator<double> > { double *x1; double *x2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_1_1; } x3; })arg1;
+ (id)inkFunctionForProperty:(unsigned long long)arg1 outputFunctions:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; }*)arg2 index:(unsigned long long)arg3;
+ (double)inkRadiusOverride;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addNewInkFunction:(id)arg1;
- (double)alphaForStroke:(id)arg1;
- (double)baseAlpha;
- (double)baseRadiusForInputType:(long long)arg1;
- (double)baseRadiusStylus;
- (double)baseRadiusTouchPad;
- (double)baseRadiusTouchPhone;
- (double)blendAlpha;
- (double)brushOpacityForPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 context:(/* Warning: unhandled struct encoding: '{?={_PKStrokePoint=d{CGPoint=dd}ddddddd}Bqdddd@}' */ struct { struct _PKStrokePoint { double x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; bool x2; long long x3; double x4; double x5; double x6; double x7; id x8; }*)arg2;
- (id)description;
- (double)evaluateWeight:(double)arg1;
- (id)featheringDescriptor;
- (id)functionsForProperty:(unsigned long long)arg1;
- (bool)immutableVelocity;
- (id)initWithRenderingDescriptor:(id)arg1 variant:(id)arg2;
- (void)inkFunctionDidChange:(id)arg1;
- (id)inkFunctions;
- (id)inkFunctionsForProperty:(unsigned long long)arg1;
- (bool)isEraser;
- (bool)isTimeDependent;
- (struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })outputForPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 context:(/* Warning: unhandled struct encoding: '{?={_PKStrokePoint=d{CGPoint=dd}ddddddd}Bqdddd@}' */ struct { struct _PKStrokePoint { double x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; bool x2; long long x3; double x4; double x5; double x6; double x7; id x8; }*)arg2;
- (struct PKOutputFunction { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction {} *x_1_2_1; } x_5_1_1; } x5; })outputFunctionFromInkFunction:(id)arg1;
- (struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })outputTimePoint:(struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1 atTime:(double)arg2 stillChanging:(bool*)arg3;
- (struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; }*)outputVectorForProperty:(unsigned long long)arg1;
- (id)particleDescriptor;
- (double)particleSpacingForRadius:(double)arg1;
- (unsigned int)particleTexture;
- (id)particleTextureName;
- (void)removeInkFunction:(id)arg1;
- (id)renderingDescriptor;
- (double)rulerOffsetForBaseValues:(struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1 inputType:(long long)arg2 inputScale:(double)arg3;
- (void)setAspectRatioOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; })arg1;
- (void)setBaseAlpha:(double)arg1;
- (void)setBaseRadiusStylus:(double)arg1;
- (void)setBaseRadiusTouchPad:(double)arg1;
- (void)setBaseRadiusTouchPhone:(double)arg1;
- (void)setBlendAlpha:(double)arg1;
- (void)setBrushOpacityOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; })arg1;
- (void)setEdgeWidthOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; })arg1;
- (void)setFeatheringDescriptor:(id)arg1;
- (void)setOpacityOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; })arg1;
- (void)setRadiusOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; })arg1;
- (void)setRulerOffsetConstant:(double)arg1;
- (void)setRulerOffsetScale:(double)arg1;
- (void)setShowBrushIndicator:(bool)arg1;
- (void)setSmoothingDescriptor:(id)arg1;
- (void)setTargetMultiple:(double)arg1;
- (void)setTimeDependent:(bool)arg1;
- (void)setUsesAzimuthOrAltitude:(bool)arg1;
- (void)setVariableSnappedWidth:(bool)arg1;
- (void)setWeightFunction:(struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction {} *x_1_1_1; } x1; })arg1;
- (id)setupParticleShader:(id)arg1 resourceHandler:(id)arg2;
- (id)shaderFrom:(id)arg1;
- (bool)showBrushIndicator;
- (id)smoothingDescriptor;
- (double)solve:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; }*)arg1 forPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg2 context:(/* Warning: unhandled struct encoding: '{?={_PKStrokePoint=d{CGPoint=dd}ddddddd}Bqdddd@}' */ struct { struct _PKStrokePoint { double x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; bool x2; long long x3; double x4; double x5; double x6; double x7; id x8; }*)arg3 weight:(double)arg4;
- (double)solveForTime:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; }*)arg1 forTime:(double)arg2 stillChanging:(bool*)arg3;
- (double)targetMultiple;
- (bool)usesAzimuthOrAltitude;
- (bool)variableSnappedWidth;
- (id)variant;

@end
