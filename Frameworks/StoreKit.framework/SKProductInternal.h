/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductInternal : NSObject {
    NSString * _contentVersion;
    NSArray * _downloadContentLengths;
    bool  _downloadable;
    SKProductDiscount * _introductoryPrice;
    NSString * _localeIdentifier;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSDecimalNumber * _price;
    NSLocale * _priceLocale;
    NSString * _productIdentifier;
    NSString * _subscriptionGroupIdentifier;
    SKProductSubscriptionPeriod * _subscriptionPeriod;
}

- (void).cxx_destruct;

@end
