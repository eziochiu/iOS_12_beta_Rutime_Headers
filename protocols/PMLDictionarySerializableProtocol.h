/* made by EzioChiu.
 */

@protocol PMLDictionarySerializableProtocol <NSObject>

@required

- (id)initFromDictionary:(NSDictionary *)arg1;
- (NSDictionary *)toDictionary;

@end
