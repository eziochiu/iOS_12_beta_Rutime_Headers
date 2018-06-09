/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLineComponentView : SXComponentView {
    SXSolidBorderView * _borderView;
    CALayer * _strokeLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strokeRect;
}

@property (nonatomic, retain) SXSolidBorderView *borderView;
@property (nonatomic, retain) CALayer *strokeLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } strokeRect;

- (void).cxx_destruct;
- (id)borderView;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (void)setBorderView:(id)arg1;
- (void)setStrokeLayer:(id)arg1;
- (void)setStrokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)strokeLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeRect;

@end
