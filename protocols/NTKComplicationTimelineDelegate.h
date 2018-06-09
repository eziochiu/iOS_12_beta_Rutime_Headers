/* made by EzioChiu.
 */

@protocol NTKComplicationTimelineDelegate <NSObject>

@required

- (void)nowEntryDidChangeFrom:(id <CLKTimelineEntry>)arg1 to:(id <CLKTimelineEntry>)arg2;
- (void)timeTravelEntryDidChangeFrom:(id <CLKTimelineEntry>)arg1 to:(id <CLKTimelineEntry>)arg2;

@end
