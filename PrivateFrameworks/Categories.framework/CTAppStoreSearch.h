/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Categories.framework/Categories
 */

@interface CTAppStoreSearch : NSObject {
    NSURLSession * _searchURLSession;
}

@property (readonly) NSURLSession *searchURLSession;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleSearchResultsWithmacOSData:(id)arg1 iOSData:(id)arg2 tvOSData:(id)arg3 macOSError:(id)arg4 iOSError:(id)arg5 tvOSError:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)init;
- (void)lookupAppWithBundleID:(id)arg1 deviceFamily:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)performiTunesQueryWithURLComponents:(id)arg1 queryItems:(id)arg2 deviceFamily:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)searchForAppsNamed:(id)arg1 deviceFamily:(unsigned long long)arg2 resultLimit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)searchURLSession;

@end
