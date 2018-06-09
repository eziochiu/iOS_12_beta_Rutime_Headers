/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoMetadataOverlayNode : BWNode {
    struct CGContext { } * _bitmapContext;
    bool  _displayDefaultMetadata;
    struct __CTLine { } * _ellipsisToken;
    NSArray * _extraDebugMetadataKeys;
    int  _extraLinesAboveOverlay;
    bool  _markPixelBufferCenter;
    NSMutableDictionary * _metadataProviders;
    NSMutableArray * _overlaidRectangleProviders;
    NSDictionary * _slaveMetadata;
    struct __CFDictionary { } * _stringAttributes;
}

+ (void)initialize;

- (void)_drawOverlaidRectangles:(id)arg1 inBitmapContext:(struct CGContext { }*)arg2;
- (int)_drawOverlayLogs:(id)arg1 rects:(id)arg2 toPixelBuffer:(struct __CVBuffer { }*)arg3;
- (int)_renderDebugVideoMetadataOverlayToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_setupStringAttributes;
- (bool)addMetadataProviderForKey:(id)arg1 providerBlock:(id /* block */)arg2;
- (bool)addRectangleProviderForKey:(id)arg1 displayStyle:(int)arg2 providerBlock:(id /* block */)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
