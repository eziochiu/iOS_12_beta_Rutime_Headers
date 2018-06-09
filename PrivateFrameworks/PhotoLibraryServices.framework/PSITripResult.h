/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSITripResult : PSICollectionResult {
    NSArray * _momentUUIDs;
}

@property (nonatomic, readonly, copy) NSArray *momentUUIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTrip:(id)arg1;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAssetUUID:(id)arg6 momentUUIDs:(id)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9;
- (id)momentUUIDs;

@end
