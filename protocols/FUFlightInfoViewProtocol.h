/* made by EzioChiu.
 */

@protocol FUFlightInfoViewProtocol <NSObject>

@required

- (void)flightInfoView:(FUFlightInfoView *)arg1 didUpdateFocus:(long long)arg2;
- (bool)hasFollowupContent:(FUFlightInfoView *)arg1;

@end
