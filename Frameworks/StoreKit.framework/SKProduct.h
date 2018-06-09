/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProduct : NSObject {
    id  _internal;
}

@property (getter=_localeIdentifier, setter=_setLocaleIdentifier:, nonatomic, copy) NSString *_localeIdentifier;
@property (nonatomic, readonly) NSArray *contentLengths;
@property (nonatomic, readonly) NSString *contentVersion;
@property (nonatomic, readonly) NSArray *downloadContentLengths;
@property (nonatomic, readonly) NSString *downloadContentVersion;
@property (getter=isDownloadable, nonatomic, readonly) bool downloadable;
@property (nonatomic, readonly) SKProductDiscount *introductoryPrice;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSLocale *priceLocale;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (nonatomic, readonly) NSString *subscriptionGroupIdentifier;
@property (nonatomic, readonly) SKProductSubscriptionPeriod *subscriptionPeriod;

- (void).cxx_destruct;
- (id)_localeIdentifier;
- (void)_setContentVersion:(id)arg1;
- (void)_setDownloadContentLengths:(id)arg1;
- (void)_setDownloadable:(bool)arg1;
- (void)_setIntroductoryPrice:(id)arg1;
- (void)_setLocale:(id)arg1;
- (void)_setLocaleIdentifier:(id)arg1;
- (void)_setLocalizedDescription:(id)arg1;
- (void)_setLocalizedTitle:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setProductIdentifier:(id)arg1;
- (void)_setSubscriptionGroupIdentifier:(id)arg1;
- (void)_setSubscriptionPeriod:(id)arg1;
- (id)contentLengths;
- (id)contentVersion;
- (id)copyXPCEncoding;
- (id)downloadContentLengths;
- (id)downloadContentVersion;
- (bool)downloadable;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)introductoryPrice;
- (bool)isDownloadable;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)price;
- (id)priceLocale;
- (id)productIdentifier;
- (id)subscriptionGroupIdentifier;
- (id)subscriptionPeriod;

@end
