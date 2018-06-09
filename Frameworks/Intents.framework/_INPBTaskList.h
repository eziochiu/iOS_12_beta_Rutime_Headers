/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTaskList : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBTaskList> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBDateTime * _createdDateTime;
    _INPBDataString * _groupName;
    struct { }  _has;
    NSString * _identifier;
    _INPBDateTime * _modifiedDateTime;
    NSArray * _tasks;
    _INPBDataString * _title;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBDateTime *createdDateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDataString *groupName;
@property (nonatomic, readonly) bool hasCreatedDateTime;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasModifiedDateTime;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _INPBDateTime *modifiedDateTime;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *tasks;
@property (nonatomic, readonly) unsigned long long tasksCount;
@property (nonatomic, retain) _INPBDataString *title;

+ (Class)tasksType;

- (void).cxx_destruct;
- (void)addTasks:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateTime;
- (id)dictionaryRepresentation;
- (id)groupName;
- (bool)hasCreatedDateTime;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasModifiedDateTime;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)modifiedDateTime;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCreatedDateTime:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModifiedDateTime:(id)arg1;
- (void)setTasks:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tasks;
- (id)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;
- (id)title;
- (void)writeTo:(id)arg1;

@end
