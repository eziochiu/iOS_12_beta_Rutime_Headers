/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingMovieEvent : KNRecordingEvent {
    long long  _movieEventType;
    double  _movieEventValue;
    TSPLazyReference * _movieInfoReference;
}

@property (nonatomic, readonly) bool beginsScrubbing;
@property (nonatomic, readonly) bool endsScrubbing;
@property (nonatomic, readonly) long long movieEventType;
@property (nonatomic, readonly) double movieEventValue;
@property (nonatomic, readonly) TSDMovieInfo *movieInfo;
@property (nonatomic, readonly) double rate;
@property (nonatomic, readonly) double seekTime;
@property (nonatomic, readonly) bool startsPlayback;
@property (nonatomic, readonly) bool stopsPlayback;

- (void).cxx_destruct;
- (bool)beginsScrubbing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)endsScrubbing;
- (unsigned long long)hash;
- (id)initWithParentEventTrack:(id)arg1 archive:(const struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct RecordingNavigationEventArchive {} *x6; struct RecordingLaserEventArchive {} *x7; struct RecordingPauseEventArchive {} *x8; struct RecordingMovieEventArchive {} *x9; }*)arg2 unarchiver:(id)arg3;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 beginningScrubbingForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 endingScrubbingForMovieInfo:(id)arg2 withRate:(double)arg3;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 movieEventType:(long long)arg3 movieEventValue:(double)arg4;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 rate:(double)arg3;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 seekTime:(double)arg3;
- (id)initWithStartTime:(double)arg1 startingPlaybackForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 stoppingPlaybackForMovieInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isIgnoredWhenSeeking;
- (long long)movieEventType;
- (double)movieEventValue;
- (id)movieInfo;
- (double)rate;
- (void)saveToArchive:(struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct RecordingNavigationEventArchive {} *x6; struct RecordingLaserEventArchive {} *x7; struct RecordingPauseEventArchive {} *x8; struct RecordingMovieEventArchive {} *x9; }*)arg1 archiver:(id)arg2;
- (double)seekTime;
- (bool)startsPlayback;
- (bool)stopsPlayback;

@end
