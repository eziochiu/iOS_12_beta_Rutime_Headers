/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection {
    double  _footerHeight;
    NSString * _footerString;
    SKUIGift * _gift;
    SKUIGiftTextTableViewCell * _messageCell;
    UITextView * _messagingTextView;
    SKUIGiftRecipientTableViewCell * _recipientTableViewCell;
    <UITextFieldDelegate> * _textFieldDelegate;
    double  _textViewCellHeight;
}

@property (nonatomic, retain) SKUIGift *gift;
@property (nonatomic, retain) SKUIGiftTextTableViewCell *messageCell;
@property (nonatomic) <UITextFieldDelegate> *textFieldDelegate;

- (void).cxx_destruct;
- (id)_attributedPlaceholderWithString:(id)arg1;
- (id)_footerString;
- (id)_recipientTableViewCell;
- (id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (id)gift;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithGiftConfiguration:(id)arg1;
- (id)messageCell;
- (long long)numberOfRowsInSection;
- (void)setGift:(id)arg1;
- (void)setMessageCell:(id)arg1;
- (void)setTextFieldDelegate:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)textFieldDelegate;

@end
