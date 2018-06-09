/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSDictionary *bootTransitionContext;
@property (nonatomic, readonly) bool dontLockAfterCrash;
@property (nonatomic) bool hasCompletedSynchronizingCloudCriticalData;
@property (nonatomic, retain) NSString *lastRestoreIdentifier;
@property (nonatomic, retain) NSString *lastSystemBuildVersion;
@property (nonatomic, readonly) bool recordBootTimeTillDidFinishLaunching;

- (void)_bindAndRegisterDefaults;

@end
