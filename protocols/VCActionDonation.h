/* made by EzioChiu.
 */

@protocol VCActionDonation <NSObject>

@required

- (void)createActionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFLAction *, NSError *, void*
- (NSDate *)date;
- (NSString *)fullDescription;
- (NSString *)identifier;
- (NSData *)keyImageData;
- (NSString *)sourceAppIdentifier;
- (NSString *)sourceAppIdentifierForDisplay;
- (NSString *)sourceAppIdentifierForLaunching;
- (NSString *)subtitle;
- (NSString *)suggestedPhrase;
- (NSString *)title;
- (id)uniqueProperty;

@end
