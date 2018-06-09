/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
 */

@interface GVEdge : NSObject {
    NSMutableArray * dummies;
    GVNode * from;
    bool  reversed;
    GVNode * to;
}

@property (nonatomic, retain) NSMutableArray *dummies;
@property (nonatomic, readonly) GVNode *from;
@property (nonatomic) bool reversed;
@property (nonatomic, readonly) GVNode *to;

- (void)dealloc;
- (id)description;
- (id)dummies;
- (id)from;
- (id)init;
- (id)initWithFromNode:(id)arg1 to:(id)arg2;
- (bool)reversed;
- (void)setDummies:(id)arg1;
- (void)setReversed:(bool)arg1;
- (id)to;

@end
