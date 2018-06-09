/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContactsInterface : NSObject

+ (void)clearCache;
+ (bool)enumerateContactsMatchingName:(id)arg1 withKeysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
+ (bool)handleExistsInContactStoreForHandle:(id)arg1 withHandleType:(id)arg2;
+ (void)initialize;
+ (id)unifiedMeContactWithKeysToFetch:(id)arg1 usingContactStore:(id)arg2 error:(id*)arg3;

@end
