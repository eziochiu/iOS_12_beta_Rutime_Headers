/* made by EzioChiu.
 */

@protocol GEODirectionsError <NSObject>

@required

- (long long)firstDirectionsErrorCode;
- (bool)hasError:(long long)arg1;
- (<GEOTransitRoutingIncidentMessage> *)incidentMessage;
- (NSString *)localizedDescription;
- (NSString *)localizedTitle;

@end
