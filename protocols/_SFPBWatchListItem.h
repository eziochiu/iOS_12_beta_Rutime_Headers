/* made by EzioChiu.
 */

@protocol _SFPBWatchListItem <NSObject>

@required

- (NSString *)addToUpNextText;
- (NSString *)addedToUpNextText;
- (NSString *)continueInTextFormat;
- (NSString *)inUpNextText;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)installButtonTitle;
- (NSData *)jsonData;
- (NSString *)openButtonTitle;
- (NSString *)purchaseOfferTextFormat;
- (NSString *)seasonEpisodeTextFormat;
- (void)setAddToUpNextText:(NSString *)arg1;
- (void)setAddedToUpNextText:(NSString *)arg1;
- (void)setContinueInTextFormat:(NSString *)arg1;
- (void)setInUpNextText:(NSString *)arg1;
- (void)setInstallButtonTitle:(NSString *)arg1;
- (void)setOpenButtonTitle:(NSString *)arg1;
- (void)setPurchaseOfferTextFormat:(NSString *)arg1;
- (void)setSeasonEpisodeTextFormat:(NSString *)arg1;
- (void)setWatchListIdentifier:(NSString *)arg1;
- (void)setWatchLiveTextFormat:(NSString *)arg1;
- (NSString *)watchListIdentifier;
- (NSString *)watchLiveTextFormat;

@end
