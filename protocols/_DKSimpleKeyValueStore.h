/* made by EzioChiu.
 */

@protocol _DKSimpleKeyValueStore

@required

- (NSObject *)objectForKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(NSObject<NSCoding> *)arg1 forKey:(NSString *)arg2;

@end
