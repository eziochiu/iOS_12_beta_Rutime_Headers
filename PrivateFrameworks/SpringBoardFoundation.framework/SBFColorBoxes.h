/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFColorBoxes : NSObject {
    struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } * _colorBoxesRowMajor;
    unsigned long long  _columnCount;
    unsigned long long  _downsampledBoxSize;
    unsigned long long  _effectiveDownsampleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
    unsigned long long  _rowCount;
    unsigned long long  _size;
    unsigned char  _totalContrast8;
}

@property (nonatomic, readonly) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*colorBoxesRowMajor;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) unsigned long long downsampledBoxSize;
@property (nonatomic, readonly) unsigned long long effectiveDownsampleFactor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long rowCount;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned char totalContrast8;

+ (id)colorBoxesForImage:(id)arg1 colorBoxSize:(unsigned long long)arg2;

- (void)_freeColorBoxes;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)colorBoxAtRow:(unsigned long long)arg1 col:(unsigned long long)arg2;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)colorBoxesRowMajor;
- (unsigned long long)columnCount;
- (double)contrast;
- (void)dealloc;
- (id)description;
- (unsigned long long)downsampledBoxSize;
- (unsigned long long)effectiveDownsampleFactor;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithColorBoxes:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg1 size:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 columnCount:(unsigned long long)arg4 totalContrast8:(unsigned char)arg5 imageSize:(struct CGSize { double x1; double x2; })arg6 downsampledBoxSize:(unsigned long long)arg7 effectiveDownsampleFactor:(unsigned long long)arg8 pixelHeight:(unsigned long long)arg9 pixelWidth:(unsigned long long)arg10;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForColorBoxAtRow:(unsigned long long)arg1 col:(unsigned long long)arg2;
- (unsigned long long)rowCount;
- (unsigned long long)size;
- (unsigned char)totalContrast8;

@end
