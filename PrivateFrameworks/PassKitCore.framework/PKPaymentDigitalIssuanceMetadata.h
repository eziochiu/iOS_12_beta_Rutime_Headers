/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDigitalIssuanceMetadata : NSObject {
    NSString * _action;
    NSString * _merchantID;
    NSArray * _serviceProviderCapabilities;
    NSString * _serviceProviderCountryCode;
    NSDictionary * _serviceProviderDict;
    NSString * _serviceProviderIdentifier;
    NSArray * _serviceProviderSupportedNetworks;
}

@property (nonatomic, readonly, copy) NSString *action;
@property (nonatomic, readonly, copy) NSString *merchantID;
@property (nonatomic, readonly, copy) NSArray *serviceProviderCapabilities;
@property (nonatomic, readonly, copy) NSString *serviceProviderCountryCode;
@property (nonatomic, readonly, copy) NSDictionary *serviceProviderDict;
@property (nonatomic, readonly, copy) NSString *serviceProviderIdentifier;
@property (nonatomic, readonly, copy) NSArray *serviceProviderSupportedNetworks;

- (void).cxx_destruct;
- (id)action;
- (id)initWithDictionary:(id)arg1;
- (id)merchantID;
- (id)serviceProviderCapabilities;
- (id)serviceProviderCountryCode;
- (id)serviceProviderDict;
- (id)serviceProviderIdentifier;
- (id)serviceProviderSupportedNetworks;

@end
