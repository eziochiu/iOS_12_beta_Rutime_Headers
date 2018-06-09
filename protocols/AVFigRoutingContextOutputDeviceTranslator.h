/* made by EzioChiu.
 */

@protocol AVFigRoutingContextOutputDeviceTranslator <NSObject>

@required

- (void)addOutputDevice:(void *)arg1 withOptions:(void *)arg2 toRoutingContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: AVOutputDevice *, const struct __CFDictionary { }*, struct OpaqueFigRoutingContext { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (AVOutputDevice *)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (NSArray *)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (void)removeOutputDevice:(AVOutputDevice *)arg1 fromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg2;
- (void)setOutputDevice:(void *)arg1 withOptions:(void *)arg2 onRoutingContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: AVOutputDevice *, const struct __CFDictionary { }*, struct OpaqueFigRoutingContext { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (void)setOutputDevices:(NSArray *)arg1 withOptions:(const struct __CFDictionary { }*)arg2 onRoutingContext:(struct OpaqueFigRoutingContext { }*)arg3;

@end
