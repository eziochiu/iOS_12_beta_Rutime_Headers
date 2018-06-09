/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKConferenceURLDetector : NSObject

+ (id)_dataDetector;
+ (bool)_isPreferredURL:(id)arg1;
+ (bool)_isValidTelURL:(id)arg1;
+ (id)_linksInSource:(id)arg1;
+ (id)_preferredHostSuffixes;
+ (id)conferenceURLFromSources:(id)arg1;
+ (id)logHandle;

@end
