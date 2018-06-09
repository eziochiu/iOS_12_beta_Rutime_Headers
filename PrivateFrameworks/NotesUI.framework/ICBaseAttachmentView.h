/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICBaseAttachmentView : UIView {
    ICAttachment * _attachment;
    struct CGSize { 
        double width; 
        double height; 
    }  _attachmentContentSize;
    bool  _selected;
    ICTextAttachment * _textAttachment;
}

@property (nonatomic) ICAttachment *attachment;
@property (nonatomic) struct CGSize { double x1; double x2; } attachmentContentSize;
@property (nonatomic) bool selected;
@property (nonatomic) ICTextAttachment *textAttachment;

- (void).cxx_destruct;
- (void)addKVObserversForAttachment:(id)arg1;
- (id)attachment;
- (struct CGSize { double x1; double x2; })attachmentContentSize;
- (void)attachmentDidLoad:(id)arg1;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;
- (void)attachmentWillBeDeleted:(id)arg1;
- (bool)cancelDidScrollIntoVisibleRange;
- (void)contentSizeCategoryDidChange;
- (void)dealloc;
- (void)didChangeAttachment;
- (void)didChangeAttachmentTitle;
- (void)didChangeMedia;
- (void)didChangeMergeableData;
- (void)didChangeSize;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didSetSelected:(bool)arg1;
- (void)didUpdatePreviewImages;
- (void)mediaDidLoad:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)quickLookTransitionView;
- (void)removeKVOObserversForAttachment:(id)arg1;
- (bool)selected;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setTextAttachment:(id)arg1;
- (id)textAttachment;
- (void)willChangeAttachment;
- (void)willDeleteAttachment;

@end
