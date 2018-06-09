/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDeviceOffer : NSObject {
    NSNumber * _adamId;
    NSString * _description;
    bool  _downgrading;
    NSString * _offerIdentifier;
    unsigned long long  _productType;
    bool  _subscribed;
}

@property (nonatomic, copy) NSNumber *adamId;
@property (nonatomic, copy) NSString *description;
@property (getter=isDowngrading, nonatomic) bool downgrading;
@property (nonatomic, copy) NSString *offerIdentifier;
@property (nonatomic, readonly) unsigned long long offerType;
@property (nonatomic) unsigned long long productType;
@property (getter=isSubscribed, nonatomic) bool subscribed;

- (void).cxx_destruct;
- (id)adamId;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAdamId:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isDowngrading;
- (bool)isEqual:(id)arg1;
- (bool)isSubscribed;
- (id)offerIdentifier;
- (unsigned long long)offerType;
- (unsigned long long)productType;
- (void)setAdamId:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setDowngrading:(bool)arg1;
- (void)setOfferIdentifier:(id)arg1;
- (void)setProductType:(unsigned long long)arg1;
- (void)setSubscribed:(bool)arg1;

@end
