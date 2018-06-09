/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INNote : NSObject <INCacheableContainer, NSCopying, NSSecureCoding> {
    NSArray * _contents;
    NSDateComponents * _createdDateComponents;
    INSpeakableString * _groupName;
    NSString * _identifier;
    NSDateComponents * _modifiedDateComponents;
    INSpeakableString * _title;
}

@property (nonatomic, readonly, copy) NSArray *contents;
@property (nonatomic, readonly, copy) NSDateComponents *createdDateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDateComponents *modifiedDateComponents;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)contents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateComponents;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)modifiedDateComponents;
- (id)title;

@end
