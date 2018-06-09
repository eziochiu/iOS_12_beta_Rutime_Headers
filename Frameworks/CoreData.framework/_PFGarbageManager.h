/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFGarbageManager : NSObject {
    NSMutableDictionary * _filesToCleanUp;
    NSMutableDictionary * _storeLinksDirs;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultInstance;
+ (void)initialize;

- (void)_deleteIfNecessary:(id)arg1;
- (void)_doCleanupForDir:(id)arg1 exceptURLs:(id)arg2;
- (id)_init__;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (void)doCleanupForURL:(id)arg1;
- (bool)registerURLForCleanup:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)temporaryLinksDirectoryForStore:(id)arg1;

@end
