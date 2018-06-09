/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHKeynote : NSObject <GQKeynoteGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)beginPresentation:(id)arg1 state:(id)arg2;
+ (int)beginSlide:(id)arg1 state:(id)arg2;
+ (int)endPresentation:(id)arg1 state:(id)arg2;
+ (int)endSlide:(id)arg1 state:(id)arg2;
+ (Class)enterSlideDrawables:(id)arg1 state:(id)arg2;
+ (int)handleSlideSize:(id)arg1 state:(id)arg2;
+ (int)handleThemeStylesheet:(id)arg1 state:(id)arg2;

@end
