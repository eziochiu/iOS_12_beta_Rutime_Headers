/* made by EzioChiu.
 */

@protocol MFMailMarkupDelegate <NSObject>

@required

- (UIImage *)attachmentIcon:(MFAttachment *)arg1;
- (void)dismissMarkupViewController;
- (void)handleMarkupData:(NSData *)arg1 fileName:(NSString *)arg2 mimeType:(NSString *)arg3 attachment:(MFAttachment *)arg4;
- (void)handleMarkupError:(NSError *)arg1 attachment:(MFAttachment *)arg2;
- (void)handleMarkupURL:(void *)arg1 attachment:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSURL *, MFAttachment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MFAttachment *, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })markupAttachmentBoundsForAttachment:(MFAttachment *)arg1;
- (MFAttachment *)markupReplacementAttachment;
- (void)presentMarkupViewController:(UIViewController *)arg1;

@end
