/* made by EzioChiu.
 */

@protocol DNDSSyncRecord <NSObject>

@required

- (id)initWithSyncDictionaryRepresentation:(NSDictionary *)arg1;
- (NSDictionary *)syncDictionaryRepresentation;

@end
