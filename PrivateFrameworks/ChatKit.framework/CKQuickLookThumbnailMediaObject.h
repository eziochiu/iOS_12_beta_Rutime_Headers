/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKQuickLookThumbnailMediaObject : CKMediaObject

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (bool)isPreviewable;

- (id)diskCachedThumbnailForOrientation:(BOOL)arg1;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;

@end
