/* made by EzioChiu.
 */

@protocol WBSParsecSearchResult

@required

- (WBSParsecActionButton *)actionButton;
- (NSArray *)additionalMapItems;
- (NSURL *)appPunchoutURL;
- (bool)canBecomeTopHitForQuery:(WBSCompletionQuery *)arg1;
- (NSString *)completion;
- (WBSParsecImageRepresentation *)completionIcon;
- (UIImage *)completionIconWithSession:(id <WBSParsecSearchSession>)arg1;
- (NSString *)descriptionText;
- (NSString *)feedbackIdentifier;
- (WBSParsecImageRepresentation *)icon;
- (UIImage *)iconWithSession:(id <WBSParsecSearchSession>)arg1;
- (NSString *)identifier;
- (MKMapItem *)mapItem;
- (NSString *)mediaKind;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (NSString *)query;
- (NSString *)referrerForLoadingResult;
- (NSString *)sectionBundleIdentifier;
- (NSString *)sectionHeader;
- (NSString *)title;
- (NSString *)urlString;

@end
