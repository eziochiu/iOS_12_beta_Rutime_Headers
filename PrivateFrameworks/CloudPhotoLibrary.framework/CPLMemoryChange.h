/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMemoryChange : CPLRecordChange {
    CPLMemoryAssetList * _assetList;
    NSData * _assetListPredicate;
    NSData * _blacklistedFeature;
    long long  _category;
    NSDate * _creationDate;
    bool  _favorite;
    NSData * _graphData;
    long long  _graphVersion;
    NSData * _movieData;
    long long  _notificationState;
    long long  _playCount;
    bool  _rejected;
    double  _score;
    long long  _shareCount;
    long long  _subcategory;
    NSString * _subtitle;
    NSString * _title;
    bool  _userCreated;
    long long  _viewCount;
}

@property (nonatomic, copy) CPLMemoryAssetList *assetList;
@property (nonatomic, copy) NSData *assetListPredicate;
@property (nonatomic, copy) NSData *blacklistedFeature;
@property (nonatomic) long long category;
@property (nonatomic, copy) NSDate *creationDate;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (nonatomic, copy) NSData *graphData;
@property (nonatomic) long long graphVersion;
@property (nonatomic, copy) NSData *movieData;
@property (nonatomic) long long notificationState;
@property (nonatomic) long long playCount;
@property (getter=isRejected, nonatomic) bool rejected;
@property (nonatomic) double score;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long subcategory;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (getter=isUserCreated, nonatomic) bool userCreated;
@property (nonatomic) long long viewCount;

+ (id)_createTestMemoryWithAssets:(id)arg1;

- (void).cxx_destruct;
- (id)assetList;
- (id)assetListPredicate;
- (id)blacklistedFeature;
- (long long)category;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)creationDate;
- (id)graphData;
- (long long)graphVersion;
- (bool)isFavorite;
- (bool)isRejected;
- (bool)isUserCreated;
- (id)movieData;
- (long long)notificationState;
- (long long)playCount;
- (id)propertiesDescription;
- (id)scopedIdentifiersForMapping;
- (double)score;
- (void)setAssetList:(id)arg1;
- (void)setAssetListPredicate:(id)arg1;
- (void)setBlacklistedFeature:(id)arg1;
- (void)setCategory:(long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setGraphData:(id)arg1;
- (void)setGraphVersion:(long long)arg1;
- (void)setMovieData:(id)arg1;
- (void)setNotificationState:(long long)arg1;
- (void)setPlayCount:(long long)arg1;
- (void)setRejected:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setShareCount:(long long)arg1;
- (void)setSubcategory:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserCreated:(bool)arg1;
- (void)setViewCount:(long long)arg1;
- (long long)shareCount;
- (long long)subcategory;
- (id)subtitle;
- (bool)supportsDeletion;
- (bool)supportsDirectDeletion;
- (id)title;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (long long)viewCount;

@end
