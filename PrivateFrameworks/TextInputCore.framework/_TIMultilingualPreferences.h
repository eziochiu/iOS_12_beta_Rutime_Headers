/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TIInputMode *preferredSecondaryInputMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *userEnabledInputModes;

+ (id)inputModesForIdentifiers:(id)arg1;

- (id)preferredSecondaryInputMode;
- (id)userEnabledInputModes;

@end
