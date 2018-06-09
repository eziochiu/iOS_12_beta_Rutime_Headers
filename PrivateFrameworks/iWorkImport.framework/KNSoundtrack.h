/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSoundtrack : TSPObject <NSCopying> {
    NSArray * _media;
    long long  _mode;
    float  _volume;
}

@property (nonatomic, copy) NSArray *media;
@property (nonatomic) long long mode;
@property (nonatomic) float volume;

+ (bool)needsObjectUUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithSoundtrackMedia:(id)arg1 context:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)media;
- (long long)mode;
- (void)saveToArchiver:(id)arg1;
- (void)setMedia:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
