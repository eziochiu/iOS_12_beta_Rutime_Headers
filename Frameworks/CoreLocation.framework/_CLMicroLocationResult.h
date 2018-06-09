/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface _CLMicroLocationResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domain;
    _CLMicroLocation * _microlocation;
    double  _probability;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) _CLMicroLocation *microlocation;
@property (nonatomic, readonly) double probability;

+ (id)microLocationResultWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMicroLocation:(id)arg1 probability:(double)arg2;
- (id)initWithMicroLocation:(id)arg1 probability:(double)arg2 domain:(id)arg3;
- (id)jsonObject;
- (id)microlocation;
- (double)probability;

@end
