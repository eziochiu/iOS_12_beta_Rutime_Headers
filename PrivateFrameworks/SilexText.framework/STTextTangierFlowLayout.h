/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTextTangierFlowLayout : TSDLayout <TSWPLayoutTarget> {
    NSMutableArray * _columns;
}

@property (nonatomic, readonly) bool allowsDescendersToClip;
@property (nonatomic, readonly) bool allowsLastLineTruncation;
@property (nonatomic, readonly) bool alwaysAllowWordSplit;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, retain) NSMutableArray *anchoredDrawablesForRelayout;
@property (nonatomic, readonly) unsigned int autosizeFlags;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, retain) NSMutableArray *columns;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (nonatomic, readonly) <TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CFLocale { }*hyphenationLocale;
@property (nonatomic, readonly) bool ignoresEquationAlignment;
@property (nonatomic, readonly) bool layoutIsValid;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskRect;
@property (nonatomic, readonly) double maxAnchorY;
@property (nonatomic, readonly) unsigned int maxLineCount;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic, readonly) unsigned int naturalAlignment;
@property (nonatomic, readonly) int naturalDirection;
@property (nonatomic, readonly) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (nonatomic, readonly, retain) <TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (nonatomic, readonly) const void*nextTargetTopicNumbers;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic, readonly) TSDLayout *parentLayoutForInlineAttachments;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly, retain) <TSWPOffscreenColumn> *previousTargetLastColumn;
@property (nonatomic, readonly) const void*previousTargetTopicNumbers;
@property (nonatomic, readonly) bool pushAscendersIntoColumn;
@property (nonatomic, readonly) double reservedWidthWhenTruncating;
@property (nonatomic, readonly) bool shouldHyphenate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool textIsVertical;
@property (nonatomic, readonly) unsigned int verticalAlignment;
@property (nonatomic, readonly) bool wantsLineFragments;

- (void).cxx_destruct;
- (void)addAttachmentLayout:(id)arg1;
- (bool)allowsLastLineTruncation;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (unsigned int)autosizeFlags;
- (id)canvas;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (unsigned long long)characterPositionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)columns;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct CGSize { double x1; double x2; })currentSize;
- (void)dealloc;
- (id)footnoteHeightMeasurer;
- (id)footnoteMarkProvider;
- (bool)ignoresEquationAlignment;
- (id)initWithInfo:(id)arg1 layout:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)isLastTarget;
- (bool)isLayoutOffscreen;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (id)layoutForInlineDrawable:(id)arg1;
- (id)layoutGeometryFromInfo;
- (bool)layoutIsValid;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskRect;
- (double)maxAnchorY;
- (unsigned int)maxLineCount;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (unsigned int)naturalAlignment;
- (int)naturalDirection;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (const void*)nextTargetTopicNumbers;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (id)parentLayoutForInlineAttachments;
- (struct CGPoint { double x1; double x2; })pointForCharacterPosition:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (id)previousTargetLastColumn;
- (const void*)previousTargetTopicNumbers;
- (void)setColumns:(id)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldDisplayGuides;
- (bool)shouldHyphenate;
- (bool)shouldPositionAttachmentsIteratively;
- (bool)shouldProvideSizingGuides;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textIsVertical;
- (void)validate;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (unsigned int)verticalAlignment;
- (bool)wantsLineFragments;

@end
