/* made by EzioChiu.
 */

@protocol ItemStylePickerDataSource <NSObject>

@required

- (NSIndexPath *)indexPathOfItemName:(NSString *)arg1;
- (NSString *)itemNameAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfItems;

@optional

- (NSIndexPath *)indexPathOfItemID:(NSString *)arg1;
- (NSString *)itemIDAtIndexPath:(NSIndexPath *)arg1;

@end
