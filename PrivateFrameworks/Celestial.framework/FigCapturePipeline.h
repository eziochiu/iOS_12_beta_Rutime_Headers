/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCapturePipeline : NSObject {
    BWGraph * _graph;
    NSMutableArray * _nodes;
}

@property (nonatomic, readonly) NSArray *nodes;

- (bool)addNode:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithGraph:(id)arg1;
- (id)nodes;

@end