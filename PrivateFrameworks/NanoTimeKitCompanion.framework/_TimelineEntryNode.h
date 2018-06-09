/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _TimelineEntryNode : _TimelineNode {
    <CLKTimelineEntry> * _entry;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, retain) <CLKTimelineEntry> *entry;

- (void).cxx_destruct;
- (id)date;
- (id)entry;
- (void)setEntry:(id)arg1;

@end
