/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDFaceTimeAudioAction : DDCallAction

+ (bool)isAvailable;

- (id)callProvider;
- (int)interactionType;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;

@end
