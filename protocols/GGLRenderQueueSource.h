/* made by EzioChiu.
 */

@protocol GGLRenderQueueSource <NSObject>

@required

- (struct RenderQueue { struct vector<ggl::RenderQueue::Pass, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> > { struct Pass {} *x_1_1_1; struct Pass {} *x_1_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> > { struct Pass {} *x_3_2_1; struct StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_1_1_3; } x1; struct vector<ggl::ComputeQueue *, geo::StdAllocator<ggl::ComputeQueue *, ggl::Allocator> > { struct ComputeQueue {} **x_2_1_1; struct ComputeQueue {} **x_2_1_2; struct __compressed_pair<ggl::ComputeQueue **, geo::StdAllocator<ggl::ComputeQueue *, ggl::Allocator> > { struct ComputeQueue {} **x_3_2_1; struct StdAllocator<ggl::ComputeQueue *, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_2_1_3; } x2; struct vector<ggl::CommandBuffer *, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator> > { struct CommandBuffer {} **x_3_1_1; struct CommandBuffer {} **x_3_1_2; struct __compressed_pair<ggl::CommandBuffer **, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator> > { struct CommandBuffer {} **x_3_2_1; struct StdAllocator<ggl::CommandBuffer *, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_3_1_3; } x3; }*)renderQueueForTimestamp:(double)arg1;

@end
