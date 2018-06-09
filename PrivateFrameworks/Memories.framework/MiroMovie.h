/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMovie : NSObject <MemoryOwner> {
    bool  _allowNonPHMemoryForUnitTesting;
    MiroIOSPlayerViewController * _associatedPlayerViewController;
    MiroAutoEditor * _autoEditor;
    <MiroMovieDelegate> * _delegate;
    MiroMemory * _memory;
    NSString * _outputString;
    AVPlayerItem * _playerItem;
}

@property (nonatomic) bool allowNonPHMemoryForUnitTesting;
@property (nonatomic) MiroIOSPlayerViewController *associatedPlayerViewController;
@property (retain) MiroAutoEditor *autoEditor;
@property (nonatomic, readonly) PHAssetCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *defaultAssets;
@property (nonatomic) <MiroMovieDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCompelling;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic, readonly) long long mood;
@property (nonatomic, retain) NSString *outputString;
@property (retain) AVPlayerItem *playerItem;
@property (nonatomic, readonly) UIViewController *playerViewController;
@property (readonly) Class superclass;

+ (bool)runTest:(id)arg1 options:(id)arg2 usingPlayerViewController:(id)arg3;

- (void).cxx_destruct;
- (void)_backgroundInit;
- (id)_getMiroTapToRadarFilePath;
- (id)_tapToRadarBlueprint;
- (id)_tapToRadarDebug;
- (id)_tapToRadarMediaanalysis_db;
- (id)_tapToRadarMediaanalysis_db_shm;
- (id)_tapToRadarMediaanalysis_db_wal;
- (id)_tapToRadarMemory;
- (id)_tapToRadarPicklist;
- (id)_tapToRadarRanges;
- (void)_teardownInternals;
- (void)_testPregenerateWithCompletion:(id /* block */)arg1;
- (bool)allowNonPHMemoryForUnitTesting;
- (id)associatedPlayerViewController;
- (id)autoEditor;
- (void)cancelPregenerateMovie;
- (void)cancelPrepareForPlayback;
- (id)collection;
- (id)createPHMemory;
- (void)dealloc;
- (id)defaultAssets;
- (id)delegate;
- (id)diagnosticItemProvider;
- (id)exportSessionWithPresetName:(id)arg1;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (bool)isCompelling;
- (id)memory;
- (long long)mood;
- (id)moodIDFromMiroMood:(long long)arg1;
- (id)outputString;
- (id)playerItem;
- (id)playerViewController;
- (void)pregenerateMovieWithCompletionHandler:(id /* block */)arg1;
- (void)prepareForPlayback;
- (void)setAllowNonPHMemoryForUnitTesting:(bool)arg1;
- (void)setAssociatedPlayerViewController:(id)arg1;
- (void)setAutoEditor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setOutputString:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)tapToRadar;

@end
