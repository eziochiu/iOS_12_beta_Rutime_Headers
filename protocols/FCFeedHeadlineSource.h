/* made by EzioChiu.
 */

@protocol FCFeedHeadlineSource <NSObject>

@required

- (void)fetchHeadlinesWithContext:(void *)arg1 forIdentifiers:(void *)arg2 downloadAssets:(void *)arg3 qualityOfService:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <FCContentContext> *, NSOrderedSet *, bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
