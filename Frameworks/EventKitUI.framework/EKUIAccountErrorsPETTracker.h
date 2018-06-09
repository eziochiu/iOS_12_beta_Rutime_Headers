/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIAccountErrorsPETTracker : NSObject

+ (id)_actionableErrorDisplayedTracker;
+ (id)_actionableErrorInteractedTracker;
+ (id)_offlineErrorDisplayedTracker;
+ (id)_otherErrorDisplayedTracker;
+ (id)_refreshedWhileOfflineTracker;
+ (id)_rootUIErrorEventTracker;
+ (id)_unknownErrorDisplayedTracker;
+ (void)trackCalendarListDisplayedActionableError;
+ (void)trackCalendarListDisplayedOfflineError;
+ (void)trackCalendarListDisplayedOtherError;
+ (void)trackCalendarListDisplayedUnknownError;
+ (void)trackCalendarListInteractedWithError;
+ (void)trackRefreshedWhileOffline;
+ (void)trackRootUIDisplayedError;
+ (void)trackRootUIInteractedWithError;

@end
