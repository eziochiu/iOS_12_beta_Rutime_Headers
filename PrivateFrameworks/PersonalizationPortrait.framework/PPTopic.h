/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPTopic : NSObject <NSCopying, NSSecureCoding> {
    NSString * _id;
}

@property (nonatomic, readonly) NSString *id;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTopic:(id)arg1;

@end
