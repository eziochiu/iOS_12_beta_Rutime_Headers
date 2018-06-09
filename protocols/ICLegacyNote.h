/* made by EzioChiu.
 */

@protocol ICLegacyNote <NSObject>

@required

- (NSArray *)attachments;
- (<ICLegacyAttachment> *)createAttachmentWithName:(NSString *)arg1;
- (NSDate *)creationDate;
- (<ICLegacyFolder> *)folder;
- (NSString *)htmlString;
- (NSString *)identifier;
- (bool)isMarkedForDeletion;
- (bool)isPlainText;
- (NSManagedObjectContext *)managedObjectContext;
- (void)markForDeletion;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (void)setHtmlString:(NSString *)arg1;
- (NSString *)title;

@end
