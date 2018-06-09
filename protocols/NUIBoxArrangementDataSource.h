/* made by EzioChiu.
 */

@protocol NUIBoxArrangementDataSource <NSObject>

@required

- (<NUIArrangementItem> *)boxArrangement:(NUIBoxArrangement *)arg1 itemAtIndex:(long long)arg2 horizontalAlignment:(long long*)arg3 verticalAlignment:(long long*)arg4;
- (long long)numberOfItemsInBoxArrangement:(NUIBoxArrangement *)arg1;

@end
