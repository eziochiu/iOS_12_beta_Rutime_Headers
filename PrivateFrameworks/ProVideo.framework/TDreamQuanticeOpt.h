/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamQuanticeOpt : TDreamProgramWrapper {
    int  levelsUniform;
    float  numLevels;
    float  numLevelsRecip;
    int  recipLevelsUniform;
}

- (id)init;
- (void)setNumLevels:(unsigned int)arg1;
- (void)setUniforms;

@end
