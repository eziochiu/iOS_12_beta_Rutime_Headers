/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface Stopwatch : NSObject

+ (double)elapsedTime;
+ (void)start;
+ (void)stop;
+ (void)stopWithMessage:(id)arg1 precision:(int)arg2;
+ (void)stopWithMessage:(id)arg1 precision:(int)arg2 elapsedtimeBiggerThan:(double)arg3;

@end
