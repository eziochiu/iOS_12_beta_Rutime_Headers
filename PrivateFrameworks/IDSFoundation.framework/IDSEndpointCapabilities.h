/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSEndpointCapabilities : NSObject <NSSecureCoding> {
    NSDictionary * _capabilitiesMap;
}

+ (bool)supportsSecureCoding;
+ (id)validCapabilityKeys;

- (void).cxx_destruct;
- (id)_capabilitiesMapFromClientDeviceData:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapabilitiesMap:(id)arg1;
- (id)initWithClientDeviceData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForCapability:(id)arg1;

@end
