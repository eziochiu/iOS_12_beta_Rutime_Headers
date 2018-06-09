/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSLocalDefaults : BSAbstractDefaultDomain

@property (nonatomic) float ALSDelayOnUnlock;
@property (getter=isALSEnabled, nonatomic) bool ALSEnabled;
@property (nonatomic) long long ALSEpoch;
@property (nonatomic, retain) NSDictionary *ALSUserPreferences;
@property (nonatomic) int brightnessCurve;
@property (getter=isDigitizerSignpostsEnabled, nonatomic) bool digitizerSignpostsEnabled;
@property (nonatomic) bool disableCAOverscan;
@property (nonatomic) bool disableCAScaling;
@property (nonatomic) bool disableCAYUV;
@property (nonatomic) bool disableCloneMirroring;
@property (nonatomic) bool disableStudyLogBTKeyboardEventLogging;
@property (nonatomic) bool disableStudyLogBTKeyboardEventRedirection;
@property (nonatomic) bool disableStudyLogButtonLogging;
@property (nonatomic) bool disableStudyLogHomeButtonLogging;
@property (nonatomic) bool disableStudyLogVolumeKeyLogging;
@property (getter=isDitheringEnabled, nonatomic) bool ditheringEnabled;
@property (nonatomic) float fenceArbiterTimeoutInterval;
@property (nonatomic) bool forceCloneMirroring;
@property (nonatomic) NSString *forceMirroredOrientation;
@property (nonatomic) bool hideAppleLogoOnLaunch;
@property (nonatomic) bool ignoreAccelerometerAndOrientationEvents;
@property (nonatomic) bool ignoreTetheringPreferences;
@property (nonatomic) NSArray *loggingTypesEnabled;
@property (nonatomic) bool simulatePhoneButton;
@property (getter=isSteveNoteOverscanEnabled, nonatomic) bool steveNoteOverscanEnabled;
@property (getter=isSteveNoteRotationEnabled, nonatomic) bool steveNoteRotationEnabled;

- (void)_bindAndRegisterDefaults;
- (id)init;
- (void)migrateDefaultsIfNecessary;

@end
