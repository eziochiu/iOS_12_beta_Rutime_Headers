/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICTextAttachment : ICBaseTextAttachment

@property (nonatomic, readonly) bool containsFindableText;
@property (nonatomic, readonly) NSString *viewIdentifier;

+ (double)defaultAttachmentThumbnailViewHeight;
+ (Class)textAttachmentClassForAttachment:(id)arg1;
+ (bool)textAttachmentIsContent:(id)arg1;
+ (id)textAttachmentWithAttachment:(id)arg1;

- (id)attachmentAsNSTextAttachment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { double x1; double x2; double x3; double x4; })attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1;
- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (Class)attachmentViewClass;
- (Class)attachmentViewControllerClass;
- (double)availableWidthForTextContainer:(id)arg1;
- (bool)containsFindableText;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (struct UIView { Class x1; }*)newlyCreatedView;
- (struct UIViewController { Class x1; }*)newlyCreatedViewControllerForManualRendering:(bool)arg1 layoutManager:(id)arg2;
- (struct UIView { Class x1; }*)newlyCreatedViewForManualRendering;
- (bool)requiresSpaceAfterAttachmentForPrinting;
- (bool)supportsMultipleThumbnailsOnSameLine;
- (bool)supportsThumbnailView;
- (id)viewIdentifier;

@end
