/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject {
    NSString * _cardType;
    NSNumber * _cardTypeCode;
    NSString * _currentStatus;
    bool  _supportsInApp;
}

@property (nonatomic, copy) NSString *cardType;
@property (nonatomic, copy) NSNumber *cardTypeCode;
@property (nonatomic, copy) NSString *currentStatus;
@property (nonatomic) bool supportsInApp;

- (void).cxx_destruct;
- (id)cardType;
- (id)cardTypeCode;
- (id)currentStatus;
- (id)initWithDictionary:(id)arg1;
- (void)setCardType:(id)arg1;
- (void)setCardTypeCode:(id)arg1;
- (void)setCurrentStatus:(id)arg1;
- (void)setSupportsInApp:(bool)arg1;
- (bool)supportsInApp;

@end
