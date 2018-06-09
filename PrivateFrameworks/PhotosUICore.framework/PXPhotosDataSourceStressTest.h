/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDataSourceStressTest : PXObservable {
    NSDictionary * _assetsByCategory;
    NSArray * _categories;
    PXPhotosDataSource * _dataSource;
    unsigned long long  _dataSourceIndex;
    bool  _isPrepared;
    unsigned long long  _maximumAssetCount;
    bool  _running;
    unsigned long long  _sampleIndex;
    unsigned long long  _sampleLength;
    double  _updateInterval;
}

@property (setter=_setDataSource:, nonatomic, retain) PXPhotosDataSource *dataSource;
@property (setter=_setDataSourceIndex:, nonatomic) unsigned long long dataSourceIndex;
@property (nonatomic) unsigned long long maximumAssetCount;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic) double updateInterval;

- (void).cxx_destruct;
- (id)_categoryForAsset:(id)arg1;
- (void)_prepare;
- (void)_setDataSource:(id)arg1;
- (void)_setDataSourceIndex:(unsigned long long)arg1;
- (void)_updateDataSource;
- (id)dataSource;
- (unsigned long long)dataSourceIndex;
- (id)init;
- (bool)isRunning;
- (unsigned long long)maximumAssetCount;
- (id)mutableChangeObject;
- (void)setMaximumAssetCount:(unsigned long long)arg1;
- (void)setRunning:(bool)arg1;
- (void)setUpdateInterval:(double)arg1;
- (double)updateInterval;

@end
