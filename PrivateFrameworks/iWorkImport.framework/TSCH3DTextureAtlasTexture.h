/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTextureAtlasTexture : NSObject {
    long long  mCurrentheight;
    long long  mCurrentxpos;
    long long  mCurrentypos;
    NSMutableArray * mLabels;
    struct vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int> > > { 
        struct tvec2<int> {} *__begin_; 
        struct tvec2<int> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<int> *, std::__1::allocator<glm::detail::tvec2<int> > > { 
            struct tvec2<int> {} *__value_; 
        } __end_cap_; 
    }  mPositions;
    TSCH3DTextureAtlasTextureResource * mResource;
    float  mSamples;
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    }  mSize;
}

@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })addLabel:(id)arg1;
- (void)dealloc;
- (id)getTextureDataBuffer;
- (id)initWithSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (void)p_invalidateResource;
- (id)resource;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;

@end
