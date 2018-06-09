/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPrideController : NSObject {
    NTKPrideListing * _currentListing;
    NTKPrideGraphDataSource * _dataSource;
    NTKPrideListing * _preparedListing;
}

@property (nonatomic, retain) NTKPrideListing *currentListing;
@property (nonatomic, retain) NTKPrideListing *preparedListing;

- (void).cxx_destruct;
- (id)currentComplicationColor;
- (id)currentListing;
- (id)currentPosterImage;
- (id)currentStyleComplicationColor;
- (id)getListingWithTag:(id)arg1;
- (id)initForDevice:(id)arg1;
- (void)invalidateCurrentListing;
- (void)prepareUserTapAction;
- (id)preparedListing;
- (void)proceedToNextListing;
- (void)proceedToNextListingWithTag:(id)arg1;
- (void)setCurrentListing:(id)arg1;
- (void)setPreparedListing:(id)arg1;
- (void)startedPlayingListing:(id)arg1;

@end
