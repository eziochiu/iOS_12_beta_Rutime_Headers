/* made by EzioChiu.
 */

@protocol NTKCUpNextDataSourcesManagerIdentifiersDelegate <NSObject>

@required

- (void)manager:(NTKCUpNextDataSourcesManager *)arg1 didUpdateDataSourceIdentifiers:(NSSet *)arg2 donatedIdentifiers:(NSSet *)arg3;

@end
