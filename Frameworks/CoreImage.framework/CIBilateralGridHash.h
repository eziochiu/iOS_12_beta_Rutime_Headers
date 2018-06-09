/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBilateralGridHash : NSObject {
    unsigned int * _blur_indices;
    unsigned int * _coord_indices;
    unsigned int * _coord_indices_off;
    unsigned int * _coord_table;
    struct BGHashMapContext { } * _hash_map;
    unsigned int * _hash_matrix_data;
    struct { union { unsigned long long x_1_1_1; unsigned char x_1_1_2[8]; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } * _hash_table;
    unsigned int  _hash_table_size;
    int  _height;
    unsigned int * _interp_indices;
    char * _interp_pad;
    unsigned int * _interp_table;
    unsigned long long  _max_hash_table_size;
    int  _n_dims;
    int  _sigma_r_chroma;
    int  _sigma_r_luma;
    int  _sigma_s;
    int  _width;
}

- (int)_addHashKeyAtX:(int)arg1 Y:(int)arg2 key:(unsigned long long)arg3 isKeyExist:(bool*)arg4;
- (int)_computeBilateralSpaceYCC444:(struct __IOSurface { }*)arg1 region:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 sigma_s:(int)arg4 sigma_r_luma:(int)arg5 sigma_r_chroma:(int)arg6;
- (void)_computeBlurIndices;
- (void)_computeCoordIndices;
- (void)_computeInterpIndices;
- (int)_createWithSurface:(struct __IOSurface { }*)arg1 region:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 sigma_s:(int)arg4 sigma_r_luma:(int)arg5 sigma_r_chroma:(int)arg6;
- (void)_hashMapAddKey:(unsigned long long)arg1 andValue:(unsigned int)arg2;
- (bool)_hashMapFindKey:(unsigned long long)arg1 to:(unsigned int*)arg2;
- (void)blur:(const float*)arg1 pout:(float*)arg2;
- (const unsigned int*)blur_indices:(int)arg1 n_blur_indices:(int*)arg2;
- (void)blur_n:(float*)arg1;
- (void)blur_ones:(float*)arg1;
- (const unsigned int*)blur_table;
- (void)clear;
- (const unsigned int*)coord_indices;
- (const unsigned int*)coord_table;
- (int)countDims;
- (int)countVertices;
- (int)createWithSurface:(struct __IOSurface { }*)arg1 region:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 sigma_s:(int)arg4 sigma_r_luma:(int)arg5 sigma_r_chroma:(int)arg6;
- (void)dealloc;
- (const unsigned int*)hash_matrix;
- (const void*)hash_table;
- (int)height;
- (id)initWithWidth:(int)arg1 height:(int)arg2 maxHashTableSize:(unsigned long long)arg3;
- (const unsigned int*)interp_indices;
- (const char *)interp_pad;
- (const unsigned int*)interp_table;
- (void)normalize:(const float*)arg1 pout:(float*)arg2;
- (void)normalize_blur:(const float*)arg1 pout:(float*)arg2;
- (int)sigma_r_chroma;
- (int)sigma_r_luma;
- (int)sigma_s;
- (void)slice:(const float*)arg1 outPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)slice_trilinear:(struct __IOSurface { }*)arg1 pin:(const float*)arg2 pout:(struct __CVBuffer { }*)arg3;
- (void)splat:(struct __CVBuffer { }*)arg1 pout:(float*)arg2;
- (void)splat_ones:(float*)arg1;
- (void)splat_w_mul_x:(struct __CVBuffer { }*)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2 pout:(float*)arg3;
- (int)width;

@end
