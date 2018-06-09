/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLayer : CALayer {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hitBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _hitOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _hitOutset;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } hitBounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } hitOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } hitOutset;

- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitBounds;
- (struct CGPoint { double x1; double x2; })hitOffset;
- (struct CGPoint { double x1; double x2; })hitOutset;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHitOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHitOutset:(struct CGPoint { double x1; double x2; })arg1;

@end
