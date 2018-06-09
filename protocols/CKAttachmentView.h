/* made by EzioChiu.
 */

@protocol CKAttachmentView <NSObject>

@required

- (UIImageView *)iconImageView;
- (CKMediaObject *)mediaObject;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setMediaObject:(CKMediaObject *)arg1;

@end
