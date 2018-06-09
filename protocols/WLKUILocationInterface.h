/* made by EzioChiu.
 */

@protocol WLKUILocationInterface <JSExport>

@required

- (NSNumber *)authorizationStatus;
- (void)requestAuthorization;
- (void)shouldUpdateUserLocation;

@end
