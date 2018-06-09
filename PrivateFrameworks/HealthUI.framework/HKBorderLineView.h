/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBorderLineView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _borderInsets;
    UIColor * _borderLineColor;
    double  _borderWidth;
    long long  _edges;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderInsets;
@property (nonatomic, retain) UIColor *borderLineColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) long long edges;

+ (void)drawBorderLinesInContext:(struct CGContext { }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 borderEdges:(long long)arg3 borderLineWidth:(double)arg4 borderLineColor:(id)arg5 borderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg6;

- (void).cxx_destruct;
- (void)_initFields;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderInsets;
- (id)borderLineColor;
- (double)borderWidth;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)edges;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBorderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderLineColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setEdges:(long long)arg1;

@end
