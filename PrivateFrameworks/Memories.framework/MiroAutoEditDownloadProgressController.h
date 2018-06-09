/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditDownloadProgressController : NSObject {
    MiroAutoEditor * _autoEditor;
    <MiroAutoEditDownloadProgressControllerDelegate> * _delegate;
    bool  _progressIncludesDownload;
    RoundProgressViewController * _progressViewController;
    bool  _shouldHandleProgressUpdates;
}

@property (nonatomic, retain) MiroAutoEditor *autoEditor;
@property (nonatomic) <MiroAutoEditDownloadProgressControllerDelegate> *delegate;
@property (nonatomic) bool progressIncludesDownload;
@property (nonatomic, retain) RoundProgressViewController *progressViewController;
@property (nonatomic) bool shouldHandleProgressUpdates;

- (void).cxx_destruct;
- (void)_cancelProgress:(id)arg1;
- (void)_dismissProgressUserDidCancel:(bool)arg1;
- (void)_dismissProgressWithCompletion:(id /* block */)arg1;
- (void)_handleAutoEditorChangedDownloadProgressNotification:(id)arg1;
- (void)_handleAutoEditorChangedProgressNotification:(id)arg1;
- (void)_handleAutoEditorDidCancelNotification:(id)arg1;
- (void)_handleAutoEditorDidEndNotification:(id)arg1;
- (void)_handleAutoEditorWillBeginNotification:(id)arg1;
- (void)_presentProgressWithCompletion:(id /* block */)arg1;
- (id)autoEditor;
- (void)dealloc;
- (id)delegate;
- (id)initWithAutoEditor:(id)arg1;
- (bool)progressIncludesDownload;
- (id)progressViewController;
- (void)setAutoEditor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgressIncludesDownload:(bool)arg1;
- (void)setProgressViewController:(id)arg1;
- (void)setShouldHandleProgressUpdates:(bool)arg1;
- (bool)shouldHandleProgressUpdates;

@end
