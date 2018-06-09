/* made by EzioChiu.
 */

@protocol BWNodeFileWriterStatusDelegate <NSObject>

@required

- (void)fileWriter:(BWFileSinkNode *)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(BWFileSinkNode *)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(BWFileSinkNode *)arg1 startedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(BWFileSinkNode *)arg1 stoppedRecordingForSettings:(FigCaptureRecordingSettings *)arg2 withError:(int)arg3 thumbnailSurface:(struct __IOSurface { }*)arg4 irisMovieInfo:(BWIrisMovieInfo *)arg5 debugMetadataSidecarFileURL:(NSURL *)arg6 recordingSucceeded:(bool)arg7;

@end
