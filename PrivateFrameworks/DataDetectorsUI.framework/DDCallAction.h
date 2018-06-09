/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDCallAction : DDTelephoneNumberAction

+ (bool)isAvailable;

- (long long)TTYType;
- (double)_systemFontSize;
- (bool)_titleFitsInActionSheet:(id)arg1;
- (id)callProvider;
- (bool)canBePerformedByOpeningURL;
- (id)dialRequest;
- (int)interactionType;
- (bool)isEmail;
- (id)localizedCallStringForName:(id)arg1 usingCallRelay:(bool)arg2;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationTitleTargetString;
- (id)notificationURL;
- (void)performFromView:(id)arg1;

@end
