/* made by EzioChiu.
 */

@protocol TTAttachment <TTModelAttributeComparable, NSObject>

@required

- (NSString *)attachmentIdentifier;
- (ICAttachment *)attachmentInContext:(NSManagedObjectContext *)arg1;
- (NSString *)attachmentUTI;

@end
