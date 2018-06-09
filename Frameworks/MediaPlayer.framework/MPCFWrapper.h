/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCFWrapper : NSObject {
    const void * _refValue;
}

@property (nonatomic, readonly) const void*refValue;

- (void)dealloc;
- (id)description;
- (id)initWithCFType:(void*)arg1;
- (const void*)refValue;

@end
