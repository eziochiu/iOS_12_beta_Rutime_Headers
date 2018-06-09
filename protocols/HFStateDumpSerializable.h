/* made by EzioChiu.
 */

@protocol HFStateDumpSerializable <NSObject>

@required

- (<HFPropertyListConvertible> *)hf_serializedStateDumpRepresentation;

@end
