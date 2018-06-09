/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsSectionHeaderView : UITableViewHeaderFooterView {
    UIButton * _button;
    NSLayoutConstraint * _buttonCompactTrailingConstraint;
    NSLayoutConstraint * _buttonRegularTrailingConstraint;
    NSLayoutConstraint * _titleCompactLeadingConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleRegularLeadingConstraint;
}

@property (nonatomic, readonly) UIButton *button;
@property (nonatomic, retain) NSLayoutConstraint *buttonCompactTrailingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *buttonRegularTrailingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleCompactLeadingConstraint;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleRegularLeadingConstraint;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)button;
- (id)buttonCompactTrailingConstraint;
- (id)buttonRegularTrailingConstraint;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setButtonCompactTrailingConstraint:(id)arg1;
- (void)setButtonRegularTrailingConstraint:(id)arg1;
- (void)setTitleCompactLeadingConstraint:(id)arg1;
- (void)setTitleRegularLeadingConstraint:(id)arg1;
- (id)titleCompactLeadingConstraint;
- (id)titleLabel;
- (id)titleRegularLeadingConstraint;
- (void)traitCollectionDidChange:(id)arg1;

@end
