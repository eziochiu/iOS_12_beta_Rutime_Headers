/* made by EzioChiu.
 */

@protocol PXCMMPersonSuggestion <NSObject, NSCopying>

@required

- (NSString *)displayName;
- (bool)matchesRecipientInRecipients:(NSArray *)arg1;

@end
