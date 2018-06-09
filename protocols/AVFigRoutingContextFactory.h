/* made by EzioChiu.
 */

@protocol AVFigRoutingContextFactory <NSObject>

@required

- (struct OpaqueFigRoutingContext { }*)copyContextForUUIDWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)copyDisplayMenuVideoContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)copySystemAudioContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)copySystemMirroringContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)copySystemMusicContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createAudioContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createControlChannelOnlyContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createPerAppSecondDisplayContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createRemoteMusicControllerContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createVideoContextWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;

@end
