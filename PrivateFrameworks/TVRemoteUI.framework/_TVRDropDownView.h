/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRDropDownView : UIView <UITableViewDataSource, UITableViewDelegate> {
    double  _baseHeight;
    <_TVRDropDownViewDelegate> * _delegate;
    NSArray * _devices;
    UIViewPropertyAnimator * _hideAnimator;
    bool  _isDevicePickerShowing;
    UIViewPropertyAnimator * _showAnimator;
    UITableView * _tableView;
    UIView * _tableViewBottomSeperator;
    UIView * _tableViewTopSeperator;
    UIView * _tableViewWrapper;
    NSString * _title;
    _TVRMaterialViewDropDownButton * _titleButton;
    UIView * _titleView;
}

@property (nonatomic) double baseHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVRDropDownViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDevicePickerShowing, nonatomic, readonly) bool devicePickerShowing;
@property (nonatomic, retain) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewPropertyAnimator *hideAnimator;
@property (nonatomic) bool isDevicePickerShowing;
@property (nonatomic, retain) UIViewPropertyAnimator *showAnimator;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UIView *tableViewBottomSeperator;
@property (nonatomic, retain) UIView *tableViewTopSeperator;
@property (nonatomic, retain) UIView *tableViewWrapper;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) _TVRMaterialViewDropDownButton *titleButton;
@property (nonatomic, retain) UIView *titleView;

- (void).cxx_destruct;
- (bool)_accessibilityFontSizesEnabled;
- (double)_calculatedContentHeight;
- (double)_contentHeightForPreferredContentSizeCategory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_preferredTableViewFrameWhenExpanded:(bool)arg1;
- (void)_toggleState;
- (double)baseHeight;
- (id)delegate;
- (id)devices;
- (void)didChangeToExpanded:(bool)arg1;
- (void)didTapWrapperView:(id)arg1;
- (id)hideAnimator;
- (id)initWithBaseHeight:(double)arg1;
- (bool)isDevicePickerShowing;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBaseHeight:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setHideAnimator:(id)arg1;
- (void)setIsDevicePickerShowing:(bool)arg1;
- (void)setShowAnimator:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTableViewBottomSeperator:(id)arg1;
- (void)setTableViewTopSeperator:(id)arg1;
- (void)setTableViewWrapper:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleButton:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)showAnimator;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableViewBottomSeperator;
- (id)tableViewTopSeperator;
- (id)tableViewWrapper;
- (id)title;
- (id)titleButton;
- (id)titleView;
- (void)toggleState;

@end
