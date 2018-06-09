/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLocationShareBalloonView : CKImageBalloonView {
    UIImageView * _chevron;
    UIView * _horizontalSeparator;
    UIButton * _ignoreButton;
    UILabel * _locationLabel;
    NSString * _locationString;
    long long  _offerState;
    UIButton * _startSharingButton;
    UILabel * _titleLabel;
    NSString * _titleString;
    UIView * _verticalSeparator;
}

@property (nonatomic, retain) UIImageView *chevron;
@property (nonatomic) <CKLocationShareBalloonViewDelegate> *delegate;
@property (nonatomic, retain) UIView *horizontalSeparator;
@property (nonatomic, retain) UIButton *ignoreButton;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic, copy) NSString *locationString;
@property (nonatomic) long long offerState;
@property (nonatomic, retain) UIButton *startSharingButton;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleString;
@property (nonatomic, retain) UIView *verticalSeparator;

- (void).cxx_destruct;
- (void)_ignoreButtonHit:(id)arg1;
- (void)_shareButtonHit:(id)arg1;
- (id)chevron;
- (void)configureForLocationShareOfferChatItem:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)horizontalSeparator;
- (id)ignoreButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)locationLabel;
- (id)locationString;
- (long long)offerState;
- (void)prepareForDisplay;
- (void)setChevron:(id)arg1;
- (void)setHorizontalSeparator:(id)arg1;
- (void)setIgnoreButton:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationString:(id)arg1;
- (void)setOfferState:(long long)arg1;
- (void)setStartSharingButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setVerticalSeparator:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)startSharingButton;
- (id)titleLabel;
- (id)titleString;
- (id)verticalSeparator;

@end
