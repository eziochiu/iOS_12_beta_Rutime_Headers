/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHParagraph : NSObject

+ (id)getBulletStyle:(id)arg1 level:(int)arg2;
+ (int)handleBookmark:(id)arg1 state:(id)arg2;
+ (int)handleInlineList:(id)arg1 state:(id)arg2;
+ (int)handleLink:(id)arg1 state:(id)arg2;
+ (int)handleParagraph:(id)arg1 state:(id)arg2 bulletStates:(struct __CFDictionary { }*)arg3 isMultiColumn:(bool)arg4;
+ (void)mapBullet:(struct __CFDictionary { }*)arg1 state:(id)arg2;
+ (int)mapParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary { }*)arg4 isMultiColumn:(bool)arg5;
+ (struct __CFDictionary { }*)prepareBullet:(id)arg1 paragraph:(id)arg2 style:(id)arg3 state:(id)arg4 bulletStates:(struct __CFDictionary { }*)arg5 showBullet:(bool)arg6;
+ (bool)retrieveFontSizeForFirstCharacter:(id)arg1 fontSize:(float*)arg2;
+ (bool)setupBulletStatesForParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary { }*)arg4;

@end
