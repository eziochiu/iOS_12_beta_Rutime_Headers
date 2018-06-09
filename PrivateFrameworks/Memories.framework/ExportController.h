/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ExportController : NSObject {
    bool  _playAltClips;
    bool  _supportArbitraryAspectRatio;
    NSString * m_currentPreset;
    id  m_delegate;
    NSString * m_exportPath;
    bool  m_exportToPhotos;
    unsigned long long  m_exportingIndexPresets;
    bool  m_inTestMode;
    <MovieControllerExportProtocol> * m_movieController;
    NSArray * m_presets;
    NSTimer * m_progressTimer;
    Project * m_project;
    BEAlertController * m_testModeAutoExportCompletedAlert;
    bool  m_usingExistingRenderFile;
}

@property (nonatomic, retain) NSString *currentPreset;
@property (nonatomic) <ExportDelegate> *delegate;
@property (nonatomic, retain) NSString *exportPath;
@property (nonatomic) bool exportToPhotos;
@property (nonatomic) unsigned long long exportingIndexPresets;
@property (nonatomic, retain) <MovieControllerExportProtocol> *movieController;
@property (nonatomic) bool playAltClips;
@property (nonatomic, retain) NSArray *presets;
@property (nonatomic, retain) NSTimer *progressTimer;
@property (nonatomic, retain) Project *project;
@property (getter=shouldSupportArbitraryAspectRatio, nonatomic) bool supportArbitraryAspectRatio;
@property (nonatomic, retain) BEAlertController *testModeAutoExportCompletedAlert;

+ (unsigned long long)audioDataRateForPreset:(id)arg1;
+ (id)currentTitle:(unsigned long long)arg1;
+ (unsigned long long)dataRateForPreset:(id)arg1;
+ (unsigned long long)dataRateForiCloud4G;
+ (unsigned long long)dataRateForiCloudHD;
+ (unsigned long long)estimatedVideoFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 project:(id)arg4;
+ (void)exitTestMode;
+ (Class)exportControllerClass;
+ (bool)inTestMode;
+ (bool)testModeCopyToCameraRoll;
+ (unsigned long long)testModeMaxFrameToProcess;
+ (bool)testModeNoDialogAtEnd;
+ (id)testModeProject:(id)arg1;
+ (id)testModeProjectBundle;
+ (id)testModeProjectPlaceholder;
+ (unsigned long long)testModeRepeatCount;
+ (unsigned long long)testModeType;
+ (unsigned long long)videoDataRateForPreset:(id)arg1;

- (void)beginAsynchronousExport;
- (void)cancelExport;
- (void)closeSession;
- (void)continueExportAfterDelay;
- (void)createMovieController;
- (id)currentPreset;
- (void)dealloc;
- (id)delegate;
- (void)displayAlertTitle:(id)arg1 message:(id)arg2;
- (void)displayDiskSpaceError;
- (void)displayError:(id)arg1;
- (void)displayExportedToPhotos;
- (id)exportPath;
- (bool)exportToPhotos;
- (unsigned long long)exportingIndexPresets;
- (id)hasExistingFile;
- (void)informDelegateOfCompletion;
- (id)initWithWithProject:(id)arg1 presets:(id)arg2 exportToPhotos:(bool)arg3 delegate:(id)arg4;
- (id)metadataToAdd;
- (id)movieController;
- (void)nextPreset;
- (void)noteSessionProgressed:(float)arg1;
- (bool)playAltClips;
- (id)presets;
- (float)progress;
- (id)progressTimer;
- (id)project;
- (void)releaseMovieController;
- (void)serviceProgressTimer:(id)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExportPath:(id)arg1;
- (void)setExportToPhotos:(bool)arg1;
- (void)setExportingIndexPresets:(unsigned long long)arg1;
- (void)setMovieController:(id)arg1;
- (void)setPlayAltClips:(bool)arg1;
- (void)setPresets:(id)arg1;
- (void)setProgressTimer:(id)arg1;
- (void)setProject:(id)arg1;
- (void)setSupportArbitraryAspectRatio:(bool)arg1;
- (void)setTestModeAutoExportCompletedAlert:(id)arg1;
- (bool)shouldSupportArbitraryAspectRatio;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (id)testModeAutoExportCompletedAlert;
- (id)thumbnailImage;
- (void)updateProgressViewWithProgress:(float)arg1 reduced:(bool)arg2;
- (void)writeVideoFileToSavedPhotoAlbum:(id)arg1;

@end
