/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaEntityPreflightManager : NSObject

+ (id)defaultManager;

- (void)_determineCellularPlaybackQualityForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_isMediaItemPlayableOnCellular:(id)arg1;
- (bool)_isOnCellular;
- (bool)_isOnWiFi;
- (bool)_isRemainingTimeLeftWithinRentalPlaybackWindowWithMediaItem:(id)arg1;
- (void)_preflightDownloadWithMediaEntityType:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(bool)arg2 presentingViewController:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_presentCellularPlaybackIsDisabledAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1;
- (void)_verifyMediaItemIsPlayableOnCellular:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(bool)arg2 presentingViewController:(id)arg3 completionHandler:(id /* block */)arg4;

@end
