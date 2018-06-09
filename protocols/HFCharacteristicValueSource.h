/* made by EzioChiu.
 */

@protocol HFCharacteristicValueSource <HFCharacteristicValueOperationBatching, NAIdentifiable>

@required

- (id)cachedValueForCharacteristic:(HMCharacteristic *)arg1;
- (NAFuture *)readValuesForCharacteristicTypes:(NSSet *)arg1 inServices:(NSSet *)arg2;
- (NAFuture *)readValuesForCharacteristics:(NSSet *)arg1;
- (NAFuture *)writeValuesForCharacteristics:(HFCharacteristicValueSet *)arg1;

@optional

- (NSError *)cachedErrorForExecutionOfActionSet:(HMActionSet *)arg1;
- (NSError *)cachedErrorForWriteToCharacteristic:(HMCharacteristic *)arg1;
- (<HFCharacteristicOperationContextProviding> *)contextProvider;
- (void)executeActionSet:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMActionSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
