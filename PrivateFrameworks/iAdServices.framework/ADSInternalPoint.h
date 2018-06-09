/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADSInternalPoint : NSObject <NSCopying, NSSecureCoding> {
    float  _x;
    float  _y;
}

@property (nonatomic) float x;
@property (nonatomic) float y;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (float)x;
- (float)y;

@end
