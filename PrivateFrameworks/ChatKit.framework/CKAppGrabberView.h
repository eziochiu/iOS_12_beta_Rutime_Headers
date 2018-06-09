/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAppGrabberView : UIView {
    CKAppChevronView * _chevronView;
    UIButton * _closeButton;
    <CKAppGrabberViewDelegate> * _delegate;
    UIView * _grayLine;
    UIView * _headerView;
    UIImageView * _iconImageView;
    UIImageView * _iconOutlineView;
    UILabel * _pluginTitleLabel;
    bool  _roundsTopCorners;
    bool  _showsAppTitle;
}

@property (nonatomic, readonly) double chevronMaxYOffset;
@property (nonatomic, readonly) UIButton *closeButton;
@property (nonatomic) <CKAppGrabberViewDelegate> *delegate;
@property (nonatomic) bool roundsTopCorners;
@property (nonatomic) bool showsAppTitle;
@property (nonatomic) long long state;
@property (nonatomic, readonly) double visualOriginYOffset;

+ (double)compactRoundedCornerRadius;
+ (double)roundedCornerRadius;

- (void).cxx_destruct;
- (double)chevronMaxYInView:(id)arg1;
- (double)chevronMaxYOffset;
- (id)closeButton;
- (void)closeButtonTapped:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)roundsTopCorners;
- (void)setDelegate:(id)arg1;
- (void)setRoundsTopCorners:(bool)arg1;
- (void)setShowsAppTitle:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (bool)showsAppTitle;
- (long long)state;
- (void)updateAppTitle:(id)arg1 icon:(id)arg2;
- (void)updateHeaderFrame:(bool)arg1;
- (double)visualOriginYInView:(id)arg1;
- (double)visualOriginYOffset;

@end
