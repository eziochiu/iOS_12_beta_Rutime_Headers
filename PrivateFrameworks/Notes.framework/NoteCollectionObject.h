/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (bool)supportsVisibilityTestingType:(long long)arg1;

@end
