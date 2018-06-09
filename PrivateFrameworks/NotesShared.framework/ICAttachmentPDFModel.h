/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentPDFModel : ICAttachmentModel

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (id)contentTextFromPDFAtURL:(id)arg1;

- (bool)canMarkup;
- (bool)hasPreviews;
- (id)searchableTextContent;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;

@end
