/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {
    CALayer * _blackBackgroundLayer;
    bool  _fillCanApplyToCALayer;
    bool  _layerNeedsUpdate;
}

@property (readonly) KNSlideBackgroundInfo *slideBackgroundInfo;

+ (id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureDescription:(id)arg3;

- (void).cxx_destruct;
- (id)additionalLayersUnderLayer;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isOpaque;
- (id)slideBackgroundInfo;
- (id)textureForDescription:(id)arg1;
- (bool)wantsToDistortWithImagerContext;

@end
