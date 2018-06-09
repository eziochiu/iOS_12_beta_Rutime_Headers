/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICircleSegmentedControl : UIControl {
    UIImage * _activeImage;
    UIImage * _buttonImage;
    <PSUICircleSegmentedControlDelegate> * _delegate;
    UIImage * _highlightedImage;
    UILabel * _label;
    UIImage * _placeholderImage;
    NSMutableArray * _segmentConstraints;
    NSMutableArray * _segmentPlaceholders;
    NSMutableArray * _segments;
    PSUICircleSegment * _selectedSegment;
    NSMutableArray * _selectedSegmentConstraints;
    UIStackView * _stack;
}

@property (nonatomic) <PSUICircleSegmentedControlDelegate> *delegate;
@property (nonatomic, retain) UILabel *label;

- (void).cxx_destruct;
- (id)_circleImageWithColor:(id)arg1 fillColor:(id)arg2 diameter:(double)arg3;
- (void)addSegmentWithTitle:(id)arg1;
- (id)delegate;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;
- (void)menuButtonPressed;
- (void)segmentTapped:(id)arg1;
- (void)selectSegmentAtIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPositionConstraintsActive:(bool)arg1 forButtonAtIndex:(unsigned long long)arg2;
- (void)setSelectedSegmentIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
