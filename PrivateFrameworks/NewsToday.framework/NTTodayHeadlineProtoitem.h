/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTTodayHeadlineProtoitem : NSObject <NTTodayProtoitem> {
    <FCHeadlineProviding> * _headline;
    NSString * _identifier;
    SFSearchResult * _searchResult;
}

@property (nonatomic, readonly, copy) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) SFSearchResult *searchResult;

- (void).cxx_destruct;
- (id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)headline;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 headline:(id)arg2 searchResult:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 assetFileURLsByRemoteURL:(id)arg4 forLeadingCellAppearance:(bool)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6;
- (id)searchResult;

@end
