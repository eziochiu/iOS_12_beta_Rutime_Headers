/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaLibraryUtilities : NSObject

+ (id)_sortIndexesForObjects:(id)arg1 titleForObjectBlock:(id /* block */)arg2;
+ (id)changeSetMapFromFetchControllerResult:(id)arg1 andRequests:(id)arg2;
+ (id)groupingForMediaEntities:(id)arg1 groupingKeyPath:(id)arg2 groupingSortComparator:(id /* block */)arg3 performDefaultSort:(bool)arg4 sortIndexPropertyKey:(id)arg5;
+ (id)mediaEntitiesMapFromFetchControllerResult:(id)arg1 andRequests:(id)arg2;
+ (id /* block */)mediaItemEntityTypesSortComparator;
+ (id)sortIndexesForGrouping:(id)arg1;
+ (id)sortIndexesForMediaEntities:(id)arg1 sortIndexPropertyKey:(id)arg2;

@end
