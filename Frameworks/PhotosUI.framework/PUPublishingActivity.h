/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPublishingActivity : PUActivity {
    PLPublishingMedia * __publishingMedia;
    PLPublishingAgent * _currentAgent;
    double  _endTime;
    UIViewController * _referenceViewController;
    double  _startTime;
}

@property (setter=_setPublishingMedia:, nonatomic, retain) PLPublishingMedia *_publishingMedia;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (void)_cleanup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_publishOverReferenceViewController;
- (void)_publishingAgentDidCancel:(id)arg1;
- (void)_publishingAgentDidStartPublishing:(id)arg1;
- (id)_publishingMedia;
- (void)_setPublishMediaWithAsset:(id)arg1;
- (void)_setPublishingMedia:(id)arg1;
- (void)_showPublishingSheetInViewController:(id)arg1 remakeAfterPublish:(bool)arg2;
- (void)_showTrimViewController;
- (void)_showVideoTooLongAlert;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)currentPublishingAgent;
- (void)dealloc;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)init;
- (void)prepareWithActivityItems:(id)arg1;
- (id)publishingBundle;

@end
