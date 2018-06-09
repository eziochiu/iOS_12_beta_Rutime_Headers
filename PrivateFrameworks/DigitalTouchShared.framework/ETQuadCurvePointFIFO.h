/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETQuadCurvePointFIFO : ETPointFIFO {
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__value_"^ {}  _controlPoints;
    id /* block */  _emissionHandler;
    bool  _emitInterpolatedPoints;
    void _lastPoint;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__value_"^ {}  _points;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__value_"^ {}  _prevPoints;
    float  _unitSize;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(2)))' */ struct  controlPoints; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^}} */
@property (copy) id /* block */ emissionHandler;
@property (nonatomic) bool emitInterpolatedPoints;
@property (nonatomic) void lastPoint;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(2)))' */ struct  points; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(2)))' */ struct  prevPoints; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^}} */
@property (nonatomic) float unitSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)clear;
- (struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})controlPoints;
- (id /* block */)emissionHandler;
- (bool)emitInterpolatedPoints;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (void)lastPoint;
- (struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})points;
- (struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})prevPoints;
- (void)setControlPoints:(struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})arg1;
- (void)setEmissionHandler:(id /* block */)arg1;
- (void)setEmitInterpolatedPoints:(bool)arg1;
- (void)setLastPoint;
- (void)setPoints:(struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})arg1;
- (void)setPrevPoints:(struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {})arg1;
- (void)setUnitSize:(float)arg1;
- (float)unitSize;

@end
