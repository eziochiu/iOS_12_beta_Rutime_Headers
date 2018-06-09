/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADSInternalSize : NSObject <NSCopying, NSSecureCoding> {
    float  _height;
    float  _width;
}

@property (nonatomic) float height;
@property (nonatomic) float width;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
- (bool)isEqual:(id)arg1;
- (void)setHeight:(float)arg1;
- (void)setWidth:(float)arg1;
- (float)width;

@end
