/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTBundle : NSObject <NSCopying, NSSecureCoding> {
    long long  _type;
}

@property (nonatomic) long long type;

+ (unsigned char)convertBundleType:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBundleType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
