/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPLoadableFonts : NSObject {
    NSOperationQueue * _fontQueue;
    NSMutableDictionary * _loadableFontFamilies;
    NSMutableDictionary * _loadableFonts;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (id)autorelease;
- (void)backgroundLoadAll;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)loadAll;
- (void)loadFontWithName:(id)arg1;
- (void)loadFontsForGroup:(id)arg1;
- (void)p_loadFontWithInfo:(id)arg1;
- (void)pauseBackgroundLoading;
- (void)registerFontName:(id)arg1 forPath:(id)arg2 forGroup:(id)arg3 isObfuscated:(bool)arg4 backgroundLoad:(bool)arg5;
- (oneway void)release;
- (void)resumeBackgroundLoading;
- (id)retain;
- (unsigned long long)retainCount;
- (void)unregisterFontsForGroup:(id)arg1;

@end
