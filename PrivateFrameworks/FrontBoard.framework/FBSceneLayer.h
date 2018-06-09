/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneLayer : NSObject <BSDescriptionProviding> {
    long long  _alignment;
    unsigned int  _contextID;
    NSString * _externalSceneID;
    double  _level;
    unsigned int  _sceneID;
    long long  _type;
}

@property (nonatomic) long long alignment;
@property (nonatomic, readonly) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *externalSceneID;
@property (readonly) unsigned long long hash;
@property (nonatomic) double level;
@property (nonatomic) unsigned int sceneID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)layerWithFBSSceneLayer:(id)arg1;

- (void).cxx_destruct;
- (long long)alignment;
- (unsigned int)contextID;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)externalSceneID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContextID:(unsigned int)arg1;
- (id)initWithExternalSceneID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)level;
- (unsigned int)sceneID;
- (void)setAlignment:(long long)arg1;
- (void)setExternalSceneID:(id)arg1;
- (void)setLevel:(double)arg1;
- (void)setSceneID:(unsigned int)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end
