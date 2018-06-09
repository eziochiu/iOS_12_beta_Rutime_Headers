/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroBeatMetadata : NSObject {
    FMTimedMetadataItem * _metadataItem;
    long long  _priority;
}

@property (nonatomic, retain) FMTimedMetadataItem *metadataItem;
@property (nonatomic) long long priority;

+ (id)beatWithMetadataItem:(id)arg1 andPriority:(long long)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMetadataItem:(id)arg1 andPriority:(long long)arg2;
- (id)metadataItem;
- (long long)priority;
- (void)setMetadataItem:(id)arg1;
- (void)setPriority:(long long)arg1;

@end
