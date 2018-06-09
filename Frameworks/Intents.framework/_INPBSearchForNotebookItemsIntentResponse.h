/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForNotebookItemsIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSearchForNotebookItemsIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int sortType : 1; 
    }  _has;
    NSArray * _notes;
    int  _sortType;
    NSArray * _taskLists;
    NSArray * _tasks;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSortType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *notes;
@property (nonatomic, readonly) unsigned long long notesCount;
@property (nonatomic) int sortType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *taskLists;
@property (nonatomic, readonly) unsigned long long taskListsCount;
@property (nonatomic, copy) NSArray *tasks;
@property (nonatomic, readonly) unsigned long long tasksCount;

+ (Class)notesType;
+ (Class)taskListsType;
+ (Class)tasksType;

- (void).cxx_destruct;
- (int)StringAsSortType:(id)arg1;
- (void)addNotes:(id)arg1;
- (void)addTaskLists:(id)arg1;
- (void)addTasks:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearNotes;
- (void)clearTaskLists;
- (void)clearTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasSortType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)notes;
- (id)notesAtIndex:(unsigned long long)arg1;
- (unsigned long long)notesCount;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasSortType:(bool)arg1;
- (void)setNotes:(id)arg1;
- (void)setSortType:(int)arg1;
- (void)setTaskLists:(id)arg1;
- (void)setTasks:(id)arg1;
- (int)sortType;
- (id)sortTypeAsString:(int)arg1;
- (id)taskLists;
- (id)taskListsAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskListsCount;
- (id)tasks;
- (id)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;
- (void)writeTo:(id)arg1;

@end
