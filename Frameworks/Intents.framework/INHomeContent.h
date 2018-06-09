/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INHomeContent : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actions;
    INHomeFilter * _filter;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) INHomeFilter *filter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilter:(id)arg1 actions:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
