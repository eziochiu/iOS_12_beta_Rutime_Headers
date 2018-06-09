/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVisitManager : NSObject

+ (id)fallbackVisit;
+ (id)sharedVisitManager;

- (id)anyVisit;
- (id)currentVisit;
- (id)previousVisit;
- (struct NSString { Class x1; }*)startVisitUpdatesWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)stopVisitUpdatesForToken:(struct NSString { Class x1; }*)arg1;

@end
