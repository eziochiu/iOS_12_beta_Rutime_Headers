/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCUserSegmentationConfiguration : NSObject <NSSecureCoding> {
    NSString * _endpointURLString;
    unsigned long long  _modMax;
    unsigned long long  _modThreshold;
    unsigned long long  _refreshRate;
}

@property (nonatomic, readonly, copy) NSString *endpointURLString;
@property (nonatomic, readonly) unsigned long long modMax;
@property (nonatomic, readonly) unsigned long long modThreshold;
@property (nonatomic, readonly) unsigned long long refreshRate;

+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;
+ (id)userSegmentationConfigurationWithConfigDict:(id)arg1 environment:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointURLString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRefreshRate:(unsigned long long)arg1 modThreshold:(unsigned long long)arg2 modMax:(unsigned long long)arg3 endpointURLString:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)modMax;
- (unsigned long long)modThreshold;
- (unsigned long long)refreshRate;

@end
