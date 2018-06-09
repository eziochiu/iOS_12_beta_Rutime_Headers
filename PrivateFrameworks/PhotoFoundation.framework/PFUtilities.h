/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFUtilities : NSObject

+ (bool)didStopInDebugger;
+ (void)getSystemVersionMajor:(unsigned int*)arg1 systemVersionMinor:(unsigned int*)arg2 systemVersionBugFixRev:(unsigned int*)arg3;
+ (bool)hasEnabledManagedUserDefault:(id)arg1;
+ (bool)hasInternalPhotosDiagnosticsCapability;
+ (bool)isOnACPower:(double*)arg1;
+ (bool)runningUnderDebugger;

@end