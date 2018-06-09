/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardSupplementaryControlKeyTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)_derivedLeadingControlKeyWidthForRow:(unsigned long long)arg1 keyCountForRow:(unsigned long long)arg2 orientation:(long long)arg3;
+ (double)_derivedTrailingControlKeyWidthForRow:(unsigned long long)arg1 orientation:(long long)arg2;
+ (id)_supplementaryControlKeySetForOrientation:(long long)arg1 context:(id)arg2;
+ (id)_supplementaryControlKeyWithName:(id)arg1 context:(id)arg2;
+ (id)_supplementaryScriptSwitchKeyWithContext:(id)arg1;
+ (id)cachedControlKeySetsForTransformationContext:(id)arg1;
+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)transformationIdentifier;

@end
