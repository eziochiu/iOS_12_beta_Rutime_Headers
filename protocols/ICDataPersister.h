/* made by EzioChiu.
 */

@protocol ICDataPersister

@required

- (NSData *)loadDataForIdentifier:(NSString *)arg1;
- (bool)saveData:(NSData *)arg1 identifier:(NSString *)arg2;

@end
