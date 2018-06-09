/* made by EzioChiu.
 */

@protocol DNDSBackingStoreRecord <NSObject>

@required

+ (NSArray *)migrateDictionaryRepresentations:(NSArray *)arg1 withVersionNumber:(unsigned long long)arg2;

- (NSDictionary *)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(NSDictionary *)arg1;

@end
