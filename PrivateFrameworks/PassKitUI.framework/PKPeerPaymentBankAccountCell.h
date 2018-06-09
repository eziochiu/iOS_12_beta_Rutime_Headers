/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentBankAccountCell : UITableViewCell {
    NSString * _accountNumber;
    NSString * _bankName;
    UIView * _bottomSeperator;
    UIButton * _editButton;
    UIView * _topSeperator;
}

@property (nonatomic, copy) NSString *accountNumber;
@property (nonatomic, copy) NSString *bankName;
@property (nonatomic, readonly) UIButton *editButton;

+ (double)cellHeight;

- (void).cxx_destruct;
- (id)accountNumber;
- (id)bankName;
- (id)editButton;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setAccountNumber:(id)arg1;
- (void)setBankName:(id)arg1;

@end
