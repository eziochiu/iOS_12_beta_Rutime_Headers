/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBasicContentRequestOperation : WLKNetworkRequestOperation {
    NSArray * _contentIDs;
}

@property (nonatomic, readonly) WLKBasicContentMetadata *basicContentMetadata;
@property (nonatomic, readonly, copy) NSArray *contentIDs;

- (void).cxx_destruct;
- (id)basicContentMetadata;
- (id)contentIDs;
- (id)initWithContentID:(id)arg1;
- (id)initWithContentIDs:(id)arg1;
- (id)responseProcessor;

@end
