/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface iLifeDebug : NSObject

+ (id)debugAssertBehaviorFilePath;
+ (void)drawBorder:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withColor:(id)arg2;
+ (void)drawViewBorder:(id)arg1 withColor:(id)arg2;
+ (void)evaluateDebugAssertBehaviorSettings;
+ (bool)handledAsDebugAssertBehaviorURL:(id)arg1;
+ (void)loadOnce;
+ (void)readDebugAssertBehaviorFromDisk;
+ (void)removeDebugAssertBehaviorFile;
+ (void)writeDebugAssertBehaviorStringToDisk:(id)arg1;
+ (void)writeDebugAssertBehaviorValueToDisk:(int)arg1;

@end
