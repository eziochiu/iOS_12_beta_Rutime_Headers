/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5SpeedTestResult : NSObject <NSCopying, NSSecureCoding> {
    long long  _direction;
    NSError * _error;
    CLLocation * _location;
    long long  _size;
    double  _speed;
}

@property (nonatomic) long long direction;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic) long long size;
@property (nonatomic) double speed;

+ (bool)supportsSecureCoding;

- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (void)setDirection:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setSpeed:(double)arg1;
- (long long)size;
- (double)speed;

@end
