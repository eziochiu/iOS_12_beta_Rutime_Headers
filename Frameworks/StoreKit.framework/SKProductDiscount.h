/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductDiscount : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) unsigned long long numberOfPeriods;
@property (nonatomic, readonly) unsigned long long paymentMode;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSLocale *priceLocale;
@property (nonatomic, readonly) SKProductSubscriptionPeriod *subscriptionPeriod;

- (void).cxx_destruct;
- (void)_setNumberOfPeriods:(unsigned long long)arg1;
- (void)_setPaymentMode:(unsigned long long)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setSubscriptionPeriod:(id)arg1;
- (id)copyXPCEncoding;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (unsigned long long)numberOfPeriods;
- (unsigned long long)paymentMode;
- (id)price;
- (id)priceLocale;
- (id)subscriptionPeriod;

@end
