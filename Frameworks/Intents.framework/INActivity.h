/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INActivity : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _activityDescriptors;
    NSString * _activityType;
}

@property (nonatomic, readonly, copy) NSArray *activityDescriptors;
@property (nonatomic, readonly, copy) NSString *activityType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)activityDescriptors;
- (id)activityType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivityType:(id)arg1 activityDescriptors:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
