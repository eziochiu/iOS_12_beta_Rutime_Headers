/* made by EzioChiu.
 */

@protocol _CDStringKeyDataValueStoring

@required

- (NSArray *)allKeys;
- (NSData *)dataForKey:(NSString *)arg1;
- (bool)removeDataForKey:(NSString *)arg1;
- (bool)removeDataForKeys:(NSArray *)arg1;
- (bool)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (bool)setData:(void *)arg1 forKey:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
