/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCContentContextInternal : NSObject <FCContentContextInternal> {
    FCArticleListRecordSource * _articleListRecordSource;
    FCArticleRecordSource * _articleRecordSource;
    FCChannelMembershipController * _channelMembershipController;
    FCCKContentDatabase * _contentDatabase;
    FCFeedDatabase * _feedDatabase;
    FCForYouConfigRecordSource * _forYouConfigRecordSource;
    FCPurchaseLookupRecordSource * _purchaseLookupRecordSource;
    FCResourceRecordSource * _resourceRecordSource;
    FCTagRecordSource * _tagRecordSource;
    FCWidgetSectionConfigRecordSource * _widgetSectionConfigRecordSource;
}

@property (nonatomic, retain) FCArticleListRecordSource *articleListRecordSource;
@property (nonatomic, retain) FCArticleRecordSource *articleRecordSource;
@property (nonatomic, retain) FCChannelMembershipController *channelMembershipController;
@property (nonatomic, retain) FCCKContentDatabase *contentDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) FCFeedDatabase *feedDatabase;
@property (nonatomic, retain) FCForYouConfigRecordSource *forYouConfigRecordSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property (nonatomic, readonly) NSArray *recordSources;
@property (nonatomic, retain) FCResourceRecordSource *resourceRecordSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCTagRecordSource *tagRecordSource;
@property (nonatomic, retain) FCWidgetSectionConfigRecordSource *widgetSectionConfigRecordSource;

- (void).cxx_destruct;
- (id)articleListRecordSource;
- (id)articleRecordSource;
- (id)channelMembershipController;
- (id)contentDatabase;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)feedDatabase;
- (id)forYouConfigRecordSource;
- (id)init;
- (id)purchaseLookupRecordSource;
- (id)recordSources;
- (id)resourceRecordSource;
- (void)setArticleListRecordSource:(id)arg1;
- (void)setArticleRecordSource:(id)arg1;
- (void)setChannelMembershipController:(id)arg1;
- (void)setContentDatabase:(id)arg1;
- (void)setFeedDatabase:(id)arg1;
- (void)setForYouConfigRecordSource:(id)arg1;
- (void)setPurchaseLookupRecordSource:(id)arg1;
- (void)setResourceRecordSource:(id)arg1;
- (void)setTagRecordSource:(id)arg1;
- (void)setWidgetSectionConfigRecordSource:(id)arg1;
- (id)tagRecordSource;
- (id)widgetSectionConfigRecordSource;

@end
