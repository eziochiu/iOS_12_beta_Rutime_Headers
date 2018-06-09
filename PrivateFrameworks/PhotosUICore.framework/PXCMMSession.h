/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSession : NSObject <PXTapToRadar> {
    PXCMMActionManager * _actionManager;
    unsigned long long  _activityType;
    PXAssetsDataSourceManager * _dataSourceManager;
    bool  _hideActionMenu;
    PXUIMediaProvider * _mediaProvider;
    PXCMMPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider * _peopleSuggestionsMediaProvider;
    double  _ppt_delay;
    bool  _ppt_presentComposeRecipientView;
    bool  _ppt_scrollComposeRecipientsView;
    PXCMMSendBackSuggestionSource * _sendBackSuggestionSource;
    unsigned long long  _sourceType;
    PXCMMViewModel * _viewModel;
}

@property (nonatomic, readonly) PXCMMActionManager *actionManager;
@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideActionMenu;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic, readonly) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (nonatomic) double ppt_delay;
@property (nonatomic, readonly) bool ppt_presentComposeRecipientView;
@property (nonatomic, readonly) bool ppt_scrollComposeRecipientsView;
@property (nonatomic, readonly) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXCMMViewModel *viewModel;

+ (id)_assetsInDateRanges:(id)arg1;
+ (id)_filterAssets:(id)arg1 byLocations:(id)arg2 maxDistanceMeters:(double)arg3;
+ (id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2;
+ (id)_sendBackFetchResultUsingTimeLocationMatching:(id)arg1;
+ (id)new;
+ (id)sendBackContextOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 sourceType:(unsigned long long)arg3;
+ (id)sendBackContextTimeLocationMatching:(id)arg1 sourceType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_allMetadataAssets;
- (id)_sendBackFetchResultUsingPhotosGraph;
- (id)actionManager;
- (unsigned long long)activityType;
- (id)assetsProgressListenerWithPresentationStyle:(long long)arg1;
- (id)dataSourceManager;
- (id)diagnosticDictionary;
- (bool)hideActionMenu;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)mediaProvider;
- (id)peopleSuggestionsDataSourceManager;
- (id)peopleSuggestionsMediaProvider;
- (double)ppt_delay;
- (bool)ppt_presentComposeRecipientView;
- (bool)ppt_scrollComposeRecipientsView;
- (id)sendBackContext;
- (id)sendBackContextPhotosGraphBasedWithSourceType:(unsigned long long)arg1;
- (id)sendBackSuggestionSource;
- (void)setPpt_delay:(double)arg1;
- (unsigned long long)sourceType;
- (id)viewModel;

@end
