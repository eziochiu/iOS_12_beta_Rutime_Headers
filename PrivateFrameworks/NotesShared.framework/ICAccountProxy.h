/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAccountProxy : NSObject <ICNoteContainer> {
    ICAccount * _account;
}

@property (retain) ICAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICAccount *noteContainerAccount;
@property (readonly) Class superclass;

+ (id)accountProxyWithAccount:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)accountName;
- (bool)canBeSharedViaICloud;
- (long long)compare:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (bool)isDeleted;
- (bool)isLeaf;
- (id)noteContainerAccount;
- (bool)noteIsVisible:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForPinnedNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleNotes;
- (void)setAccount:(id)arg1;
- (bool)supportsEditingNotes;
- (bool)supportsVisibilityTestingType:(long long)arg1;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (id)visibleNoteContainerChildren;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;

@end
