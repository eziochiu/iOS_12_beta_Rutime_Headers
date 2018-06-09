/* made by EzioChiu.
 */

@protocol UNSAttachmentThumbnailProvider <NSObject>

@required

- (struct CGSize { double x1; double x2; })sizeForThumbnailOptions:(id <UNNotificationAttachmentThumbnailOptions>)arg1;
- (NSData *)thumbnailPNGOfSize:(struct CGSize { double x1; double x2; })arg1 forThumbnailOptions:(id <UNNotificationAttachmentThumbnailOptions>)arg2;

@end
