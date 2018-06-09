/* made by EzioChiu.
 */

@protocol CADPermissionValidator <NSObject>

@required

- (bool)canMakeSpotlightChanges;
- (bool)canModifyCalendarDatabase;
- (bool)canModifySuggestedEventCalendar;
- (bool)hasCalendarToolEntitlement;
- (bool)hasChangeIdTrackingOverrideEntitlement;
- (bool)hasContactsUIEntitlement;
- (bool)hasMigrationEntitlement;
- (bool)hasSyncClientEntitlement;
- (bool)internalAccessLevelGranted;
- (bool)testingAccessLevelGranted;

@end
