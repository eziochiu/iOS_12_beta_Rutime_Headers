/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUILabelStackTemplateView : SiriUIBaseTemplateView {
    UIView * _bottomView;
    NSLayoutConstraint * _bottomViewConstraint;
    NSMutableDictionary * _componentsForViews;
    bool  _constraintsUpdated;
    UILayoutGuide * _contentBoundsGuide;
    NSDictionary * _contentBoundsGuideConstraints;
    long long  _defaultTextAlignment;
    <SiriUILabelStackTemplateViewDelegate> * _delegate;
    UIStackView * _leadingViews;
    UILayoutGuide * _stackedComponentsBoundsGuide;
    NSMutableDictionary * _stackedComponentsGuideConstraints;
    UIView * _topView;
    NSLayoutConstraint * _topViewConstraint;
    UIStackView * _trailingViews;
}

@property (nonatomic, retain) UIView *bottomView;
@property (nonatomic) NSLayoutConstraint *bottomViewConstraint;
@property (nonatomic, retain) NSMutableDictionary *componentsForViews;
@property (nonatomic) bool constraintsUpdated;
@property (nonatomic, retain) UILayoutGuide *contentBoundsGuide;
@property (nonatomic, retain) NSDictionary *contentBoundsGuideConstraints;
@property (nonatomic) <SiriUILabelStackTemplateModel> *dataSource;
@property (nonatomic) long long defaultTextAlignment;
@property (nonatomic) <SiriUILabelStackTemplateViewDelegate> *delegate;
@property (nonatomic, retain) UIStackView *leadingViews;
@property (nonatomic, retain) UILayoutGuide *stackedComponentsBoundsGuide;
@property (nonatomic, retain) NSMutableDictionary *stackedComponentsGuideConstraints;
@property (nonatomic, retain) UIView *topView;
@property (nonatomic) NSLayoutConstraint *topViewConstraint;
@property (nonatomic, retain) UIStackView *trailingViews;

- (void).cxx_destruct;
- (void)_createContentLayoutGuides;
- (void)_updateTopAndBottomViewConstraints;
- (id)bottomView;
- (id)bottomViewConstraint;
- (id)componentsForViews;
- (bool)constraintsUpdated;
- (id)contentBoundsGuide;
- (id)contentBoundsGuideConstraints;
- (long long)defaultTextAlignment;
- (id)delegate;
- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;
- (void)insertLeadingView:(id)arg1 withMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)insertTopView:(id)arg1;
- (void)insertTrailingView:(id)arg1 withMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (long long)layoutStyle;
- (id)leadingViews;
- (void)populateStack;
- (void)reloadData;
- (void)removeFromTemplatedSuperview;
- (void)setBottomView:(id)arg1;
- (void)setBottomViewConstraint:(id)arg1;
- (void)setComponentsForViews:(id)arg1;
- (void)setConstraintsUpdated:(bool)arg1;
- (void)setContentBoundsGuide:(id)arg1;
- (void)setContentBoundsGuideConstraints:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDefaultTextAlignment:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeadingViews:(id)arg1;
- (void)setStackedComponentsBoundsGuide:(id)arg1;
- (void)setStackedComponentsGuideConstraints:(id)arg1;
- (void)setTemplatedSuperview:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)setTopViewConstraint:(id)arg1;
- (void)setTrailingViews:(id)arg1;
- (id)stackedComponentsBoundsGuide;
- (id)stackedComponentsGuideConstraints;
- (id)topView;
- (id)topViewConstraint;
- (id)trailingViews;
- (void)updateConstraints;

@end
