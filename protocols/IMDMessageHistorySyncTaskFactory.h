/* made by EzioChiu.
 */

@protocol IMDMessageHistorySyncTaskFactory <NSObject>

@required

- (<IMDMessageHistorySyncTask> *)newSyncTaskForType:(unsigned long long)arg1;

@end
