/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIAddAllTableViewCell : UITableViewCell {
    UIButton * _addAllButton;
    NSLayoutConstraint * _bottomMarginConstraint;
    <SGUIAddAllTableViewCellDelegate> * _delegate;
    NSLayoutConstraint * _topMarginConstraint;
}

@property (nonatomic) <SGUIAddAllTableViewCellDelegate> *delegate;

+ (double)bottomMarginConstant;
+ (id)buttonTitleFont;
+ (double)topMarginConstant;

- (void).cxx_destruct;
- (void)_addAllButtonTapped:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
