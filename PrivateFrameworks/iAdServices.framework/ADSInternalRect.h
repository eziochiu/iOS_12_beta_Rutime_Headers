/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADSInternalRect : NSObject <NSCopying, NSSecureCoding> {
    ADSInternalPoint * _origin;
    ADSInternalSize * _size;
}

@property (nonatomic, retain) ADSInternalPoint *origin;
@property (nonatomic, retain) ADSInternalSize *size;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (bool)isEqual:(id)arg1;
- (id)origin;
- (void)setOrigin:(id)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end
