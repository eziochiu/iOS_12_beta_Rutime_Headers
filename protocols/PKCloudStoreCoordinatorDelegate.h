/* made by EzioChiu.
 */

@protocol PKCloudStoreCoordinatorDelegate <NSObject>

@required

- (void)itemOfItemType:(void *)arg1 recordName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordObject *, NSError *, void*

@end
