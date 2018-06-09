/* made by EzioChiu.
 */

@protocol ICLegacyFolder <NSObject>

@required

- (<ICLegacyAccount> *)account;
- (void)addNotesObject:(id <ICLegacyNote>)arg1;
- (NSSet *)changes;
- (NSManagedObjectContext *)managedObjectContext;
- (NSString *)name;
- (<ICLegacyNote> *)newNoteInContext:(struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x12; void*x13; }*)arg1;
- (NSManagedObjectID *)objectID;
- (<ICLegacyFolder> *)parentFolder;
- (NSString *)title;

@end
