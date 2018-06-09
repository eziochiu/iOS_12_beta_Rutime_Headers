/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ProjectChangeLog : NSObject {
    PVEffect * _filterEffect;
    NSString * m_audioTimePitchAlgorithm;
    NSMutableArray * m_backgroundAudioClips;
    NSMutableSet * m_capturedClips;
    NSMutableArray * m_clipChangeLogs;
    NSMutableSet * m_clipsNeedingDisplay;
    NSMutableArray * m_cutaways;
    NSMutableArray * m_editList;
    bool  m_fadeInFromBlack;
    bool  m_fadeOutToBlack;
    NSMutableArray * m_foregroundAudioClips;
    Project * m_project;
    NSString * m_themeID;
    NSMutableDictionary * m_trailerDict;
    bool  m_useThemeAudio;
}

@property (nonatomic, readonly) NSSet *capturedClips;
@property (nonatomic, readonly) NSSet *clipsNeedingDisplay;
@property (nonatomic, copy) PVEffect *filterEffect;
@property (nonatomic, readonly) bool hasChanges;

- (void)captureClip:(id)arg1 needsDisplay:(bool)arg2;
- (void)captureProject:(id)arg1;
- (id)capturedClips;
- (id)clipsNeedingDisplay;
- (void)dealloc;
- (id)description;
- (id)filterEffect;
- (bool)hasChanges;
- (id)initWithProject:(id)arg1;
- (id)redoProjectChangeLog;
- (id)restoreProject;
- (void)setFilterEffect:(id)arg1;

@end