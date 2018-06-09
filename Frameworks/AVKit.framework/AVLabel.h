/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVLabel : UIView {
    bool  _collapsed;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    UIFont * _font;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    bool  _included;
    UILabel * _label;
    UIActivityIndicatorView * _loadingIndicator;
    long long  _loadingIndicatorAlignment;
    NSLayoutConstraint * _loadingIndicatorLeftAlignmentConstraint;
    NSLayoutConstraint * _loadingIndicatorRightAlignmentConstraint;
    bool  _showsLoadingIndicator;
    NSString * _text;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UILabel *labelIfLoaded;
@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic) long long loadingIndicatorAlignment;
@property (nonatomic, retain) NSLayoutConstraint *loadingIndicatorLeftAlignmentConstraint;
@property (nonatomic, retain) NSLayoutConstraint *loadingIndicatorRightAlignmentConstraint;
@property (nonatomic) bool showsLoadingIndicator;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (id)font;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (id)label;
- (id)labelIfLoaded;
- (id)loadingIndicator;
- (long long)loadingIndicatorAlignment;
- (id)loadingIndicatorLeftAlignmentConstraint;
- (id)loadingIndicatorRightAlignmentConstraint;
- (void)setCollapsed:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setLoadingIndicatorAlignment:(long long)arg1;
- (void)setLoadingIndicatorLeftAlignmentConstraint:(id)arg1;
- (void)setLoadingIndicatorRightAlignmentConstraint:(id)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)showsLoadingIndicator;
- (id)text;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
