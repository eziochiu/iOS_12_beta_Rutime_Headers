/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.DiscoveredDevice : NSObject <NSSecureCoding> {
    void deviceName;
    void discoveryId;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *discoveryId;
@property (nonatomic, readonly) long long hashValue;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)deviceName;
- (id)discoveryId;
- (void)encodeWithCoder:(id)arg1;
- (long long)hashValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 discoveryId:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
