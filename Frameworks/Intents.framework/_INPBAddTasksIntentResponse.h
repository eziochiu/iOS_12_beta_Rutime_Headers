/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAddTasksIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBAddTasksIntentResponse> {
    NSArray * _addedTasks;
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBTaskList * _modifiedTaskList;
}

@property (nonatomic, copy) NSArray *addedTasks;
@property (nonatomic, readonly) unsigned long long addedTasksCount;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasModifiedTaskList;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBTaskList *modifiedTaskList;
@property (readonly) Class superclass;

+ (Class)addedTasksType;

- (void).cxx_destruct;
- (void)addAddedTasks:(id)arg1;
- (id)addedTasks;
- (id)addedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)addedTasksCount;
- (id)associatedCodableAttribute;
- (void)clearAddedTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasModifiedTaskList;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)modifiedTaskList;
- (bool)readFrom:(id)arg1;
- (void)setAddedTasks:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setModifiedTaskList:(id)arg1;
- (void)writeTo:(id)arg1;

@end
