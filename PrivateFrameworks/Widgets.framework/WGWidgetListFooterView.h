/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetListFooterView : UIView <UITextViewDelegate> {
    <WGWidgetListFooterViewDelegate> * _delegate;
    WGShortLookStyleButton * _editButton;
    long long  _layoutMode;
    _UILegibilitySettings * _legibilitySettings;
    WGNewWidgetsButton * _newWidgetsButton;
    UIFont * _referenceFont;
    NSMutableDictionary * _widgetIDsToAttributionViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WGWidgetListFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutMode;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) bool shouldBlurContent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_availableWidgetsUpdated:(id)arg1;
- (id)_referenceFont;
- (void)_updateForContentCategorySizeDidChange;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)delegate;
- (id)groupName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateSubviewGeometery;
- (long long)layoutMode;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setDelegate:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setShouldBlurContent:(bool)arg1;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (bool)shouldBlurContent;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;

@end
