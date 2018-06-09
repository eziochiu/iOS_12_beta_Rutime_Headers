/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMovieScrubberEditingView : UIView {
    NSArray * _activeImages;
    NSArray * _activeNoEditImages;
    double  _edgeInset;
    bool  _editing;
    bool  _enabled;
    NSArray * _inactiveImages;
    UIImageView * _leftImageView;
    UIImageView * _middleImageView;
    UIImageView * _rightImageView;
}

@property (nonatomic) double edgeInset;
@property (getter=isEditing, nonatomic) bool editing;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void).cxx_destruct;
- (double)_bounceValueForFraction:(double)arg1;
- (id)_handleImages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftHandleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rightHandleRect;
- (void)_updateHandleImages;
- (void)bounce;
- (double)edgeInset;
- (int)handleForPoint:(struct CGPoint { double x1; double x2; })arg1 hitOffset:(double*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (bool)isEnabled;
- (void)layoutSubviews;
- (bool)pointInsideLeftHandle:(struct CGPoint { double x1; double x2; })arg1;
- (bool)pointInsideRightHandle:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEdgeInset:(double)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEnabled:(bool)arg1;

@end
