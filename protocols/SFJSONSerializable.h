/* made by EzioChiu.
 */

@protocol SFJSONSerializable <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;

@end
