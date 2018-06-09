/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICImageCleanupFilter : NSObject {
    CIImage * _pageImage;
}

@property (nonatomic, retain) CIImage *pageImage;

- (void).cxx_destruct;
- (id)colorCorrectedPageImage;
- (void)computeAutoLevelsForImage:(id)arg1 tuneForText:(bool)arg2 low:(double*)arg3 high:(double*)arg4 isDarkImage:(bool*)arg5;
- (void)fillBucketsForImage:(id)arg1 mode:(long long)arg2 cs:(struct CGColorSpace { }*)arg3 buckets:(float)arg4 scale:(float)arg5;
- (id)imageAdjustedForShadow:(double)arg1 highlight:(double)arg2;
- (id)imageByClampingToUpperGreyscaleValue:(double)arg1;
- (id)initWithPageImage:(id)arg1;
- (id)pageImage;
- (float*)renderIntoFloatBuffer:(id)arg1 withSpace:(struct CGColorSpace { }*)arg2 useCIReadback:(bool)arg3;
- (double)reverseTransformedValue:(double)arg1;
- (void)setPageImage:(id)arg1;

@end
