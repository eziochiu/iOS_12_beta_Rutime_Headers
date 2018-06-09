/* made by EzioChiu.
 */

@protocol SXLayouterDelegate <NSObject>

@required

- (void)layouter:(id <SXLayouter>)arg1 didFinishLayoutForComponent:(id <SXComponent>)arg2 layoutBlueprint:(SXLayoutBlueprint *)arg3 shouldContinueLayout:(bool*)arg4;

@end
