/* made by EzioChiu.
 */

@protocol FCContentContextInternal <NSObject, FCCacheFlushing>

@required

- (FCArticleListRecordSource *)articleListRecordSource;
- (FCArticleRecordSource *)articleRecordSource;
- (FCChannelMembershipController *)channelMembershipController;
- (FCCKContentDatabase *)contentDatabase;
- (FCFeedDatabase *)feedDatabase;
- (FCForYouConfigRecordSource *)forYouConfigRecordSource;
- (FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
- (NSArray *)recordSources;
- (FCResourceRecordSource *)resourceRecordSource;
- (FCTagRecordSource *)tagRecordSource;
- (FCWidgetSectionConfigRecordSource *)widgetSectionConfigRecordSource;

@end
