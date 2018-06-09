/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLExpirableSet : NSObject {
    NSMutableDictionary * _recentTouches;
    double  _secondsToExpire;
    NSMutableSet * _set;
}

- (bool)_didExpireObject:(id)arg1;
- (void)_touch:(id)arg1;
- (void)addObject:(id)arg1;
- (bool)containsObject:(id)arg1;
- (void)dealloc;
- (id)initWithSecondsToExpire:(double)arg1;
- (void)removeObject:(id)arg1;

@end
