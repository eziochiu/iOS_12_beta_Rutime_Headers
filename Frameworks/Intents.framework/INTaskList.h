/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTaskList : NSObject <NSCopying, NSSecureCoding> {
    NSDateComponents * _createdDateComponents;
    INSpeakableString * _groupName;
    NSString * _identifier;
    NSDateComponents * _modifiedDateComponents;
    NSArray * _tasks;
    INSpeakableString * _title;
}

@property (nonatomic, readonly, copy) NSDateComponents *createdDateComponents;
@property (nonatomic, readonly, copy) INSpeakableString *groupName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDateComponents *modifiedDateComponents;
@property (readonly) long long taskListType;
@property (nonatomic, readonly, copy) NSArray *tasks;
@property (nonatomic, readonly, copy) INSpeakableString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateComponents;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;
- (id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 taskListType:(long long)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)modifiedDateComponents;
- (long long)taskListType;
- (id)tasks;
- (id)title;

@end
