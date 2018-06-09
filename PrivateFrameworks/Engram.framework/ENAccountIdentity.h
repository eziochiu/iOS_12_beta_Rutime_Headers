/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENAccountIdentity : NSObject <NSSecureCoding> {
    <ENAccountKey> * _accountKey;
    <ENDeviceKey> * _deviceKey;
}

@property (nonatomic, retain) <ENAccountKey> *accountKey;
@property (nonatomic, retain) <ENDeviceKey> *deviceKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountKey;
- (id)deviceKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountKey:(id)arg1 deviceKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setAccountKey:(id)arg1;
- (void)setDeviceKey:(id)arg1;

@end
