/* made by EzioChiu.
 */

@protocol _SFPBCardSectionValue <NSObject>

@required

- (_SFPBActivityIndicatorCardSection *)activityIndicatorCardSection;
- (_SFPBAppLinkCardSection *)appLinkCardSection;
- (_SFPBAudioPlaybackCardSection *)audioPlaybackCardSection;
- (_SFPBButtonCardSection *)buttonCardSection;
- (_SFPBDescriptionCardSection *)descriptionCardSection;
- (_SFPBDetailedRowCardSection *)detailedRowCardSection;
- (_SFPBFlightCardSection *)flightCardSection;
- (_SFPBHorizontalButtonCardSection *)horizontalButtonCardSection;
- (_SFPBHorizontalScrollCardSection *)horizontalScrollCardSection;
- (_SFPBImagesCardSection *)imagesCardSection;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBKeyValueDataCardSection *)keyValueDataCardSection;
- (_SFPBMapCardSection *)mapCardSection;
- (_SFPBMapsDetailedRowCardSection *)mapsDetailedRowCardSection;
- (_SFPBMediaInfoCardSection *)mediaInfoCardSection;
- (_SFPBMediaPlayerCardSection *)mediaPlayerCardSection;
- (_SFPBMessageCardSection *)messageCardSection;
- (_SFPBMetaInfoCardSection *)metaInfoCardSection;
- (_SFPBNowPlayingCardSection *)nowPlayingCardSection;
- (_SFPBProductCardSection *)productCardSection;
- (_SFPBRichTitleCardSection *)richTitleCardSection;
- (_SFPBRowCardSection *)rowCardSection;
- (_SFPBScoreboardCardSection *)scoreboardCardSection;
- (_SFPBSectionHeaderCardSection *)sectionHeaderCardSection;
- (_SFPBSelectableGridCardSection *)selectableGridCardSection;
- (void)setActivityIndicatorCardSection:(_SFPBActivityIndicatorCardSection *)arg1;
- (void)setAppLinkCardSection:(_SFPBAppLinkCardSection *)arg1;
- (void)setAudioPlaybackCardSection:(_SFPBAudioPlaybackCardSection *)arg1;
- (void)setButtonCardSection:(_SFPBButtonCardSection *)arg1;
- (void)setDescriptionCardSection:(_SFPBDescriptionCardSection *)arg1;
- (void)setDetailedRowCardSection:(_SFPBDetailedRowCardSection *)arg1;
- (void)setFlightCardSection:(_SFPBFlightCardSection *)arg1;
- (void)setHorizontalButtonCardSection:(_SFPBHorizontalButtonCardSection *)arg1;
- (void)setHorizontalScrollCardSection:(_SFPBHorizontalScrollCardSection *)arg1;
- (void)setImagesCardSection:(_SFPBImagesCardSection *)arg1;
- (void)setKeyValueDataCardSection:(_SFPBKeyValueDataCardSection *)arg1;
- (void)setMapCardSection:(_SFPBMapCardSection *)arg1;
- (void)setMapsDetailedRowCardSection:(_SFPBMapsDetailedRowCardSection *)arg1;
- (void)setMediaInfoCardSection:(_SFPBMediaInfoCardSection *)arg1;
- (void)setMediaPlayerCardSection:(_SFPBMediaPlayerCardSection *)arg1;
- (void)setMessageCardSection:(_SFPBMessageCardSection *)arg1;
- (void)setMetaInfoCardSection:(_SFPBMetaInfoCardSection *)arg1;
- (void)setNowPlayingCardSection:(_SFPBNowPlayingCardSection *)arg1;
- (void)setProductCardSection:(_SFPBProductCardSection *)arg1;
- (void)setRichTitleCardSection:(_SFPBRichTitleCardSection *)arg1;
- (void)setRowCardSection:(_SFPBRowCardSection *)arg1;
- (void)setScoreboardCardSection:(_SFPBScoreboardCardSection *)arg1;
- (void)setSectionHeaderCardSection:(_SFPBSectionHeaderCardSection *)arg1;
- (void)setSelectableGridCardSection:(_SFPBSelectableGridCardSection *)arg1;
- (void)setSocialMediaPostCardSection:(_SFPBSocialMediaPostCardSection *)arg1;
- (void)setStockChartCardSection:(_SFPBStockChartCardSection *)arg1;
- (void)setSuggestionCardSection:(_SFPBSuggestionCardSection *)arg1;
- (void)setTableHeaderRowCardSection:(_SFPBTableHeaderRowCardSection *)arg1;
- (void)setTableRowCardSection:(_SFPBTableRowCardSection *)arg1;
- (void)setTextColumnsCardSection:(_SFPBTextColumnsCardSection *)arg1;
- (void)setTitleCardSection:(_SFPBTitleCardSection *)arg1;
- (void)setTrackListCardSection:(_SFPBTrackListCardSection *)arg1;
- (void)setVerticalLayoutCardSection:(_SFPBVerticalLayoutCardSection *)arg1;
- (void)setWatchListCardSection:(_SFPBWatchListCardSection *)arg1;
- (void)setWebCardSection:(_SFPBWebCardSection *)arg1;
- (_SFPBSocialMediaPostCardSection *)socialMediaPostCardSection;
- (_SFPBStockChartCardSection *)stockChartCardSection;
- (_SFPBSuggestionCardSection *)suggestionCardSection;
- (_SFPBTableHeaderRowCardSection *)tableHeaderRowCardSection;
- (_SFPBTableRowCardSection *)tableRowCardSection;
- (_SFPBTextColumnsCardSection *)textColumnsCardSection;
- (_SFPBTitleCardSection *)titleCardSection;
- (_SFPBTrackListCardSection *)trackListCardSection;
- (_SFPBVerticalLayoutCardSection *)verticalLayoutCardSection;
- (_SFPBWatchListCardSection *)watchListCardSection;
- (_SFPBWebCardSection *)webCardSection;

@end
