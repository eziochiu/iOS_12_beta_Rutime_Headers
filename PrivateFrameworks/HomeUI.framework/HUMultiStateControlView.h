/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUMultiStateControlView : UIView <HUControlView> {
    <HUControlViewDelegate> * _delegate;
    NSString * _identifier;
    NSMutableArray * _possibleValues;
    UISegmentedControl * _segmentedControl;
}

@property (nonatomic) bool canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUControlViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSArray *possibleValues;
@property (nonatomic, readonly) UISegmentedControl *segmentedControl;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;

+ (Class)valueClass;

- (void).cxx_destruct;
- (void)_selectedIndexChanged:(id)arg1;
- (void)addPossibleValue:(id)arg1 withImage:(id)arg2;
- (void)addPossibleValue:(id)arg1 withTitle:(id)arg2;
- (id)delegate;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDisabled;
- (id)possibleValues;
- (id)segmentedControl;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
