/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIContactSuggestionTableViewCell : UITableViewCell {
    UIButton * _addUpdateButton;
    NSLayoutConstraint * _bottomMarginConstraint;
    <SGUISuggestionTableViewCellDelegate> * _delegate;
    UILabel * _descriptionLabel;
    UIImageView * _iconImageView;
    UIButton * _ignoreButton;
    NSLayoutConstraint * _interLabelAndButtonBaselineConstraint;
    NSLayoutConstraint * _interLabelBaselineDeltaConstraint;
    SGRealtimeContact * _realtimeContact;
    UILabel * _titleLabel;
    NSLayoutConstraint * _topMarginConstraint;
}

@property (nonatomic) <SGUISuggestionTableViewCellDelegate> *delegate;
@property (nonatomic, retain) SGRealtimeContact *realtimeContact;

+ (id)actionButtonTitleForContact:(id)arg1;
+ (double)bottomMarginConstant;
+ (id)buttonTitleFont;
+ (id)descriptionFont;
+ (double)interLabelAndButtonBaselineDeltaConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (id)titleFont;
+ (double)topMarginConstant;

- (void).cxx_destruct;
- (void)_addUpdateButtonTapped:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_ignoreButtonTapped:(id)arg1;
- (void)_setLabelAndButtonFonts;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)realtimeContact;
- (void)setDelegate:(id)arg1;
- (void)setRealtimeContact:(id)arg1;

@end
