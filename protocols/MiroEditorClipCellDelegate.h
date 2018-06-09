/* made by EzioChiu.
 */

@protocol MiroEditorClipCellDelegate <NSObject>

@optional

- (unsigned long long)editorClipCellAudioLevelForClip:(MiroEditorClipCell *)arg1;
- (void)editorClipCellDidChangeAudioLevel:(MiroEditorClipCell *)arg1;
- (void)editorClipCellDidStartPlaying:(MiroEditorClipCell *)arg1;
- (void)editorClipCellDidStopPlaying:(MiroEditorClipCell *)arg1;
- (bool)editorClipCellShouldShowCircularPlayButton:(MiroEditorClipCell *)arg1;
- (void)editorClipCellWillStartPlaying:(MiroEditorClipCell *)arg1;
- (void)editorClipCellWillStopPlaying:(MiroEditorClipCell *)arg1;

@end
