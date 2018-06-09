/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMatrix4x4Array : NSObject <NSCopying> {
    struct VtValue { 
        struct aligned_storage_imp<8, 8> { 
            union data_t { 
                BOOL buf[8]; 
                struct a8 { } align_; 
            } data_; 
        } _storage; 
        struct TfPointerAndBits<const VtValue::_TypeInfo> { 
            struct _TypeInfo {} *_ptrAndBits; 
        } _info; 
    }  _data;
    unsigned long long  _elementCount;
}

@property (nonatomic, readonly) unsigned long long elementCount;
@property (nonatomic, readonly) unsigned long long precision;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct aligned_storage_imp<8, 8> { union data_t { BOOL x_1_2_1[8]; struct a8 { } x_1_2_2; } x_1_1_1; } x1; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (unsigned long long)elementCount;
- (unsigned long long)getDouble4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2;
- (id)initWithElementCount:(unsigned long long)arg1;
- (unsigned long long)precision;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct intrusive_ptr<const Sdf_PathNode> { struct Sdf_PathNode {} *x_1_2_1; } x_3_1_1; } x3; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; }*)arg1;
- (void)setDouble4x4Array:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 count:(unsigned long long)arg2;
- (void)setFloat4x4Array:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 count:(unsigned long long)arg2;

@end
