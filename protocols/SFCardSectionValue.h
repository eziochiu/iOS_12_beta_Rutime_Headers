/* made by EzioChiu.
 */

@protocol SFCardSectionValue <NSObject>

@required

- (SFActivityIndicatorCardSection *)activityIndicatorCardSection;
- (SFAppLinkCardSection *)appLinkCardSection;
- (SFAudioPlaybackCardSection *)audioPlaybackCardSection;
- (SFButtonCardSection *)buttonCardSection;
- (SFDescriptionCardSection *)descriptionCardSection;
- (SFDetailedRowCardSection *)detailedRowCardSection;
- (NSDictionary *)dictionaryRepresentation;
- (SFFlightCardSection *)flightCardSection;
- (SFHorizontalButtonCardSection *)horizontalButtonCardSection;
- (SFHorizontalScrollCardSection *)horizontalScrollCardSection;
- (SFImagesCardSection *)imagesCardSection;
- (NSData *)jsonData;
- (SFKeyValueDataCardSection *)keyValueDataCardSection;
- (SFMapCardSection *)mapCardSection;
- (SFMapsDetailedRowCardSection *)mapsDetailedRowCardSection;
- (SFMediaInfoCardSection *)mediaInfoCardSection;
- (SFMediaPlayerCardSection *)mediaPlayerCardSection;
- (SFMessageCardSection *)messageCardSection;
- (SFMetaInfoCardSection *)metaInfoCardSection;
- (SFNowPlayingCardSection *)nowPlayingCardSection;
- (SFProductCardSection *)productCardSection;
- (SFRichTitleCardSection *)richTitleCardSection;
- (SFRowCardSection *)rowCardSection;
- (SFScoreboardCardSection *)scoreboardCardSection;
- (SFSectionHeaderCardSection *)sectionHeaderCardSection;
- (SFSelectableGridCardSection *)selectableGridCardSection;
- (void)setActivityIndicatorCardSection:(SFActivityIndicatorCardSection *)arg1;
- (void)setAppLinkCardSection:(SFAppLinkCardSection *)arg1;
- (void)setAudioPlaybackCardSection:(SFAudioPlaybackCardSection *)arg1;
- (void)setButtonCardSection:(SFButtonCardSection *)arg1;
- (void)setDescriptionCardSection:(SFDescriptionCardSection *)arg1;
- (void)setDetailedRowCardSection:(SFDetailedRowCardSection *)arg1;
- (void)setFlightCardSection:(SFFlightCardSection *)arg1;
- (void)setHorizontalButtonCardSection:(SFHorizontalButtonCardSection *)arg1;
- (void)setHorizontalScrollCardSection:(SFHorizontalScrollCardSection *)arg1;
- (void)setImagesCardSection:(SFImagesCardSection *)arg1;
- (void)setKeyValueDataCardSection:(SFKeyValueDataCardSection *)arg1;
- (void)setMapCardSection:(SFMapCardSection *)arg1;
- (void)setMapsDetailedRowCardSection:(SFMapsDetailedRowCardSection *)arg1;
- (void)setMediaInfoCardSection:(SFMediaInfoCardSection *)arg1;
- (void)setMediaPlayerCardSection:(SFMediaPlayerCardSection *)arg1;
- (void)setMessageCardSection:(SFMessageCardSection *)arg1;
- (void)setMetaInfoCardSection:(SFMetaInfoCardSection *)arg1;
- (void)setNowPlayingCardSection:(SFNowPlayingCardSection *)arg1;
- (void)setProductCardSection:(SFProductCardSection *)arg1;
- (void)setRichTitleCardSection:(SFRichTitleCardSection *)arg1;
- (void)setRowCardSection:(SFRowCardSection *)arg1;
- (void)setScoreboardCardSection:(SFScoreboardCardSection *)arg1;
- (void)setSectionHeaderCardSection:(SFSectionHeaderCardSection *)arg1;
- (void)setSelectableGridCardSection:(SFSelectableGridCardSection *)arg1;
- (void)setSocialMediaPostCardSection:(SFSocialMediaPostCardSection *)arg1;
- (void)setStockChartCardSection:(SFStockChartCardSection *)arg1;
- (void)setSuggestionCardSection:(SFSuggestionCardSection *)arg1;
- (void)setTableHeaderRowCardSection:(SFTableHeaderRowCardSection *)arg1;
- (void)setTableRowCardSection:(SFTableRowCardSection *)arg1;
- (void)setTextColumnsCardSection:(SFTextColumnsCardSection *)arg1;
- (void)setTitleCardSection:(SFTitleCardSection *)arg1;
- (void)setTrackListCardSection:(SFTrackListCardSection *)arg1;
- (void)setVerticalLayoutCardSection:(SFVerticalLayoutCardSection *)arg1;
- (void)setWatchListCardSection:(SFWatchListCardSection *)arg1;
- (void)setWebCardSection:(SFWebCardSection *)arg1;
- (SFSocialMediaPostCardSection *)socialMediaPostCardSection;
- (SFStockChartCardSection *)stockChartCardSection;
- (SFSuggestionCardSection *)suggestionCardSection;
- (SFTableHeaderRowCardSection *)tableHeaderRowCardSection;
- (SFTableRowCardSection *)tableRowCardSection;
- (SFTextColumnsCardSection *)textColumnsCardSection;
- (SFTitleCardSection *)titleCardSection;
- (SFTrackListCardSection *)trackListCardSection;
- (SFVerticalLayoutCardSection *)verticalLayoutCardSection;
- (SFWatchListCardSection *)watchListCardSection;
- (SFWebCardSection *)webCardSection;

@end
