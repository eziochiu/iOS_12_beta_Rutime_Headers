/* made by EzioChiu.
 */

@protocol HFServiceLikeItem <HFHomeKitItemProtocol, HFServiceVendor, NSCopying>

@required

- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
- (<HFCharacteristicValueSource> *)valueSource;

@end
