/* made by EzioChiu.
 */

@protocol HMDAWDLogEvent <NSObject>

@required

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
