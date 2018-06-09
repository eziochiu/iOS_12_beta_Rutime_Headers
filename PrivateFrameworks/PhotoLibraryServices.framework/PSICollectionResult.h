/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSICollectionResult : NSObject <NSCopying> {
    PSIDate * _endDate;
    NSString * _keyAssetUUID;
    unsigned long long  _numberOfAssets;
    NSDate * _sortDate;
    PSIDate * _startDate;
    NSString * _subtitle;
    NSString * _title;
    unsigned long long  _type;
    NSString * _uuid;
}

@property (nonatomic, readonly) PSIDate *endDate;
@property (nonatomic, copy) NSString *keyAssetUUID;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly, copy) NSDate *sortDate;
@property (nonatomic, readonly) PSIDate *startDate;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endDate;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAssetUUID:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9;
- (id)keyAssetUUID;
- (unsigned long long)numberOfAssets;
- (void)setKeyAssetUUID:(id)arg1;
- (id)sortDate;
- (id)startDate;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;
- (id)uuid;

@end
