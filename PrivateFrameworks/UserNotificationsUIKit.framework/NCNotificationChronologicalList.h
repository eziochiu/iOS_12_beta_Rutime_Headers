/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationChronologicalList : NCNotificationSectionList {
    NSMutableArray * _sections;
}

@property (nonatomic, retain) NSMutableArray *sections;

- (void).cxx_destruct;
- (id)_allNotificationRequests;
- (id)_allNotificationRequestsFromSectionIndex:(unsigned long long)arg1;
- (id)_allSections;
- (unsigned long long)_currentIndexForSection:(id)arg1;
- (id)_existingSectionContainingNotificationRequestWithSameThreadAsNotificationRequest:(id)arg1;
- (id)_existingSectionForDate:(id)arg1;
- (id)_existingSectionForNotificationRequest:(id)arg1;
- (void)_handleLocaleChange;
- (void)_handleTimeZoneChange;
- (id)_identifierForDate:(id)arg1;
- (void)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)_insertionIndexForSection:(id)arg1;
- (id)_newSectionForDate:(id)arg1;
- (id)_newSectionForNotificationRequest:(id)arg1;
- (void)_rebuildSectionsList;
- (void)_reloadSectionHeaders;
- (void)_removeSection:(id)arg1;
- (id)_sectionContainingNotificationRequest:(id)arg1;
- (id)_simpleDateFromDate:(id)arg1;
- (id)_targetIndexPathForNotificationRequest:(id)arg1;
- (id)_titleForDate:(id)arg1;
- (void)_updateListForDateChange;
- (void)clearAllSections;
- (void)clearSectionWithIdentifier:(id)arg1;
- (id)identifierForSectionIndex:(unsigned long long)arg1;
- (id)init;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)notificationRequestsForSectionIdentifier:(id)arg1;
- (unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (long long)sectionIndexForListSectionIdentifier:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)titleForSectionIndex:(unsigned long long)arg1;

@end
