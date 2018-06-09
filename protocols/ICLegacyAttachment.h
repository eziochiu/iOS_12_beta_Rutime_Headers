/* made by EzioChiu.
 */

@protocol ICLegacyAttachment <NSObject>

@required

- (NSString *)contentID;
- (NSURL *)fileURL;
- (NSString *)identifier;
- (NSManagedObjectContext *)managedObjectContext;
- (bool)persistAttachmentData:(NSData *)arg1 error:(id*)arg2;
- (void)setMimeType:(NSString *)arg1;
- (NSString *)typeUTI;

@end
