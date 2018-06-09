/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } * _mediator;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)mediatedPixelBufferAttributes;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)arg1;
- (void)setLayersAreSuppressed:(bool)arg1;
- (void)setRequestedPixelBufferAttributes:(id)arg1 forKey:(id)arg2;

@end
