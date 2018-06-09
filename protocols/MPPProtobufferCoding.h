/* made by EzioChiu.
 */

@protocol MPPProtobufferCoding <NSObject>

@required

- (<MPPProtobufferCoding> *)initWithProtobufferDecodableObject:(PBCodable *)arg1;
- (PBCodable *)protobufferEncodableObject;

@end
