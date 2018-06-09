/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSEpisodeSizeInfo : NSObject <NSSecureCoding> {
    bool  _downloaded;
    double  _duration;
    unsigned long long  _size;
}

@property (getter=isDownloaded, nonatomic, readonly) bool downloaded;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long size;

+ (bool)supportsSecureCoding;

- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(unsigned long long)arg1 duration:(double)arg2 downloaded:(bool)arg3;
- (bool)isDownloaded;
- (bool)isEqual:(id)arg1;
- (unsigned long long)size;

@end
