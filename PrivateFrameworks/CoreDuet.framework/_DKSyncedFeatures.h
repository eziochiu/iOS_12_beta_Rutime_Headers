/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncedFeatures : NSObject

+ (id)sharedInstance;

- (bool)anyFeatureEnabled;
- (id)description;
- (bool)isDigitalHealthDisabled;
- (bool)isIDSMessageGatingDisabled;
- (bool)isSiriPortraitDisabled;
- (bool)isSupergreenDisabled;

@end
