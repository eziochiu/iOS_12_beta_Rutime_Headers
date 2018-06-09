/* made by EzioChiu.
 */

@protocol SFReaderEventsListener <NSObject>

@required

- (void)contentDidBecomeReadyWithDetectedLanguage:(NSString *)arg1;
- (void)didCollectReaderContentForMail:(NSString *)arg1;
- (void)didCollectReadingListItemInfo:(NSDictionary *)arg1 bookmarkID:(NSNumber *)arg2;
- (void)didDetermineReaderAvailability:(bool)arg1 dueToSameDocumentNavigation:(bool)arg2;
- (void)didPrepareReaderContentForPrinting:(_WKFrameHandle *)arg1;
- (void)didSetReaderConfiguration:(NSDictionary *)arg1;
- (void)readerTextWasExtracted:(NSString *)arg1 withMetadata:(NSDictionary *)arg2 wasDeterminingAvailabilility:(bool)arg3;

@end
