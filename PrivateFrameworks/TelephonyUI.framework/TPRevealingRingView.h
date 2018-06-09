/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPRevealingRingView : UIView {
    double  _alphaInsideRing;
    double  _alphaOutsideRing;
    UIColor * _colorInsideRing;
    UIColor * _colorInsidegamRing;
    UIColor * _colorOutsideRing;
    double  _cornerRadius;
    double  _defaultRingStrokeWidth;
    _TPTemplatedColoredImageView * _innerView;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        struct { 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } rect; 
            double cornerRadius; 
        } outerPath; 
        struct { 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } rect; 
            double cornerRadius; 
        } innerPath; 
        bool isCircle; 
        bool drawsOutsideOuterPath; 
    }  _innerViewDrawingProperties;
    bool  _isCircularRing;
    _TPTemplatedColoredImageView * _outerView;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        struct { 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } rect; 
            double cornerRadius; 
        } outerPath; 
        struct { 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } rect; 
            double cornerRadius; 
        } innerPath; 
        bool isCircle; 
        bool drawsOutsideOuterPath; 
    }  _outerViewDrawingProperties;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _paddingOutsideRing;
    double  _revealAnimationDuration;
    bool  _revealed;
    double  _unrevealAnimationDuration;
}

@property (nonatomic) double alphaInsideRing;
@property (nonatomic) double alphaOutsideRing;
@property (nonatomic, retain) UIColor *colorInsideRing;
@property (nonatomic, retain) UIColor *colorOutsideRing;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double defaultRingStrokeWidth;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddingOutsideRing;
@property (nonatomic) double revealAnimationDuration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } ringSize;
@property (nonatomic) double unrevealAnimationDuration;

+ (id)classIdentifier;

- (void).cxx_destruct;
- (void)_animateForReveal:(bool)arg1 withDuration:(float)arg2 delay:(double)arg3;
- (void)_calculateOuter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 inner:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 newXOffset:(double*)arg3 newYOffset:(double*)arg4 withScale:(double)arg5;
- (void)_computeInnerViewDrawingPropertiesWithScale:(double)arg1;
- (void)_computeOuterViewDrawingPropertiesWithScale:(double)arg1;
- (void)_evaluateCircularness;
- (bool)_isSquare:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldDrawAsCircle:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
- (double)alphaInsideRing;
- (double)alphaOutsideRing;
- (id)colorInsideRing;
- (id)colorOutsideRing;
- (double)cornerRadius;
- (double)defaultRingStrokeWidth;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 paddingOutsideRing:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;
- (double)revealAnimationDuration;
- (struct CGSize { double x1; double x2; })ringSize;
- (void)setAlphaInsideRing:(double)arg1;
- (void)setAlphaOutsideRing:(double)arg1;
- (void)setColorInsideRing:(id)arg1;
- (void)setColorOutsideRing:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDefaultRingStrokeWidth:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaddingOutsideRing:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRevealAnimationDuration:(double)arg1;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2 delay:(double)arg3;
- (void)setUnrevealAnimationDuration:(double)arg1;
- (double)unrevealAnimationDuration;

@end
