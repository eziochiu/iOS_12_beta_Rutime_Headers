/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarkSegments : NSObject <NSCopying, NSSecureCoding, VNObservationsCacheKeyProviding, VNRequestRevisionProviding> {
    unsigned long long  _espressoOutputBufferChannels;
    NSData * _espressoOutputBufferData;
    unsigned long long  _espressoOutputBufferHeight;
    unsigned long long  _espressoOutputBufferWidth;
    unsigned long long  _requestRevision;
}

@property (nonatomic) unsigned long long espressoOutputBufferChannels;
@property (nonatomic, retain) NSData *espressoOutputBufferData;
@property (nonatomic) unsigned long long espressoOutputBufferHeight;
@property (nonatomic) unsigned long long espressoOutputBufferWidth;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (int)_argmax3:(const float*)arg1 index:(int)arg2 segmentedImageSize:(struct CGSize { double x1; double x2; })arg3 numberOfSegments:(unsigned long long)arg4;
+ (struct map<int, int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, int> > > { struct __tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })_faceLandmarkIndexToFlagMap;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CVBuffer { }*)createImageOfFaceLandmarkSegments:(unsigned long long)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)espressoOutputBufferChannels;
- (id)espressoOutputBufferData;
- (unsigned long long)espressoOutputBufferHeight;
- (unsigned long long)espressoOutputBufferWidth;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 espressoOutputBufferWidth:(unsigned long long)arg2 espressoOutputBufferHeight:(unsigned long long)arg3 espressoOutputBufferChannels:(unsigned long long)arg4 espressoOutputBufferData:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)observationsCacheKey;
- (unsigned long long)requestRevision;
- (void)setEspressoOutputBufferChannels:(unsigned long long)arg1;
- (void)setEspressoOutputBufferData:(id)arg1;
- (void)setEspressoOutputBufferHeight:(unsigned long long)arg1;
- (void)setEspressoOutputBufferWidth:(unsigned long long)arg1;

@end
