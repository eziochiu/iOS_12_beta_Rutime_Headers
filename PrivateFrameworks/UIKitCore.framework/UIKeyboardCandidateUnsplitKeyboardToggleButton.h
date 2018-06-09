/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton {
    bool  _drawsBackground;
    bool  _drawsPocketShadow;
    UIKeyboardCandidatePocketShadow * _pocketShadow;
}

@property (nonatomic) bool drawsBackground;
@property (nonatomic) bool drawsPocketShadow;

- (void).cxx_destruct;
- (void)dimKeys:(id)arg1;
- (bool)drawsBackground;
- (bool)drawsPocketShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawsBackground:(bool)arg1;
- (void)setDrawsPocketShadow:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
