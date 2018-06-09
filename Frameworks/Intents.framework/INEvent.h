/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INEvent : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _eventDescriptors;
    NSString * _eventType;
}

@property (nonatomic, readonly, copy) NSArray *eventDescriptors;
@property (nonatomic, readonly, copy) NSString *eventType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDescriptors;
- (id)eventType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(id)arg1 eventDescriptors:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
