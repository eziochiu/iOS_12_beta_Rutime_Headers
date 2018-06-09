/* made by EzioChiu.
 */

@protocol AVTAvatarRecordDataSourceObserver <NSObject>

@optional

- (void)dataSource:(AVTAvatarRecordDataSource *)arg1 didAddRecord:(id <AVTAvatarRecord>)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(AVTAvatarRecordDataSource *)arg1 didEditRecord:(id <AVTAvatarRecord>)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(AVTAvatarRecordDataSource *)arg1 didRemoveRecord:(id <AVTAvatarRecord>)arg2 atIndex:(unsigned long long)arg3;

@end
