/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIText : NSObject

+ (void)addTextFromPoint:(id)arg1 level:(unsigned int)arg2 includeChildren:(bool)arg3 toShape:(id)arg4 baseListStyle:(id)arg5 state:(id)arg6;
+ (id)baseListStyleForPoint:(id)arg1 shape:(id)arg2 isCentered:(bool)arg3 state:(id)arg4;
+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCentered:(bool)arg3 includeChildren:(bool)arg4 state:(id)arg5;
+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCenteredHorizontally:(bool)arg3 isCenteredVertically:(bool)arg4 includeChildren:(bool)arg5 state:(id)arg6;

@end
