/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKSearchWatchListRequest : WLKRequest {
    NSDictionary * _options;
}

@property (nonatomic, readonly, copy) NSDictionary *options;

- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (id)options;

@end
