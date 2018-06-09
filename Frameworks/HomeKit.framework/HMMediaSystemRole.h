/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaSystemRole : NSObject <NSSecureCoding> {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)leftRole;
+ (id)rightRole;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRole:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)serialize;
- (unsigned long long)type;

@end
