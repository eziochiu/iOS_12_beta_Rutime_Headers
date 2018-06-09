/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKServiceProviderOrder : NSObject <NSSecureCoding> {
    NSData * _appletValue;
    NSString * _identifier;
    NSString * _itemDescription;
    unsigned long long  _paymentInstrumentType;
    NSDictionary * _serviceProviderData;
    NSString * _serviceProviderIdentifier;
}

@property (nonatomic, copy) NSData *appletValue;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *itemDescription;
@property (nonatomic) unsigned long long paymentInstrumentType;
@property (nonatomic, copy) NSDictionary *serviceProviderData;
@property (nonatomic, copy) NSString *serviceProviderIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_itemDictionary;
- (id)_paymentInstrumentDictionary;
- (id)appletValue;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemDescription;
- (unsigned long long)paymentInstrumentType;
- (id)serviceProviderData;
- (id)serviceProviderIdentifier;
- (void)setAppletValue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItemDescription:(id)arg1;
- (void)setPaymentInstrumentType:(unsigned long long)arg1;
- (void)setServiceProviderData:(id)arg1;
- (void)setServiceProviderIdentifier:(id)arg1;

@end
