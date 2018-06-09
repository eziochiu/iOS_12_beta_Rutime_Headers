/* made by EzioChiu.
 */

@protocol _INPBAddTasksIntentResponse <NSObject>

@required

+ (Class)addedTasksType;

- (void)addAddedTasks:(_INPBTask *)arg1;
- (NSArray *)addedTasks;
- (_INPBTask *)addedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)addedTasksCount;
- (void)clearAddedTasks;
- (bool)hasModifiedTaskList;
- (_INPBTaskList *)modifiedTaskList;
- (void)setAddedTasks:(NSArray *)arg1;
- (void)setModifiedTaskList:(_INPBTaskList *)arg1;

@end
