/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DALocalDBGateKeeper : NSObject {
    <DADataclassLockWatcher> * _bookmarksLockHolder;
    NSMutableArray * _bookmarksWaiters;
    bool  _claimedOwnershipOfBookmarks;
    bool  _claimedOwnershipOfContacts;
    bool  _claimedOwnershipOfEvents;
    bool  _claimedOwnershipOfNotes;
    <DADataclassLockWatcher> * _contactsLockHolder;
    NSMutableArray * _contactsWaiters;
    <DADataclassLockWatcher> * _eventsLockHolder;
    NSMutableArray * _eventsWaiters;
    <DADataclassLockWatcher> * _notesLockHolder;
    NSMutableArray * _notesWaiters;
    NSString * _unitTestHackRunLoopMode;
    NSMutableSet * _waiterIDsExpectingBookmarksLock;
    NSMutableSet * _waiterIDsExpectingContactsLock;
    NSMutableSet * _waiterIDsExpectingEventsLock;
    NSMutableSet * _waiterIDsExpectingNotesLock;
}

@property (nonatomic, retain) <DADataclassLockWatcher> *bookmarksLockHolder;
@property (nonatomic, retain) NSMutableArray *bookmarksWaiters;
@property (nonatomic) bool claimedOwnershipOfBookmarks;
@property (nonatomic) bool claimedOwnershipOfContacts;
@property (nonatomic) bool claimedOwnershipOfEvents;
@property (nonatomic) bool claimedOwnershipOfNotes;
@property (nonatomic, retain) <DADataclassLockWatcher> *contactsLockHolder;
@property (nonatomic, retain) NSMutableArray *contactsWaiters;
@property (nonatomic, retain) <DADataclassLockWatcher> *eventsLockHolder;
@property (nonatomic, retain) NSMutableArray *eventsWaiters;
@property (nonatomic, retain) <DADataclassLockWatcher> *notesLockHolder;
@property (nonatomic, retain) NSMutableArray *notesWaiters;
@property (nonatomic, retain) NSString *unitTestHackRunLoopMode;
@property (nonatomic, retain) NSMutableSet *waiterIDsExpectingBookmarksLock;
@property (nonatomic, retain) NSMutableSet *waiterIDsExpectingContactsLock;
@property (nonatomic, retain) NSMutableSet *waiterIDsExpectingEventsLock;
@property (nonatomic, retain) NSMutableSet *waiterIDsExpectingNotesLock;

+ (id)sharedGateKeeper;

- (void).cxx_destruct;
- (void)_abortWaiterForWrappers:(id)arg1;
- (bool)_canWakenWaiter:(id)arg1;
- (void)_notifyWaitersForDataclasses:(id)arg1;
- (void)_registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 preempt:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_sendAllClearNotifications;
- (void)_setUnitTestHackRunLoopMode:(id)arg1;
- (id)bookmarksLockHolder;
- (id)bookmarksWaiters;
- (bool)claimedOwnershipOfBookmarks;
- (bool)claimedOwnershipOfContacts;
- (void)claimedOwnershipOfDataclasses:(long long)arg1;
- (bool)claimedOwnershipOfEvents;
- (bool)claimedOwnershipOfNotes;
- (id)contactsLockHolder;
- (id)contactsWaiters;
- (void)dealloc;
- (id)eventsLockHolder;
- (id)eventsWaiters;
- (id)init;
- (id)notesLockHolder;
- (id)notesWaiters;
- (void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(long long)arg2 moreComing:(bool)arg3;
- (void)setBookmarksLockHolder:(id)arg1;
- (void)setBookmarksWaiters:(id)arg1;
- (void)setClaimedOwnershipOfBookmarks:(bool)arg1;
- (void)setClaimedOwnershipOfContacts:(bool)arg1;
- (void)setClaimedOwnershipOfEvents:(bool)arg1;
- (void)setClaimedOwnershipOfNotes:(bool)arg1;
- (void)setContactsLockHolder:(id)arg1;
- (void)setContactsWaiters:(id)arg1;
- (void)setEventsLockHolder:(id)arg1;
- (void)setEventsWaiters:(id)arg1;
- (void)setNotesLockHolder:(id)arg1;
- (void)setNotesWaiters:(id)arg1;
- (void)setUnitTestHackRunLoopMode:(id)arg1;
- (void)setWaiterIDsExpectingBookmarksLock:(id)arg1;
- (void)setWaiterIDsExpectingContactsLock:(id)arg1;
- (void)setWaiterIDsExpectingEventsLock:(id)arg1;
- (void)setWaiterIDsExpectingNotesLock:(id)arg1;
- (id)stateString;
- (id)unitTestHackRunLoopMode;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;
- (id)waiterIDsExpectingBookmarksLock;
- (id)waiterIDsExpectingContactsLock;
- (id)waiterIDsExpectingEventsLock;
- (id)waiterIDsExpectingNotesLock;

@end
