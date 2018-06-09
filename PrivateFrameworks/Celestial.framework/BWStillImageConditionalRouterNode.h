/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageConditionalRouterNode : BWFanOutNode {
    id /* block */  _shouldEmitSampleBufferDecisionProvider;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithRoutingConfiguration:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
