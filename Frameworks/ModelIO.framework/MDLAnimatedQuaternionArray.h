/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLAnimatedQuaternionArray : MDLAnimatedValue {
    unsigned long long  _elementCount;
}

@property (nonatomic) unsigned long long elementCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct aligned_storage_imp<8, 8> { union data_t { BOOL x_1_2_1[8]; struct a8 { } x_1_2_2; } x_1_1_1; } x1; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (unsigned long long)elementCount;
- (unsigned long long)getDoubleQuaternionArray:(struct { }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getDoubleQuaternionArray:(struct { }*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)getFloatQuaternionArray:(struct { }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloatQuaternionArray:(struct { }*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (id)initWithElementCount:(unsigned long long)arg1;
- (unsigned long long)precision;
- (void)resetWithDoubleQuaternionArray:(const struct { }*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4;
- (void)resetWithFloatQuaternionArray:(const struct { }*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct intrusive_ptr<const Sdf_PathNode> { struct Sdf_PathNode {} *x_1_2_1; } x_3_1_1; } x3; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; }*)arg1 timeScale:(double)arg2;
- (void)setDoubleQuaternionArray:(const struct { }*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setElementCount:(unsigned long long)arg1;
- (void)setFloatQuaternionArray:(const struct { }*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;

@end
