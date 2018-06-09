/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ClipBackground : NSObject <NSCopying> {
    NSMutableDictionary * _backgroundEffectSettings;
    PVEffect * _effect;
    int  _type;
}

@property (nonatomic, readonly) PVEffect *backgroundEffect;
@property (nonatomic, retain) NSMutableDictionary *backgroundEffectSettings;
@property (nonatomic, readonly) NSString *effectID;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)backgroundEffect;
- (id)backgroundEffectSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectID;
- (id)init;
- (void)setBackgroundEffectSettings:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
