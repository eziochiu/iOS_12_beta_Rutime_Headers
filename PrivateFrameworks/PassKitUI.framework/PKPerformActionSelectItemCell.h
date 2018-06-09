/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPerformActionSelectItemCell : UITableViewCell {
    UILabel * _amountLabel;
    NSString * _amountText;
    UILabel * _descriptionLabel;
    NSString * _descriptionText;
}

@property (nonatomic, copy) NSString *amountText;
@property (nonatomic, copy) NSString *descriptionText;

- (void).cxx_destruct;
- (void)_addSubviews;
- (id)amountText;
- (id)descriptionText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setAmountText:(id)arg1;
- (void)setDescriptionText:(id)arg1;

@end
