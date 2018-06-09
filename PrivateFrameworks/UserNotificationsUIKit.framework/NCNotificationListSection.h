/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListSection : NSObject <BSDescriptionProviding> {
    <NCNotificationListSectionDelegate> * _delegate;
    NSString * _identifier;
    NSMutableOrderedSet * _notificationListItems;
    NSHashTable * _notificationListItemsHashTable;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *allNotificationRequests;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSMutableOrderedSet *notificationListItems;
@property (nonatomic, retain) NSHashTable *notificationListItemsHashTable;
@property (nonatomic, retain) NSDate *sectionDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)_coalescingIdentifierForNotificationRequest:(id)arg1;
- (bool)_containsNotificationListItem:(id)arg1;
- (unsigned long long)_indexOfListItemMatchingListItem:(id)arg1;
- (unsigned long long)_indexOfListItemWithCoalescingIdentifier:(id)arg1;
- (long long)_insertionIndexComparisonForNotificationRequest:(id)arg1 withRequest:(id)arg2;
- (unsigned long long)_insertionIndexForNotificationRequestItem:(id)arg1;
- (unsigned long long)_insertionIndexIfExistingCoalescedNotificationForNotificationRequest:(id)arg1;
- (unsigned long long)_insertionIndexIfNonExpandedNotificationRequest:(id)arg1;
- (unsigned long long)_nextIndexOfExpandedNotificationStackStartingAtIndex:(unsigned long long)arg1 coalescingIdentifier:(id)arg2;
- (id)_notificationRequestForListItem:(id)arg1;
- (id)_notificationRequestItemForListItem:(id)arg1;
- (id)_notificationRequestItemForNotificationRequest:(id)arg1;
- (bool)_shouldInsertForExpandedStackNotificationRequest:(id)arg1;
- (id)allNotificationRequests;
- (bool)containsNotificationRequestMatchingRequest:(id)arg1;
- (bool)containsNotificationRequestWithSameThreadAsNotificationRequest:(id)arg1;
- (unsigned long long)count;
- (id)debugDescription;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (unsigned long long)indexForNotificationListItem:(id)arg1;
- (long long)indexForNotificationRequest:(id)arg1;
- (unsigned long long)indexOfNotificationRequestMatchingRequest:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (unsigned long long)insertNotificationListItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)insertNotificationRequest:(id)arg1;
- (unsigned long long)insertionIndexForNotificationRequest:(id)arg1;
- (unsigned long long)modifyNotificationRequest:(id)arg1;
- (id)notificationListItemAtIndex:(unsigned long long)arg1;
- (id)notificationListItems;
- (id)notificationListItemsHashTable;
- (id)notificationRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeNotificationListItem:(id)arg1;
- (unsigned long long)removeNotificationRequest:(id)arg1;
- (id)sectionDate;
- (void)setDelegate:(id)arg1;
- (void)setNotificationListItems:(id)arg1;
- (void)setNotificationListItemsHashTable:(id)arg1;
- (void)setSectionDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)title;

@end
