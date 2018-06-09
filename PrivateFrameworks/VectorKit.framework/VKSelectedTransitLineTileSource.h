/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKSelectedTransitLineTileSource : VKTransitLineTileSource {
    unsigned int  _maxZ;
    GEOMapItemIdentifier * _selectedLineID;
    unsigned long long  _selectedLineIDSequenceCounter;
}

@property (nonatomic) unsigned int maxZ;
@property (nonatomic, retain) GEOMapItemIdentifier *selectedLineID;

- (id)_extraInfoForPendingSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (bool)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2;
- (bool)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg5 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator { struct shared_ptr<md::weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct weak_interface_ptr<md::LabelExternalObjectsModerator> {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct LabelExternalIconRenderer {} *x2; struct vector<std::__1::shared_ptr<md::LabelCreateExternalIconRequest>, geo::StdAllocator<std::__1::shared_ptr<md::LabelCreateExternalIconRequest>, lhp::Allocator> > { struct shared_ptr<md::LabelCreateExternalIconRequest> {} *x_3_1_1; struct shared_ptr<md::LabelCreateExternalIconRequest> {} *x_3_1_2; struct __compressed_pair<std::__1::shared_ptr<md::LabelCreateExternalIconRequest> *, geo::StdAllocator<std::__1::shared_ptr<md::LabelCreateExternalIconRequest>, lhp::Allocator> > { struct shared_ptr<md::LabelCreateExternalIconRequest> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<md::LabelCreateExternalIconRequest>, lhp::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_3_1_3; } x3; struct unordered_set<std::__1::shared_ptr<md::LabelExternalIcon>, std::__1::hash<std::__1::shared_ptr<md::LabelExternalIcon> >, std::__1::equal_to<std::__1::shared_ptr<md::LabelExternalIcon> >, std::__1::allocator<std::__1::shared_ptr<md::LabelExternalIcon> > > { struct __hash_table<std::__1::shared_ptr<md::LabelExternalIcon>, std::__1::hash<std::__1::shared_ptr<md::LabelExternalIcon> >, std::__1::equal_to<std::__1::shared_ptr<md::LabelExternalIcon> >, std::__1::allocator<std::__1::shared_ptr<md::LabelExternalIcon> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelExternalIcon>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelExternalIcon>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelExternalIcon>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelExternalIcon>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelExternalIcon>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelExternalIcon>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelExternalIcon>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; }*)arg6 transitLineSharedResources:(const struct shared_ptr<const md::TransitLineSharedResources> { struct TransitLineSharedResources {} *x1; struct __shared_weak_count {} *x2; }*)arg7;
- (unsigned char)mapLayerForZoomLevelRange;
- (unsigned int)maxZ;
- (void)performDownload:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 isPrefetch:(bool)arg2;
- (id)selectedLineID;
- (void)setMaxZ:(unsigned int)arg1;
- (void)setSelectedLineID:(id)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForDownloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end
