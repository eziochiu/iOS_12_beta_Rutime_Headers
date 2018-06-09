/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5LogItemRequest : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _configuration;
    long long  _itemID;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic) long long itemID;
@property (nonatomic, copy) NSUUID *uuid;

+ (id)requestWithItemID:(long long)arg1 configuration:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)configuration;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLogItemRequest:(id)arg1;
- (long long)itemID;
- (void)setConfiguration:(id)arg1;
- (void)setItemID:(long long)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
