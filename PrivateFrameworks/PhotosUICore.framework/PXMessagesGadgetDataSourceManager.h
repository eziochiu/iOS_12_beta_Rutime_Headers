/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMessagesGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate> {
    NSArray * _cachedGadgetProviders;
    PXCloudWelcomeGadgetProvider * _cloudWelcomeGadgeProvider;
    NSString * _placeholderTitle;
    double  _recentPhotosHeight;
    PXMessagesRecentPhotosGadgetProvider * _recentPhotosProvider;
    UIViewController<PXPhotoLibraryPresenting> * _recentPhotosViewController;
    PXMessagesCMMSuggestionsCollectionGadgetProvider * _suggestionsCollectionGadgetProvider;
    PXCMMSuggestionsDataSourceManager * _suggestionsDataSourceManager;
    PXMessagesExtensionViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXGadgetDelegate> *nextGadgetResponder;
@property (nonatomic, copy) NSString *placeholderTitle;
@property (nonatomic) double recentPhotosHeight;
@property (nonatomic, retain) PXMessagesRecentPhotosGadgetProvider *recentPhotosProvider;
@property (nonatomic, retain) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController;
@property (nonatomic, retain) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateGadgetProviders;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (id)gadgetProviders;
- (id)initWithViewModel:(id)arg1 dataSourceManager:(id)arg2;
- (id)placeholderTitle;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (double)recentPhotosHeight;
- (id)recentPhotosProvider;
- (id)recentPhotosViewController;
- (void)setPlaceholderTitle:(id)arg1;
- (void)setRecentPhotosHeight:(double)arg1;
- (void)setRecentPhotosProvider:(id)arg1;
- (void)setRecentPhotosViewController:(id)arg1;
- (void)setSuggestionsDataSourceManager:(id)arg1;
- (id)suggestionsDataSourceManager;

@end
