/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVQueueFeeder : NSObject

- (double)bookmarkTimeForIndex:(unsigned long long)arg1;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg1;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)init;
- (unsigned long long)itemCount;
- (unsigned long long)numberOfPaths;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)playbackInfoAtIndex:(unsigned long long)arg1;

@end