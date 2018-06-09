/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKServiceProviderPurchase : NSObject <NSSecureCoding> {
    NSArray * _actions;
    NSString * _deviceIdentifier;
    NSString * _identifier;
    NSDate * _purchaseDate;
    PKServiceProviderPurchaseData * _serviceProviderData;
    NSString * _serviceProviderIdentifier;
    NSString * _signature;
    unsigned long long  _state;
    NSString * _visibleTransactionIdentifier;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *purchaseDate;
@property (nonatomic, copy) PKServiceProviderPurchaseData *serviceProviderData;
@property (nonatomic, copy) NSString *serviceProviderIdentifier;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) NSString *visibleTransactionIdentifier;

+ (id)purchaseWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToServiceProviderPurchase:(id)arg1;
- (id)purchaseDate;
- (id)serviceProviderData;
- (id)serviceProviderIdentifier;
- (void)setActions:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setServiceProviderData:(id)arg1;
- (void)setServiceProviderIdentifier:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setVisibleTransactionIdentifier:(id)arg1;
- (id)signature;
- (unsigned long long)state;
- (id)visibleTransactionIdentifier;

@end
