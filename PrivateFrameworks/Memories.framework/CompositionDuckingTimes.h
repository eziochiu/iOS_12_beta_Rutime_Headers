/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface CompositionDuckingTimes : NSObject {
    NSMutableArray * m_duckingEvents;
    int  m_projectDurationInFrames;
}

@property (nonatomic, retain) NSMutableArray *duckingEvents;
@property int projectDurationInFrames;

+ (id)compositionDuckingTimesWithProject:(id)arg1;

- (void)addDuckingFromTime:(int)arg1 toTime:(int)arg2;
- (void)appendDuckingChangeAtFrameTime:(int)arg1 shouldDuck:(bool)arg2;
- (bool)clipIsAudible:(id)arg1;
- (void)dealloc;
- (id)duckingEvents;
- (id)initWithProject:(id)arg1;
- (void)makeDuckingDataForEditListWithProject:(id)arg1;
- (void)makeDuckingDataForForegroundAudioClipsWithProject:(id)arg1;
- (int)nextDuckChangeTimeFromTime:(int)arg1;
- (int)projectDurationInFrames;
- (void)setDuckingEvents:(id)arg1;
- (void)setProjectDurationInFrames:(int)arg1;
- (bool)shouldDuckAtTime:(int)arg1;

@end
