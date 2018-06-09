/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNetServiceEndpoint : NSObject {
    CUBonjourDevice * _bonjourDevice;
    NSString * _identifier;
    NSString * _name;
    CUNANEndpoint * _nanEndpoint;
    NSDictionary * _serviceInfo;
    NSString * _serviceType;
}

@property (nonatomic, retain) CUBonjourDevice *bonjourDevice;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) CUNANEndpoint *nanEndpoint;
@property (nonatomic, readonly, copy) NSDictionary *serviceInfo;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (id)bonjourDevice;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)identifier;
- (id)name;
- (id)nanEndpoint;
- (id)serviceInfo;
- (id)serviceType;
- (void)setBonjourDevice:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNanEndpoint:(id)arg1;
- (void)setServiceType:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithNANEndpoint:(id)arg1;

@end
