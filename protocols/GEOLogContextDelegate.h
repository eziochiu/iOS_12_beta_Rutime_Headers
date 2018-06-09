/* made by EzioChiu.
 */

@protocol GEOLogContextDelegate <NSObject>

@optional

- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (GEOLogContext *)logContextForLogMsgEvent:(GEOLogMsgEvent *)arg1;
- (int)searchFieldTypeForAnalytics;

@end
