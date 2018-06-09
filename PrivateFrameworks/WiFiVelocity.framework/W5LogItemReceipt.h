/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5LogItemReceipt : NSObject <NSCopying, NSSecureCoding> {
    double  _completedAt;
    NSDictionary * _info;
    NSArray * _relativeURLs;
    W5LogItemRequest * _request;
    double  _startedAt;
}

@property (nonatomic) double completedAt;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic, copy) NSArray *relativeURLs;
@property (nonatomic, copy) W5LogItemRequest *request;
@property (nonatomic) double startedAt;

+ (bool)supportsSecureCoding;

- (double)completedAt;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLogItemReceipt:(id)arg1;
- (id)relativeURLs;
- (id)request;
- (void)setCompletedAt:(double)arg1;
- (void)setInfo:(id)arg1;
- (void)setRelativeURLs:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setStartedAt:(double)arg1;
- (double)startedAt;

@end
