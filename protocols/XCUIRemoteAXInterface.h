/* made by EzioChiu.
 */

@protocol XCUIRemoteAXInterface <NSObject>

@required

- (void)enableFauxCollectionViewCells:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchAttributes:(void *)arg1 forElement:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, XCAccessibilityElement *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchAttributesForElement:(void *)arg1 attributes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: XCAccessibilityElement *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchParameterizedAttribute:(void *)arg1 forElement:(void *)arg2 parameter:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 13: NSString *, XCAccessibilityElement *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)loadAccessibilityWithTimeout:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performAccessibilityAction:(void *)arg1 onElement:(void *)arg2 value:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: int, XCAccessibilityElement *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)registerForAccessibilityNotification:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)requestElementAtPoint:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, XCAccessibilityElement *, NSError *, void*
- (void)requestSnapshotForElement:(void *)arg1 attributes:(void *)arg2 parameters:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: XCAccessibilityElement *, NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, XCElementSnapshot *, NSError *, void*
- (void)setAXTimeout:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setAttribute:(void *)arg1 value:(void *)arg2 element:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, id, XCAccessibilityElement *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setLocalizableStringsDataGatheringEnabled:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)snapshotForElement:(void *)arg1 attributes:(void *)arg2 parameters:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: XCAccessibilityElement *, NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, XCElementSnapshot *, NSError *, void*
- (void)unregisterForAccessibilityNotification:(void *)arg1 registrationToken:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)useLegacySnapshotPath;

@end
