/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeInputMediaProperties : NSObject {
    NSString * _associatedAttachedMediaKey;
    BWFormat * _liveFormat;
    BWNodeInput * _owningNodeInput;
    BWFormat * _resolvedFormat;
}

@property (nonatomic, readonly) BWFormat *liveFormat;
@property (nonatomic, readonly) BWVideoFormat *liveVideoFormat;
@property (nonatomic, retain) BWFormat *resolvedFormat;
@property (nonatomic, readonly) BWVideoFormat *resolvedVideoFormat;

- (void)_setOwningNodeInput:(id)arg1 associatedAttachedMediaKey:(id)arg2;
- (void)dealloc;
- (id)liveFormat;
- (id)liveFormatFormat;
- (id)liveVideoFormat;
- (id)resolvedFormat;
- (id)resolvedVideoFormat;
- (void)setLiveFormat:(id)arg1;
- (void)setResolvedFormat:(id)arg1;

@end
