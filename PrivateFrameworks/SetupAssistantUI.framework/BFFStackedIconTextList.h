/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFStackedIconTextList : UIView {
    double  _iconTextPadding;
    double  _itemSpacing;
    unsigned long long  _numberOfEntries;
}

@property (nonatomic) double iconTextPadding;
@property (nonatomic, readonly) unsigned long long numberOfEntries;

- (void)_layoutForWidth:(double)arg1;
- (void)addEntryWithIcon:(id)arg1 attributedText:(id)arg2;
- (void)addEntryWithIcon:(id)arg1 text:(id)arg2;
- (void)addSubview:(id)arg1;
- (double)heightForWidth:(double)arg1;
- (double)iconTextPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfEntries;
- (void)setIconTextPadding:(double)arg1;
- (void)setSpacingToMakeOffsetOverlapListItem:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
