/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFHighlightLayer : CALayer {
    struct CGPath { } * _borderPath;
    struct CGPath { } * _clipPath;
    struct CGPoint { 
        double x; 
        double y; 
    }  offset;
}

@property (nonatomic) struct CGPath { }*borderPath;
@property (nonatomic) struct CGPath { }*clipPath;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;

- (struct CGPath { }*)borderPath;
- (struct CGPath { }*)clipPath;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setBorderPath:(struct CGPath { }*)arg1;
- (void)setClipPath:(struct CGPath { }*)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
