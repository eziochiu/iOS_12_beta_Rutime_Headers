/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSICollection : PSIObject <NSCopying> {
    PSIDate * _endDate;
    PSIAsset * _keyAsset;
    unsigned long long  _numberOfAssets;
    NSDate * _sortDate;
    PSIDate * _startDate;
    NSString * _subtitle;
    NSString * _title;
    unsigned long long  _type;
}

@property (readonly) PSIDate *endDate;
@property (nonatomic, copy) PSIAsset *keyAsset;
@property (readonly) unsigned long long numberOfAssets;
@property (readonly) NSDate *sortDate;
@property (readonly) PSIDate *startDate;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_initForCopy:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAsset:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9;
- (id)keyAsset;
- (unsigned long long)numberOfAssets;
- (void)setKeyAsset:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sortDate;
- (id)startDate;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;

@end
