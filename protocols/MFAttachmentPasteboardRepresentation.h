/* made by EzioChiu.
 */

@protocol MFAttachmentPasteboardRepresentation

@required

- (NSData *)data;
- (bool)isValid;
- (NSString *)mimeType;
- (NSString *)name;

@end
