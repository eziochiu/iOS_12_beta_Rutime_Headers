/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationSingleSectionList : NCNotificationSectionList {
    NCNotificationListSection * _section;
}

@property (nonatomic, retain) NCNotificationListSection *section;

- (void).cxx_destruct;
- (id)_allNotificationRequests;
- (id)_allSections;
- (unsigned long long)_currentIndexForSection:(id)arg1;
- (id)_existingSectionForNotificationRequest:(id)arg1;
- (void)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)_insertionIndexForSection:(id)arg1;
- (id)_newSectionForNotificationRequest:(id)arg1;
- (void)_removeSection:(id)arg1;
- (id)_sectionContainingNotificationRequest:(id)arg1;
- (id)_targetIndexPathForNotificationRequest:(id)arg1;
- (void)clearAllSections;
- (void)clearSectionWithIdentifier:(id)arg1;
- (id)identifierForSectionIndex:(unsigned long long)arg1;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)notificationRequestsForSectionIdentifier:(id)arg1;
- (unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1;
- (id)section;
- (unsigned long long)sectionCount;
- (long long)sectionIndexForListSectionIdentifier:(id)arg1;
- (void)setSection:(id)arg1;
- (id)titleForSectionIndex:(unsigned long long)arg1;

@end
