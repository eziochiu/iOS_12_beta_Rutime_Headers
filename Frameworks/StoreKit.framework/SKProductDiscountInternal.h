/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductDiscountInternal : NSObject {
    unsigned long long  _numberOfPeriods;
    unsigned long long  _paymentMode;
    NSDecimalNumber * _price;
    NSLocale * _priceLocale;
    SKProductSubscriptionPeriod * _subscriptionPeriod;
}

- (void).cxx_destruct;

@end
