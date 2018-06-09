/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIHeaderPocketView : UIView {
    double  _backgroundAlpha;
    double  _contentAlpha;
    double  _contentAlphaMultiplier;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _contentTransform;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    MTMaterialView * _headerBackgroundView;
    SBUIChevronView * _headerChevronView;
    UIView * _headerLineView;
    unsigned long long  _mode;
    CCUIStatusBar * _statusBar;
    <CCUIStatusBarDelegate> * _statusBarDelegate;
}

@property (nonatomic) double backgroundAlpha;
@property (nonatomic) unsigned long long chevronState;
@property (nonatomic) double contentAlpha;
@property (nonatomic) double contentAlphaMultiplier;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentTransform;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, readonly) CCUIStatusBar *statusBar;
@property (nonatomic) <CCUIStatusBarDelegate> *statusBarDelegate;

- (void).cxx_destruct;
- (void)_updateAlpha;
- (void)_updateContentTransform;
- (double)backgroundAlpha;
- (unsigned long long)chevronState;
- (double)contentAlpha;
- (double)contentAlphaMultiplier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentTransform;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)mode;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setChevronState:(unsigned long long)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setContentAlphaMultiplier:(double)arg1;
- (void)setContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setStatusBarDelegate:(id)arg1;
- (id)statusBar;
- (id)statusBarDelegate;

@end
