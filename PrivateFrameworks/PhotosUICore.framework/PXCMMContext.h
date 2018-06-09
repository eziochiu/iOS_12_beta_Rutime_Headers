/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMContext : NSObject {
    unsigned long long  _activityType;
    long long  _count;
    PXAssetsDataSourceManager * _dataSourceManager;
    NSDate * _endDate;
    bool  _hideActionMenu;
    PXUIMediaProvider * _mediaProvider;
    unsigned long long  _numberOfReceivedAssets;
    PXRecipient * _originatorRecipient;
    PXCMMPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider * _peopleSuggestionsMediaProvider;
    long long  _photosCount;
    <PXDisplayAsset> * _posterAsset;
    <PXUIImageProvider> * _posterMediaProvider;
    double  _ppt_delay;
    bool  _ppt_presentComposeRecipientView;
    bool  _ppt_scrollComposeRecipientsView;
    NSArray * _recipients;
    PXCMMSendBackSuggestionSource * _sendBackSuggestionSource;
    unsigned long long  _sourceType;
    NSDate * _startDate;
    NSString * _title;
    long long  _videosCount;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic) long long count;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) bool hideActionMenu;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic) unsigned long long numberOfReceivedAssets;
@property (nonatomic, copy) PXRecipient *originatorRecipient;
@property (nonatomic, retain) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic, retain) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (nonatomic) long long photosCount;
@property (nonatomic, retain) <PXDisplayAsset> *posterAsset;
@property (nonatomic, retain) <PXUIImageProvider> *posterMediaProvider;
@property (nonatomic) double ppt_delay;
@property (nonatomic) bool ppt_presentComposeRecipientView;
@property (nonatomic) bool ppt_scrollComposeRecipientsView;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, retain) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long videosCount;

+ (id)new;

- (void).cxx_destruct;
- (id)actionManager;
- (unsigned long long)activityType;
- (long long)count;
- (id)createSession;
- (id)dataSourceManager;
- (id)endDate;
- (bool)hideActionMenu;
- (id)init;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3;
- (id)mediaProvider;
- (unsigned long long)numberOfReceivedAssets;
- (id)originatorRecipient;
- (id)peopleSuggestionsDataSourceManager;
- (id)peopleSuggestionsMediaProvider;
- (long long)photosCount;
- (id)posterAsset;
- (id)posterMediaProvider;
- (double)ppt_delay;
- (bool)ppt_presentComposeRecipientView;
- (bool)ppt_scrollComposeRecipientsView;
- (id)recipients;
- (id)sendBackSuggestionSource;
- (void)setCount:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setHideActionMenu:(bool)arg1;
- (void)setNumberOfReceivedAssets:(unsigned long long)arg1;
- (void)setOriginatorRecipient:(id)arg1;
- (void)setPeopleSuggestionsDataSourceManager:(id)arg1;
- (void)setPeopleSuggestionsMediaProvider:(id)arg1;
- (void)setPhotosCount:(long long)arg1;
- (void)setPosterAsset:(id)arg1;
- (void)setPosterMediaProvider:(id)arg1;
- (void)setPpt_delay:(double)arg1;
- (void)setPpt_presentComposeRecipientView:(bool)arg1;
- (void)setPpt_scrollComposeRecipientsView:(bool)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSendBackSuggestionSource:(id)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideosCount:(long long)arg1;
- (unsigned long long)sourceType;
- (id)startDate;
- (id)title;
- (long long)videosCount;

@end
