/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebCoreStatistics : NSObject

+ (int)autoreleasedPageCount;
+ (unsigned long long)cachedFontDataCount;
+ (unsigned long long)cachedFontDataInactiveCount;
+ (int)cachedFrameCount;
+ (int)cachedPageCount;
+ (void)emptyCache;
+ (void)garbageCollectJavaScriptObjects;
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(bool)arg1;
+ (unsigned long long)glyphPageCount;
+ (unsigned long long)iconPageURLMappingCount;
+ (unsigned long long)iconRecordCount;
+ (unsigned long long)iconRetainedPageURLCount;
+ (unsigned long long)iconsWithDataCount;
+ (unsigned long long)javaScriptGlobalObjectsCount;
+ (unsigned long long)javaScriptInterpretersCount;
+ (unsigned long long)javaScriptNoGCAllowedObjectsCount;
+ (id)javaScriptObjectTypeCounts;
+ (unsigned long long)javaScriptObjectsCount;
+ (unsigned long long)javaScriptProtectedGlobalObjectsCount;
+ (id)javaScriptProtectedObjectTypeCounts;
+ (unsigned long long)javaScriptProtectedObjectsCount;
+ (unsigned long long)javaScriptReferencedObjectsCount;
+ (id)javaScriptRootObjectClasses;
+ (id)javaScriptRootObjectTypeCounts;
+ (id)memoryStatistics;
+ (void)purgeInactiveFontData;
+ (void)returnFreeMemoryToSystem;
+ (void)setCacheDisabled:(bool)arg1;
+ (void)setJavaScriptGarbageCollectorTimerEnabled:(bool)arg1;
+ (void)setShouldPrintExceptions:(bool)arg1;
+ (bool)shouldPrintExceptions;
+ (void)startIgnoringWebCoreNodeLeaks;
+ (id)statistics;
+ (void)stopIgnoringWebCoreNodeLeaks;

@end
