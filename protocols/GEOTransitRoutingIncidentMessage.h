/* made by EzioChiu.
 */

@protocol GEOTransitRoutingIncidentMessage <NSObject>

@required

- (NSString *)routingMessage;
- (NSArray *)transitIncidents;

@end
