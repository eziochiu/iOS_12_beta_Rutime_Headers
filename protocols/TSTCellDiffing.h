/* made by EzioChiu.
 */

@protocol TSTCellDiffing

@required

+ (TSSPropertySet *)cellDiffProperties;

- (id)objectByRemovingPropertiesInMap:(TSSPropertyMap *)arg1 addingPropertiesInMap:(TSSPropertyMap *)arg2 updateInverseResetPropertyMap:(TSSPropertyMap *)arg3 updateInverseSetPropertyMap:(TSSPropertyMap *)arg4;

@end
