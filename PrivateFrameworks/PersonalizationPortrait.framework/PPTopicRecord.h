/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPTopicRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _algorithm;
    double  _decayRate;
    unsigned long long  _extractionAssetVersion;
    NSString * _extractionOsBuild;
    double  _initialScore;
    bool  _isLocal;
    PPSource * _source;
    PPTopic * _topic;
}

@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) double decayRate;
@property (nonatomic, readonly) unsigned long long extractionAssetVersion;
@property (nonatomic, readonly) NSString *extractionOsBuild;
@property (nonatomic, readonly) double initialScore;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) PPSource *source;
@property (nonatomic, readonly) PPTopic *topic;

+ (id)describeAlgorithm:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)algorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decayRate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)extractionAssetVersion;
- (id)extractionOsBuild;
- (id)initWithCoder:(id)arg1;
- (double)initialScore;
- (bool)isLocal;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)source;
- (id)topic;

@end
