/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCreditCardData : NSObject {
    NSString * _cardName;
    NSString * _cardNumber;
    NSString * _cardholderName;
    NSDate * _expirationDate;
}

@property (nonatomic, copy) NSString *cardName;
@property (nonatomic, copy) NSString *cardNumber;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, readonly, copy) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)cardName;
- (id)cardNumber;
- (id)cardholderName;
- (id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1;
- (id)description;
- (id)expirationDate;
- (id)initWithCameraReaderOutput:(id)arg1;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4;
- (id)initWithKeychainRepresentation:(id)arg1;
- (id)keychainRepresentation;
- (void)setCardName:(id)arg1;
- (void)setCardNumber:(id)arg1;
- (void)setCardholderName:(id)arg1;

@end
