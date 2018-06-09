/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecordingCompositionController : RCCompositionController {
    NSString * _savedRecordingUUID;
}

@property (nonatomic, readonly) NSString *savedRecordingUUID;

+ (id)compositionControllerForCreatingSavedRecording;
+ (id)compositionControllerForExistingSavedRecording:(id)arg1;
+ (id)compositionControllerForExistingSavedRecordingUUID:(id)arg1;

- (void).cxx_destruct;
- (void)activeRecordingSessionWillFinish;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(struct { double x1; double x2; })arg2 isUndoable:(bool)arg3 isOverdub:(bool)arg4 sessionPreparedBlock:(id /* block */)arg5 sessionFinishedBlock:(id /* block */)arg6;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (id)initWithComposition:(id)arg1;
- (id)initWithExistingSavedRecording:(id)arg1;
- (id)initWithExistingSavedRecordingUUID:(id)arg1;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)performCompositionUndoWithCompletionBlock:(id /* block */)arg1;
- (id)savedRecordingUUID;
- (void)setComposition:(id)arg1;

@end
