/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSITrip : PSICollection {
    NSArray * _momentUUIDs;
}

@property (nonatomic, copy) NSArray *momentUUIDs;

- (void).cxx_destruct;
- (id)_initForCopy:(bool)arg1;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAsset:(id)arg6 momentUUIDs:(id)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9;
- (id)momentUUIDs;
- (void)setMomentUUIDs:(id)arg1;

@end
