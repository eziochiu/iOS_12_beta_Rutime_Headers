/* made by EzioChiu.
 */

@protocol XCUIAccessibilityInterface <NSObject, XCUIAXNotificationHandling, XCTElementSnapshotAttributeDataSource, XCTElementSnapshotProvider>

@required

- (double)AXTimeout;
- (id)addObserverForAXNotification:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, XCAccessibilityElement *, NSDictionary *, void*
- (bool)cachedAccessibilityLoadedValueForPID:(int)arg1;
- (bool)enableFauxCollectionViewCells:(id*)arg1;
- (XCAccessibilityElement *)hitTestElement:(XCElementSnapshot *)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2 error:(id*)arg3;
- (NSArray *)interruptingUIElementsAffectingSnapshot:(XCElementSnapshot *)arg1;
- (bool)loadAccessibility:(id*)arg1;
- (NSArray *)localizableStringsDataForActiveApplications;
- (void)notifyOnNextOccurrenceOfUserTestingEvent:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)notifyWhenEventLoopIsIdleForApplication:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: XCUIApplicationProcess *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)notifyWhenNoAnimationsAreActiveForApplication:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: XCUIApplicationProcess *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)notifyWhenViewControllerViewDidAppearReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)notifyWhenViewControllerViewDidDisappearReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (id)parameterizedAttribute:(NSString *)arg1 forElement:(XCAccessibilityElement *)arg2 parameter:(id)arg3;
- (bool)performAction:(int)arg1 onElement:(XCAccessibilityElement *)arg2 value:(id)arg3 error:(id*)arg4;
- (void)registerForAXNotificationsForApplicationWithPID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeObserver:(id)arg1 forAXNotification:(NSString *)arg2;
- (void)setAXTimeout:(double)arg1;
- (bool)setAttribute:(NSString *)arg1 value:(id)arg2 element:(XCAccessibilityElement *)arg3 outError:(id*)arg4;
- (XCElementSnapshot *)snapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 error:(id*)arg4;
- (bool)supportsAnimationsInactiveNotifications;

@end
