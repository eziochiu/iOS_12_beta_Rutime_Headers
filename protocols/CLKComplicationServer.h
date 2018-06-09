/* made by EzioChiu.
 */

@protocol CLKComplicationServer <NSObject>

@required

- (void)checkinWithClientIdentifier:(NSString *)arg1 bundlePath:(NSString *)arg2;
- (void)extendTimelineForComplication:(CLKComplication *)arg1;
- (void)reloadTimelineForComplication:(CLKComplication *)arg1;

@end
