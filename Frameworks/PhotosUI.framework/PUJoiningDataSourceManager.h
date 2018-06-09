/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUJoiningDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate> {
    long long  __currentUpdateID;
    NSArray * __dataSourceManagers;
}

@property (setter=_setCurrentUpdateId:, nonatomic) long long _currentUpdateID;
@property (nonatomic, readonly) NSArray *_dataSourceManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_currentUpdateID;
- (id)_dataSourceManagers;
- (void)_handleScheduledUpdateWithID:(long long)arg1;
- (void)_scheduleUpdate;
- (void)_setCurrentUpdateId:(long long)arg1;
- (void)_update;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (id)initWithDataSourceManagers:(id)arg1;

@end
