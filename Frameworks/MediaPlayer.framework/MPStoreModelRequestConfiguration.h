/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelRequestConfiguration : NSObject {
    NSURLRequest * _URLRequest;
    unsigned long long  _itemMetadataRequestReason;
    NSArray * _requestedItemIdentifiers;
    long long  _type;
}

@property (nonatomic, readonly) NSURLRequest *URLRequest;
@property (nonatomic, readonly) unsigned long long itemMetadataRequestReason;
@property (nonatomic, readonly) NSArray *requestedItemIdentifiers;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)URLRequest;
- (id)initWithRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2;
- (id)initWithURLRequest:(id)arg1;
- (unsigned long long)itemMetadataRequestReason;
- (id)requestedItemIdentifiers;
- (long long)type;

@end
