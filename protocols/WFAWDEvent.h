/* made by EzioChiu.
 */

@protocol WFAWDEvent <NSObject>

@required

- (PBCodable<WFAWDWiFiUIEvent> *)metric;
- (unsigned int)metricIdentifier;

@end
