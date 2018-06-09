/* made by EzioChiu.
 */

@protocol CADAccountAccessHandler

@required

- (void)invalidate;
- (bool)isAccountManaged:(NSString *)arg1;
- (bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(NSString *)arg2;
- (NSSet *)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;

@end
