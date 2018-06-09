/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHIndexableContentQuery : CHQuery {
    CHRecognitionSessionIndexableContent * _indexableContent;
}

@property (setter=_setIndexableContent:, retain) CHRecognitionSessionIndexableContent *indexableContent;

- (void)_setIndexableContent:(id)arg1;
- (void)dealloc;
- (id)debugName;
- (id)indexableContent;
- (void)q_updateQueryResult;
- (bool)wantsHighFrequencyNotifications;

@end
