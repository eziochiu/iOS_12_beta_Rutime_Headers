/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSCAContextSceneLayer : FBSSceneLayer {
    unsigned int  _contextID;
}

@property (nonatomic, readonly) CAContext *CAContext;
@property (nonatomic, readonly) unsigned int contextID;

+ (id)layerWithCAContext:(id)arg1;

- (id)CAContext;
- (id)_initWithCAContext:(id)arg1 contextID:(unsigned int)arg2 level:(double)arg3;
- (unsigned int)contextID;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCAContext:(id)arg1;
- (id)initWithCAContextID:(unsigned int)arg1 level:(double)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
