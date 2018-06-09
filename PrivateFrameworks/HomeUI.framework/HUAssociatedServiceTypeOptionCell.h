/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAssociatedServiceTypeOptionCell : UITableViewCell <HUDisableableCellProtocol> {
    bool  _checked;
    bool  _disabled;
    bool  _suggestion;
    UILabel * _titleLabel;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (getter=isSuggestion, nonatomic) bool suggestion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)colorForCurrentState;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (bool)isDisabled;
- (bool)isSuggestion;
- (void)prepareForReuse;
- (void)setChecked:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setSuggestion:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (id)titleLabel;

@end
