/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView {
    SEL  _action;
    NSLayoutConstraint * _baselineToBaselineConstraint;
    NSLayoutConstraint * _baselineToBottomConstraint;
    NSLayoutConstraint * _baselineToTopConstraint;
    NSArray * _constraints;
    bool  _contentChanged;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconDisplaySize;
    NSLayoutConstraint * _iconHeightConstraint;
    NSLayoutConstraint * _iconWidthConstraint;
    NSString * _providerName;
    _MKUILabel * _sectionHeaderLabel;
    NSLayoutConstraint * _seeMoreBaselineConstraint;
    _MKRightImageButton * _seeMoreButton;
    NSArray * _seeMoreButtonConstraints;
    NSString * _seeMoreButtonText;
    NSLayoutConstraint * _seeMoreCenterYConstraint;
    bool  _showSeeMoreButton;
    id  _target;
    double  _width;
}

@property (nonatomic) SEL action;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) struct CGSize { double x1; double x2; } iconDisplaySize;
@property (nonatomic, retain) NSString *providerName;
@property (nonatomic, retain) _MKUILabel *sectionHeaderLabel;
@property (nonatomic, retain) _MKRightImageButton *seeMoreButton;
@property (nonatomic, retain) NSArray *seeMoreButtonConstraints;
@property (nonatomic, retain) NSString *seeMoreButtonText;
@property (nonatomic) bool showSeeMoreButton;
@property (nonatomic) id target;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (SEL)action;
- (id)constraints;
- (void)contentSizeDidChange;
- (void)createConstraints;
- (id)icon;
- (struct CGSize { double x1; double x2; })iconDisplaySize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)providerName;
- (id)sectionHeaderLabel;
- (id)seeMoreButton;
- (id)seeMoreButtonConstraints;
- (id)seeMoreButtonText;
- (void)setAction:(SEL)arg1;
- (void)setConstraints:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProviderName:(id)arg1;
- (void)setSectionHeaderLabel:(id)arg1;
- (void)setSeeMoreButton:(id)arg1;
- (void)setSeeMoreButtonConstraints:(id)arg1;
- (void)setSeeMoreButtonText:(id)arg1;
- (void)setShowSeeMoreButton:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setTitle:(id)arg1;
- (bool)shouldStack;
- (bool)showSeeMoreButton;
- (id)target;
- (id)title;
- (void)updateConstraints;
- (void)updateContent;

@end
