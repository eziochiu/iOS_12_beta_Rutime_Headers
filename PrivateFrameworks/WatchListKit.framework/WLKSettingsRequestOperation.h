/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKSettingsRequestOperation : NSOperation {
    NSError * _error;
    id /* block */  _requestCompletionBlock;
    NSDictionary * _response;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, copy) id /* block */ requestCompletionBlock;
@property (nonatomic, readonly) NSDictionary *response;

+ (id)URLBagKey;

- (void).cxx_destruct;
- (id)_runNetworkOperationAndReturnError:(id*)arg1;
- (id)error;
- (void)main;
- (id /* block */)requestCompletionBlock;
- (id)requestProperties;
- (id)response;
- (void)setRequestCompletionBlock:(id /* block */)arg1;

@end
