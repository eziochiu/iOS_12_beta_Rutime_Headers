/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.VoiceAssistantDeviceName : NSObject <NSSecureCoding> {
    void deviceName;
    void ownerFirstName;
    void ownerLastName;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) long long hashValue;
@property (nonatomic, readonly) NSString *ownerFirstName;
@property (nonatomic, readonly) NSString *ownerLastName;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (long long)hashValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 ownerFirstName:(id)arg2 ownerLastName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)ownerFirstName;
- (id)ownerLastName;

@end
