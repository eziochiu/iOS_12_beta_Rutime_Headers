/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImageAccumulator : NSObject {
    void * _state;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } extent;
@property (readonly) int format;

+ (id)imageAccumulatorWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 format:(int)arg2;
+ (id)imageAccumulatorWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3;
+ (id)imageAccumulatorWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 format:(int)arg2 options:(id)arg3;

- (void)clear;
- (struct CGColorSpace { }*)colorSpace;
- (void)commitUpdates:(id)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extent;
- (int)format;
- (id)image;
- (id)init;
- (id)initWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 format:(int)arg2;
- (id)initWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3;
- (id)initWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 format:(int)arg2 options:(id)arg3;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 dirtyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
