/* made by EzioChiu.
 */

@protocol MFMutableDictionaryProtocol <NSObject>

@required

- (unsigned long long)count;
- (id)objectForKey:(NSString *)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;

@end
