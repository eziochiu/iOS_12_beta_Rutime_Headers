/* made by EzioChiu.
 */

@protocol NTTodayProtoitem <NFCopying>

@required

- (NSArray *)assetHandlesWithOperationInfo:(id <NTTodayResultOperationInfoProviding>)arg1 forLeadingCellAppearance:(bool)arg2;
- (NSString *)identifier;
- (<NTTodayItem> *)itemWithContentContext:(id <FCContentContext>)arg1 operationInfo:(id <NTTodayResultOperationInfoProviding>)arg2 sectionDescriptor:(id <NTSectionDescriptor>)arg3 assetFileURLsByRemoteURL:(NSMutableDictionary *)arg4 forLeadingCellAppearance:(bool)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6;

@end
