/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPictureInPictureApplication : NSObject {
    NSString * _bundleIdentifier;
    int  _processIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) int processIdentifier;

+ (id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)init;
- (id)initWithProcessIdentifier:(int)arg1;
- (int)processIdentifier;

@end
