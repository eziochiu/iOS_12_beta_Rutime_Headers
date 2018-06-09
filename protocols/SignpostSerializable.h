/* made by EzioChiu.
 */

@protocol SignpostSerializable <NSObject>

@required

+ (NSNumber *)serializationTypeNumber;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (NSDictionary *)serializeableDictionary;

@end
