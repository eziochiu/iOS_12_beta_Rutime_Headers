/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteAttachmentObject : NSManagedObject <ICLegacyAttachment>

@property (nonatomic, retain) NSString *contentID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic, retain) NoteObject *note;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (bool)applyFileAttributesForAttachment:(id)arg1 error:(id*)arg2;
+ (id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id*)arg2;
+ (id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id*)arg2;
+ (bool)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id*)arg2;
+ (bool)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id*)arg2;

- (id)attachmentDataFileURLWithError:(id*)arg1;
- (id)attachmentDataWithError:(id*)arg1;
- (bool)persistAttachmentData:(id)arg1 error:(id*)arg2;
- (void)prepareForDeletion;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)fileURL;
- (id)identifier;
- (id)typeUTI;

@end
