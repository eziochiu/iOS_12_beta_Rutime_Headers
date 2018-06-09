/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackImageQualityUIViewController : UIViewController <PXFeedbackFormDelegate> {
    NSArray * _assets;
    PXFeedbackLikeItOrNotComboUIViewController * _feedbackController;
    NSArray * _imageQualityDiagnosticFileURLs;
    UINavigationController * _navigationController;
    NSDictionary * _negativeFeedback;
}

@property (nonatomic, retain) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFeedbackLikeItOrNotComboUIViewController *feedbackController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *imageQualityDiagnosticFileURLs;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, retain) NSDictionary *negativeFeedback;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_componentIDForComponent:(long long)arg1;
- (id)_componentNameForComponent:(long long)arg1;
- (void)_fileRadarWithAssets:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3 customFeedback:(id)arg4;
- (void)_generateResourceFilesForAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_generateTitleForFeedback:(id)arg1;
- (id)_generateURLForAssetDBGFiles:(id)arg1;
- (id)_generateURLsForAssetsDBGFiles:(id)arg1;
- (long long)_radarComponentForFeedback:(id)arg1;
- (id)assets;
- (id)feedbackController;
- (id)imageQualityDiagnosticFileURLs;
- (id)initWithAssets:(id)arg1;
- (id)longTitleText;
- (id)navigationController;
- (id)negativeFeedback;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (void)setAssets:(id)arg1;
- (void)setFeedbackController:(id)arg1;
- (void)setImageQualityDiagnosticFileURLs:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setNegativeFeedback:(id)arg1;
- (bool)shouldContinuePresentingFormAfterFeedback;
- (bool)shouldDisplaySecondaryFeedbackButtons;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (void)viewDidLoad;
- (id)viewTitleForRadar;
- (bool)wantsCustomFeedbackSection;
- (bool)wantsPositiveFeedbackSection;

@end
