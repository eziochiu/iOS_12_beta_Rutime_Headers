/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXReusableObject, PXSectionedDataSourceManagerObserver, PXUIViewBasicTile> {
    unsigned long long  _activityType;
    PXCMMAssetsProgressListener * _assetsProgressListener;
    PXCMMPosterBannerView * _bannerView;
    <PXCMMBannerTileControllerDelegate> * _delegate;
    NSMutableArray * _peopleSuggestionForAvatars;
    PXCMMPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider * _peopleSuggestionsMediaProvider;
    unsigned long long  _sourceType;
    PXCMMViewModel * _viewModel;
}

@property (nonatomic, retain) PXCMMPosterBannerView *bannerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMBannerTileControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *peopleSuggestionForAvatars;
@property (nonatomic, retain) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic, retain) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)new;

- (void).cxx_destruct;
- (void)_updateBannerActionButton;
- (void)_updateCounts;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updatePeopleSuggestionAvatars;
- (id)bannerView;
- (void)becomeReusable;
- (id)delegate;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)init;
- (id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 assetsProgressListener:(id)arg4;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)peopleSuggestionForAvatars;
- (id)peopleSuggestionsDataSourceManager;
- (id)peopleSuggestionsMediaProvider;
- (void)prepareForReuse;
- (void)setBannerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPeopleSuggestionDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (void)setPeopleSuggestionForAvatars:(id)arg1;
- (void)setPeopleSuggestionsDataSourceManager:(id)arg1;
- (void)setPeopleSuggestionsMediaProvider:(id)arg1;
- (id)view;

@end
