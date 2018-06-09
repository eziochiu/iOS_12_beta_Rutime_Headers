/* made by EzioChiu.
 */

@protocol PXCMMInvitation <NSObject, PXMediaTypeAggregating>

@required

- (void)acceptWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (PXCMMContext *)contextForActivityType:(unsigned long long)arg1;
- (unsigned long long)count;
- (NSDate *)endDate;
- (NSDate *)expiryDate;
- (NSString *)identifier;
- (NSString *)localizedTitle;
- (void)notifyUserWhenReadyToViewIfNeeded;
- (<PXCMMInvitationParticipant> *)owner;
- (<PXDisplayAsset> *)posterAsset;
- (<PXUIImageProvider> *)posterMediaProvider;
- (long long)shareType;
- (NSDate *)startDate;

@end
