/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentAudioModel : ICAttachmentModel {
    NSDate * _creationDate;
    bool  _recordedInNotes;
    NSString * _title;
}

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) bool recordedInNotes;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithAttachment:(id)arg1;
- (bool)recordedInNotes;
- (void)setCreationDate:(id)arg1;
- (void)setRecordedInNotes:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateFileBasedAttributes;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;

@end
