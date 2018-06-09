/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGift : NSObject <NSCopying> {
    long long  _category;
    NSDate * _deliveryDate;
    long long  _giftAmount;
    NSString * _giftAmountString;
    SKUIItem * _item;
    NSString * _message;
    NSArray * _recipientAddresses;
    NSString * _senderEmailAddress;
    NSString * _senderName;
    SKUIGiftTheme * _theme;
    NSString * _totalGiftAmountString;
}

@property (nonatomic, copy) NSDate *deliveryDate;
@property (nonatomic) long long giftAmount;
@property (nonatomic, copy) NSString *giftAmountString;
@property (nonatomic, readonly) long long giftCategory;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *recipientAddresses;
@property (nonatomic, copy) NSString *senderEmailAddress;
@property (nonatomic, copy) NSString *senderName;
@property (nonatomic, copy) SKUIGiftTheme *theme;
@property (nonatomic, copy) NSString *totalGiftAmountString;

- (void).cxx_destruct;
- (id)HTTPBodyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deliveryDate;
- (long long)giftAmount;
- (id)giftAmountString;
- (long long)giftCategory;
- (id)initWithGiftCategory:(long long)arg1;
- (id)initWithItem:(id)arg1;
- (id)item;
- (id)message;
- (id)recipientAddresses;
- (void)reset;
- (id)senderEmailAddress;
- (id)senderName;
- (void)setDeliveryDate:(id)arg1;
- (void)setGiftAmount:(long long)arg1;
- (void)setGiftAmountString:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (void)setSenderEmailAddress:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTotalGiftAmountString:(id)arg1;
- (id)theme;
- (id)totalGiftAmountString;

@end
