/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIconsRowView : UIView <NUIArrangementContainer, NUIGridArrangementDataSource> {
    NUIGridArrangement * _arrangment;
    NSMutableArray * _buttons;
    NSMutableArray * _endsSpacingHelpers;
    NSMutableArray * _itemAtIndex;
    NSMutableArray * _labels;
    NSMutableArray * _spacerDebuggerViews;
    NSMutableArray * _spacingHelpers;
    unsigned long long  _style;
}

@property (nonatomic, retain) NUIGridArrangement *arrangment;
@property (nonatomic, retain) NSMutableArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *endsSpacingHelpers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *itemAtIndex;
@property (nonatomic, retain) NSMutableArray *labels;
@property (nonatomic, retain) NSMutableArray *spacerDebuggerViews;
@property (nonatomic, retain) NSMutableArray *spacingHelpers;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

+ (id)appLabelWithStyle:(unsigned long long)arg1;
+ (double)numberOfIcons;

- (void).cxx_destruct;
- (id)arrangment;
- (id)buttons;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (id)endsSpacingHelpers;
- (double)gridArrangement:(id)arg1 heightOfRowAtIndex:(long long)arg2 spacingAfter:(double*)arg3;
- (id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6;
- (id)init;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)itemAtIndex;
- (id)labels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)layoutSubviews;
- (long long)numberOfItemsInGridArrangement:(id)arg1;
- (void)setArrangment:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setEndsSpacingHelpers:(id)arg1;
- (void)setItemAtIndex:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setSpacerDebuggerViews:(id)arg1;
- (void)setSpacingHelpers:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spacerDebuggerViews;
- (id)spacingHelpers;
- (unsigned long long)style;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithResultsForRow:(id)arg1;

@end
