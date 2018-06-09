/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLFloor : NSObject <NSCopying, NSSecureCoding> {
    long long  level;
}

@property (nonatomic, readonly) long long level;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLevel:(long long)arg1;
- (long long)level;

@end
