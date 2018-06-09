/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {
    UIItemProvider * _dragItemProvider;
    CKMediaObject * _mediaObject;
}

@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, readonly, copy) NSString *transferGUID;

- (void).cxx_destruct;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (bool)canCopy;
- (bool)canExport;
- (bool)canForward;
- (id)composition;
- (id)description;
- (id)dragItemProvider;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)mediaObject;
- (id)pasteboardItems;
- (void)setMediaObject:(id)arg1;
- (bool)shouldCacheSize;
- (bool)stickersSnapToPoint;
- (id)transferGUID;

@end
