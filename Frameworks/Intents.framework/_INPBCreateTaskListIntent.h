/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCreateTaskListIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBCreateTaskListIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBDataString * _groupName;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _taskTitles;
    _INPBDataString * _title;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDataString *groupName;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *taskTitles;
@property (nonatomic, readonly) unsigned long long taskTitlesCount;
@property (nonatomic, retain) _INPBDataString *title;

+ (Class)taskTitlesType;

- (void).cxx_destruct;
- (void)addTaskTitles:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearTaskTitles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)groupName;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTaskTitles:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)taskTitles;
- (id)taskTitlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskTitlesCount;
- (id)title;
- (void)writeTo:(id)arg1;

@end
