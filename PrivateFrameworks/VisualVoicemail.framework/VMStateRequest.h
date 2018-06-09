/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMStateRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _destination;
    long long  _identifier;
    NSString * _message;
    NSString * _serviceCenter;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *serviceCenter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(id)arg1 serviceCenter:(id)arg2;
- (id)initWithStateRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStateRequest:(id)arg1;
- (id)message;
- (id)serviceCenter;

@end
