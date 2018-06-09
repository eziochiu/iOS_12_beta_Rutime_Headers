/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSmallCalloutView : NUIContainerStackView <NUIContainerStackViewDelegate> {
    UIView<_MKCalloutAccessoryView> * _detailView;
    UIView<_MKCalloutAccessoryView> * _leftView;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    _MKSmallCalloutPassthroughButton * _maskedContainerView;
    double  _maxWidth;
    NUIContainerStackView * _middleStackView;
    double  _minWidth;
    UIView<_MKCalloutAccessoryView> * _rightView;
    _MKUILabel * _subtitleLabel;
    _MKUILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *calloutSubtitle;
@property (nonatomic, copy) NSString *calloutTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;
@property (nonatomic) double maximumWidth;
@property (nonatomic) double minimumWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, retain) UIView *rightView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *titlesContainerView;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setCalloutSubtitleLabel:(id)arg1 animated:(bool)arg2;
- (void)_updateAccessoryViewStyles;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)detailView;
- (struct CGSize { double x1; double x2; })effectiveLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftView;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (double)maximumWidth;
- (double)minimumWidth;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)reset;
- (id)rightView;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setCalloutTitle:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(bool)arg2;
- (void)setLeftView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(bool)arg2;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (id)titlesContainerView;

@end
