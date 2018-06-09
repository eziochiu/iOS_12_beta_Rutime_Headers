/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier> {
    AVAssetLoggingIdentifierInternal * _priv;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)makeDerivedIdentifier;
- (id)name;

@end
