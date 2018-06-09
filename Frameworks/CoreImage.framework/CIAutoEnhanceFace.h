/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAutoEnhanceFace : NSObject {
    double  I;
    double  Q;
    int  centerX;
    int  centerY;
    int  size;
}

@property (readonly) double I;
@property (readonly) double Q;
@property (readonly) int centerX;
@property (readonly) int centerY;
@property (readonly) int size;

- (double)I;
- (double)Q;
- (int)centerX;
- (int)centerY;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andImage:(id)arg2 usingContext:(id)arg3;
- (int)size;

@end
