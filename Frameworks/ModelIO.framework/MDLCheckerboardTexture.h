/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLCheckerboardTexture : MDLTexture {
    struct CGColor { } * _color1;
    struct CGColor { } * _color2;
    int  _divisions;
}

@property (nonatomic) struct CGColor { }*color1;
@property (nonatomic) struct CGColor { }*color2;
@property (nonatomic) float divisions;

- (struct CGColor { }*)color1;
- (struct CGColor { }*)color2;
- (void)dealloc;
- (float)divisions;
- (id)generateDataAtLevel:(long long)arg1;
- (id)initWithDivisions:(void *)arg1 name:(void *)arg2 dimensions:(void *)arg3 channelCount:(void *)arg4 channelEncoding:(void *)arg5 color1:(void *)arg6 color2:(void *)arg7; // needs 7 arg types, found 6: float, id, int, long long, struct CGColor { }*, struct CGColor { }*
- (void)setColor1:(struct CGColor { }*)arg1;
- (void)setColor2:(struct CGColor { }*)arg1;
- (void)setDivisions:(float)arg1;

@end
