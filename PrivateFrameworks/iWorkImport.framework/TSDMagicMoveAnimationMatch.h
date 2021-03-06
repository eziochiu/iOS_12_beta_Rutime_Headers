/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMagicMoveAnimationMatch : NSObject {
    bool  _didUseMorphTexture;
    bool  _hasBeenTornDown;
    TSDTextureSet * _incomingTexture;
    bool  _isMorphMatch;
    bool  _isTextStyleIdenticalExceptSize;
    bool  _isUsingMorphTexture;
    TSDTextureSet * _morphQueuedForDeletionTexture;
    TSDTextureSet * _morphQueuedTexture;
    TSDTextureSet * _morphTexture;
    NSLock * _morphTextureUpdateLock;
    TSDTextureSet * _outgoingTexture;
    bool  _shouldDisableTextMorphing;
}

@property (nonatomic, retain) TSDTextureSet *incomingTexture;
@property (nonatomic, readonly) bool isMatched;
@property (nonatomic) bool isMorphMatch;
@property (nonatomic) bool isTextStyleIdenticalExceptSize;
@property (nonatomic, retain) TSDTextureSet *outgoingTexture;
@property (nonatomic) bool shouldDisableTextMorphing;

+ (id)animationMatch;
+ (unsigned long long)magicMoveMorphTexturesPerSecond;

- (void)addMorphTexture:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)incomingTexture;
- (id)init;
- (bool)isMatched;
- (bool)isMorphMatch;
- (bool)isTextStyleIdenticalExceptSize;
- (id)lockCurrentMorphTexture;
- (id)outgoingTexture;
- (void)setIncomingTexture:(id)arg1;
- (void)setIsMorphMatch:(bool)arg1;
- (void)setIsTextStyleIdenticalExceptSize:(bool)arg1;
- (void)setOutgoingTexture:(id)arg1;
- (void)setShouldDisableTextMorphing:(bool)arg1;
- (bool)shouldDisableTextMorphing;
- (void)teardown;
- (void)unlockCurrentMorphTexture;

@end
