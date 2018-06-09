/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArrayQueueItem : NSObject {
    MPAVItem * _item;
    NSString * _path;
    double  _startTime;
    double  _stopTime;
}

@property (nonatomic, readonly) MPAVItem *item;
@property (nonatomic, copy) NSString *path;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMPAVItem:(id)arg1;
- (id)item;
- (id)path;
- (void)setPath:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(double)arg1;
- (double)startTime;
- (double)stopTime;

@end
