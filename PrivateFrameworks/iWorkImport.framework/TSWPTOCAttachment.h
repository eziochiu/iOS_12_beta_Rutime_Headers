/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCAttachment : TSWPDrawableAttachment

@property (nonatomic, readonly, retain) TSWPTOCInfo *tocInfo;

- (void)loadFromUnarchiver:(id)arg1;
- (void)loadTOCAttachmentMessage:(const struct TOCAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableAttachmentArchive {} *x5; }*)arg1 fromUnarchiver:(id)arg2;
- (void)saveTOCAttachmentMessage:(struct TOCAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableAttachmentArchive {} *x5; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)tocInfo;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;

@end
