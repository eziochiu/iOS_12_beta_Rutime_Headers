/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKContentPlayRequestOperation : WLKNetworkRequestOperation {
    NSString * _canonicalID;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)initWithCanonicalID:(id)arg1;
- (id)responseProcessor;

@end
