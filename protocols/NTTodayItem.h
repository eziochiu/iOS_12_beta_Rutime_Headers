/* made by EzioChiu.
 */

@protocol NTTodayItem <NSObject, NFCopying>

@required

- (NSString *)identifier;
- (unsigned long long)itemType;

@end
