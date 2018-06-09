/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamToolbarFilterButton : UIButton {
    bool  _compact;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentBounds;
    CAShapeLayer * _maskLayer;
    bool  _myHighlighted;
}

@property (nonatomic) bool compact;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentBounds;
@property (nonatomic, retain) CAShapeLayer *maskLayer;
@property (nonatomic) bool myHighlighted;

+ (id)buttonWithType:(long long)arg1;

- (void).cxx_destruct;
- (bool)compact;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentBounds;
- (id)darkenedTintColor;
- (id)defaultTintColor;
- (void)layoutSubviews;
- (id)maskLayer;
- (bool)myHighlighted;
- (void)postButtonWithTypeInit;
- (id)preferredTintColor;
- (void)setCompact:(bool)arg1;
- (void)setCurrentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDarkenedTintColor:(id)arg1;
- (void)setDefaultTintColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setMyHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
